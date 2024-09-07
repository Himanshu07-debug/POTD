long long findNth(long long number) {
    // code here.
    string result;
    while(number > 0) {
        result = to_string(number % 9) + result;
        number = number / 9;
    }
    return stol(result);
}