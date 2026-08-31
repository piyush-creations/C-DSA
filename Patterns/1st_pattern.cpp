#include <iostream>
using namespace std;

void pattern_1(int n ){
    for(int i=0; i<=n; i++)
    {
        for(int j=0; j<=n; j++){
            cout<<"*";
        }
        cout<<endl;
    }
}
void pattern_2(int n ){
    for(int i=0; i<=n; i++)
    {
        for(int j=0; j<=i; j++){
            cout<<"*";
        }
        cout<<endl;
    }
}
void pattern_3(int n ){
    for(int i=0; i<=n; i++)
    {
        for(int j=i; j<=n; j++){
            cout<<"*";
        }
        cout<<endl;
    }
}
void pattern_4(int n ){
    for(int i=0; i<=n; i++)
    {
        for(int j=0; j<=i-1; j++){
            cout<<i;
        }
        cout<<endl;
    }
}
void pattern_5(int n ){
    for(int i=0; i<=n; i++)
    {
        //space 
        for(int j = 0; j < n-i-1;j++){
            cout<<" ";
        }
        // stars 
        for(int j =0 ; j<2*i+1; j++){
            cout << "*";
        }
        //space
        for(int j =0; j< n-i-1; j++){
            cout<< " ";
        } 
        cout<<endl;
    }
}
void pattern_6(int n ){
    for(int i=0; i<=n; i++)
    {
        //space 
        for(int j = 0; j < i;j++){
            cout<<" ";
        }
        // stars ṣ
        for(int j =0 ; j< 2*n-(2*i-1); j++){
            cout << "*";
        }
        //space
        for(int j =0; j< i; j++){
            cout<< " ";
        } 
        cout<<endl;
    }
}


int main() {
    int n;
    cout<< " eneter the value of n ";
    cin>>n;
    pattern_1(n);
    // pattern_2(n);
    // pattern_3(n);
    // pattern_4(n);
        // pattern_5(n);
        // pattern_6(n);

	return 0;
}
