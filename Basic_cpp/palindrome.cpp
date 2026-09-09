#include<iostream>
using namespace std;
void palindrome(){
    int n , reverse = 0, digit;
    cin>> n;
    digit = n;
    while(n>0){
        reverse =reverse*10+ (n % 10);
        n = n/10;
    }
    cout<<reverse;
    if(reverse == digit){
        cout<<" it is a palindrome number";
    }
}
int main (){
    palindrome();
    return 0;
}