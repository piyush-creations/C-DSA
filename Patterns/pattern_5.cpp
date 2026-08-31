#include <iostream>
using namespace std;

void inverted_pyramid(int n)
{
    for (int i = 1; i <= n; i++)
    {
        // space
        for (int j = 1; j <= i-1; j++)
        {
            cout <<" ";
        }
        // stars
        for (int j = 1; j <=2*(n-i)+1; j++)
        {
            cout <<"*";
        }
         // space
        for (int j = 1; j <= i-1; j++)
        {
            cout <<" ";
        }
        cout << "\n";
    }
}

int main()
{
    int n;
    cout << "enter the value of n ";
    cin >> n;
    inverted_pyramid(n);
    return 0;
}