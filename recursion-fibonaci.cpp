#include <iostream>
using namespace std;
long long int fibb(long long int n)
{
    if (n == 0)
    {
        return 0;
    }
    else if (n == 1)
    {
        return 1;
    }
    else
    {
        return fibb(n - 1) + fibb(n - 2);
    }
}
int main()
{
    int n;
    cout << "Enter a number:-";
    cin >> n;
    if (n < 0)
    {
        cout << "Error: Entered a non-negative number." << endl;
    }
    else
    {
        long long int output = fibb(n);
        cout << "Fibonacci number at position " << n << " is: " << output << endl;
    }

    return 0;
}
