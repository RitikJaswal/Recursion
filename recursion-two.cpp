#include <iostream>
using namespace std;
long long int power(int n);
int main()
{
    int n;
    cout << "Enter the number:-";
    cin >> n;

    if (n < 0)
    {
        cout << "Error:-Enter an positive number" << endl;
    }
    else
    {
        long long int result = power(n);
        cout << "Your answer will be:" << result;
    }
    return 0;
}
long long int power(int n)
{
    if (n == 0)
    {
        return 1;
    }
    long long int recresult = power(n-1);
    long long int result = 2 * recresult;
    return result;
}