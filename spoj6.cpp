#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

string nextPalindrome(string k) {
    int n = k.size();
    string first_half = k.substr(0, n / 2);
    string middle;
    if (n % 2 == 0) {
        middle = "";
    } else {
        middle = k.substr(n / 2, 1);
    }
    string second_half = "";
    for (int i = first_half.size() - 1; i >= 0; --i) {
        second_half += first_half[i];
    }
    string palindrome = first_half + middle + second_half;
    if (palindrome > k) {
        return palindrome;
    }
    for (int i = (n - 1) / 2; i >= 0; --i) {
        if (palindrome[i] != '9') {
            palindrome[i]++;
            if (i != n - i - 1) {
                palindrome[n - i - 1] = palindrome[i];
            }
            return palindrome;
        }
    }
    palindrome[i] = palindrome[n - i - 1] = '0';
    return "1" + string(n - 1, '0') + "1";
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        string k;
        cin >> k;
        cout << nextPalindrome(k) << endl;
    }
    return 0;
}
