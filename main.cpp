#include <iostream>
using namespace std;

//Question 2

// int factorial(int n) {
//     if (n == 0) return 1;
//     return n * factorial(n - 1);
// }
//
// int main() {
//     cout << "Enter a number to find its factorial: ";
//     cin >> num;
//     cout << "The factorial is: " << factorial(num) << endl;
//     return 0;
// }


//Question 3

// int fibonacci(int n) {
//     if (n == 0) return 0;
//     if (n == 1) return 1;
//     return fibonacci(n - 1) + fibonacci(n - 2);
// }
//
// int main() {
//     int num;
//     cout << "Enter a number to find its Fibonacci value: ";
//     cin >> num;
//     cout << "The Fibonacci value is: " << fibonacci(num) << endl;
//     return 0;
// }

//Question 4

// int sum(int n) {
//     if (n == 0) return 0;
//     return n + sum(n - 1);
// }
//
// int main() {
//     int num;
//     cout << "Enter a number : ";
//     cin >> num;
//     cout << "The sum is: " << sum(num) << endl;
//     return 0;
// }


//Question 5

// void printDescending(int n) {
//     if (n == 0) return;
//     cout << n << " ";
//     printDescending(n - 1);
// }
//
// int main() {
//     int num;
//     cout << "Enter a number : ";
//     cin >> num;
//     printDescending(num);
//     cout << endl;
//     return 0;
// }


//Question 6

// int countDigits(int n) {
//     if (n == 0) return 0;
//     return 1 + countDigits(n / 10);
// }
// int main() {
//     int num;
//     cout << "Enter a number: ";
//     cin >> num;
//     cout << "The number of digits is: " << countDigits(num) << endl;
//     return 0;
// }

//Question 7

// int sumOfDigits(int n) {
//     if (n == 0) return 0;
//     return (n % 10) + sumOfDigits(n / 10);
// }
//
// int main() {
//     int num;
//     cout << "Enter a number: ";
//     cin >> num;
//     cout << "The sum of digits is: " << sumOfDigits(num) << endl;
//     return 0;
// }


//Question 8

// int power(int x, int y) {
//     if (y == 0) return 1;
//     return x * power(x, y - 1);
// }
//
// int main() {
//     int x, y;
//     cout << "Enter base (x) and exponent (y): ";
//     cin >> x >> y;
//     cout << x << " raised to the power of " << y << " is: " << power(x, y) << endl;
//     return 0;
// }

//Question 9

// int reverseNumber(int n, int rev = 0) {
//     if (n == 0) return rev;
//     return reverseNumber(n / 10, rev * 10 + n % 10);
// }
//
// int main() {
//     int num;
//     cout << "Enter a number to reverse its digits: ";
//     cin >> num;
//     cout << "The reversed number is: " << reverseNumber(num) << endl;
//     return 0;
// }

//Question 10

bool isPalindromeHelper(int n, int rev) {
    if (n == 0) return n == rev;
    return isPalindromeHelper(n / 10, rev * 10 + n % 10);
}

bool isPalindrome(int n) {
    return n == reverseNumber(n);
}

int main() {
    int num;
    cout << "Enter a number to check if it's a palindrome: ";
    cin >> num;
    cout << (isPalindrome(num) ? "The number is a palindrome." : "The number is not a palindrome.") << endl;
    return 0;
}
