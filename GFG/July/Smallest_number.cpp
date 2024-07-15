
// Given two integers s and d. The task is to find the smallest number such that the sum of its digits is s and the number of digits in the number 
// are d. Return a string that is the smallest possible number. If it is not possible then return -1.

// Input: s = 9, d = 2
// Output: 18 
// Explanation: 18 is the smallest number possible with the sum of digits = 9 and total digits = 2.

// 1 ≤ s ≤ 100
// 1 ≤ d ≤ 6


// We cant have leading 0's in number .. so for safer side.. humne starting me ek 1 rakh hi diye...
// now s - 1 banana shuru kro....

// agar s banate banate samne wla digit lga bhi to usko + krke laga denge
// take ex --> 18 and d = 2,
// humne 10 bna liye, now 17 banane chale... piche 9 gya, then 8+ ho gya first digit 1 se --> tot ==> 99


string smallestNumber(int s, int d) {

    if (d * 9 < s)   return "-1";

    int n = pow(10, d - 1);

    string temp = to_string(n);   // leading 1 lagake no.

    int sum = s - 1;

    int i = d - 1;

    while (i >= 0 && sum > 0) {

        if (sum > 9) {

            temp[i] = '9';
            sum = sum - 9;

        } 
        else {

            int val = temp[i] - '0';
            val = val + sum;
            temp[i] = '0' + val;
            sum = 0;      // yeah beech wale 0 honge, starting me nhi jayenge...

        }

        i--;

    }

    return temp;

}