#include<iostream>
using namespace std;
void all_div(int n){
    int i ;
    for(i=1;i<=n ;i++){
        if(n%i==0){
            cout<<i<<endl;
        }

    }
}
void count_div(int n){
     int i , count=0;
    for(i=1;i<=n ;i++){
        if(n%i==0){
            count++;
        }

    }
    cout<<count;
}
void prime_number(int n){
    for(int number = 2; number <= n; number++){
        bool is_prime = true;

        for(int divisor = 2; divisor * divisor <= number; divisor++){
            if(number % divisor == 0){
                is_prime = false;
                break;
            }
        }

        if(is_prime){
            cout << number << endl;
        }
    }
}
int main(){
    int m;
    cout<<"enter the value of m = ";
    cin>>m;
    // all_div(m);
    // count_div(m);
    prime_number(m);
    return 0;
}