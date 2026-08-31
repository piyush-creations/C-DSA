#include <iostream>
using namespace std;

void pattern_2(int n)
{
    for (int i = 1; i <= n; i++)
    {
        // space
        for (int j = 1; j <= n - i; j++)
        {
            cout <<" ";
        }
        // stars
        for (int j = 1; j <= i; j++)
        {
            cout <<"*";
        }
        cout << "\n";
    }
}

int main()
{
    int n;
    cout << "enter the value of n ";
    cin >> n;
    pattern_2(n);
    return 0;
}