#include <iostream>
using namespace std;

void daimond(int n)
{

    for (int i = 1; i <= n; i++)
    {
        // space
        for (int j = 1; j <= n - i; j++)
        {
            cout << " ";
        }
        // stars
        for (int j = 1; j <= 2 * i - 1; j++)
        {
            cout << "*";
        }
        // space
        for (int j = 1; j <= n - i; j++)
        {
            cout << " ";
        }
        cout << "\n";
    }
    for (int i = 1; i <= n; i++)
    {
        // space
        for (int j = 1; j <= i - 1; j++)
        {
            cout << " ";
        }
        // stars
        for (int j = 1; j <= 2 * (n - i) + 1; j++)
        {
            cout << "*";
        }
        // space
        for (int j = 1; j <= i - 1; j++)
        {
            cout << " ";
        }
        cout << "\n";
    }
}

int main()
{
    int n;
    cout << "enter the value of n ";
    cin >> n;
    daimond(n);
    return 0;
}