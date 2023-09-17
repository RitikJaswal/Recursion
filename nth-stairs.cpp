#include <iostream>
using namespace std;
long long int count(int n)
{
    if (n == 1)
    {
        return 1;
    }
    else if (n == 2)
    {
        return 2;
    }
    else
    {
        return count(n - 1) + count(n - 2);
    }
}
int main()
{
    int n;
    cout << "Enter the number:-" << endl;
    cin >> n;
    if (n < 0)
    {
        cout << "Enter a positive number!";
    }
    else
    {
        long long int output = count(n);
        cout << "Number of ways to reach nth stair is:-" << output << endl;
    }
    return 0;
}
