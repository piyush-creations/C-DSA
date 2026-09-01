#include <iostream>
using namespace std;

void number_both_triangle(int n)
{
    int space = 2 * (n - 1);
    for (int i = 1; i <= n; i++)
    {
        // number
        for (int j = 1; j <= i; j++)
        {
            cout << j;
        }
        // space
        for (int j = 1; j <= space; j++)
        {
            cout << " ";
        }

        // number
        for (int j = i; j >= 1; j--)
        {
            cout << j;
        }
        cout << endl;
        space -= 2;
    }
}

int main()
{
    int n;
    cout << "enter the value of n ";
    cin >> n;
    number_both_triangle(n);
    return 0;
}