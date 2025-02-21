#include <iostream> 
using namespace std; 

int reverseNumber(int num) { 
    int reversed = 0; 
    while (num > 0) { 
        int remainder = num%10; 
        reversed = reversed * 10 + remainder; 
        num /= 10; 
    } 
    return reversed; 
} 

int main() { 
    int N; 
    cin >> N; 
    for (int i = 0; i < N; ++i) { 
        int num1, num2; 
        cin >> num1 >> num2; 
    if (num1 <= 0 || num2 <= 0) {
         cout << "Input must be positive integers." << endl; 
        return 1;  
    } 
         
        int reversedNum1 = reverseNumber(num1); 
        int reversedNum2 = reverseNumber(num2); 
        int sum = reversedNum1 + reversedNum2; 
        int reversedSum = reverseNumber(sum); 
        cout << reversedSum << endl; 
    } 
    return 0; 
} 