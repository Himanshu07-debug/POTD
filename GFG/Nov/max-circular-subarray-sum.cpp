int kadane(vector<int> &arr) {
    int maxSum = arr[0];
    int currentSum = arr[0];

    for (int i = 1; i < arr.size(); i++) {
        currentSum = max(arr[i], currentSum + arr[i]);
        maxSum = max(maxSum, currentSum);
    }

    return maxSum;
}

int circularSubarraySum(vector<int> &arr) {

    int n = arr.size();

    int maxNormal = kadane(arr);
    
    if (maxNormal < 0) {
        return maxNormal;
    }

    int arraySum = 0;
    for (int i = 0; i < n; i++) {
        arraySum += arr[i];
        arr[i] = -arr[i]; 
    }

    int minSubarraySum = kadane(arr);
    int maxCircular = arraySum + minSubarraySum; 

    return max(maxNormal, maxCircular);
}