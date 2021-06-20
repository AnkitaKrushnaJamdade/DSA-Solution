// Problem Statement:
//  The Fibonacci sequence is defined as follows: the first number of the sequence is 0, the
// second number is 1 and the nth number is the sum of the (n - 1)th and (n - 2)th numbers. Write a
// function that takes in an integer n and returns the nth Fibonacci number.
//  Important note: the Fibonacci sequence is often defined with its first two numbers as F0 = 0 and
// F1= 1. For the purpose of this question, the first Fibonacci number is F0; therefore, getNthFib(1) is
// equal to F0, getNthFib(2) is equal to F1, etc..

#include <iostream>
using namespace std;

int NFib(int n)
{
    int cnt = 0;
    if (n == 0 || n == 1 || n == 2)
    {
        if (n == 0 || n == 1)
            return 0;
        else
            return 1;
    }
    else
    {
        return NFib(n - 1) + NFib(n - 2);
    }
}

int main()
{
    int n;
    cout << "Enter n: ";
    cin >> n;

    int ans = NFib(n);

    cout << "The answer is: " << ans;
    return 0;
}
