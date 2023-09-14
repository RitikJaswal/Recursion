#include <iostream>
using namespace std;

// Declare the factorial function
long long int factorial(int n);

int main()
{
    int n;
    cout << "Enter a positive integer: ";
    cin >> n;

    if (n < 0)
    {
        cout << "Factorial is not defined for negative numbers." << endl;
    }
    else
    {
        long long int result = factorial(n);
        cout << "Factorial of " << n << " is " << result << endl;
    }

    return 0;
}

// Define the factorial function
long long int factorial(int n)
{
    if (n == 1 || n == 0)
    {
        return 1;
    }
    long long int Recresult = factorial(n - 1);
    long long int result = n * Recresult;
    return result;
}