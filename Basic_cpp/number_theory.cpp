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
int main(){
    int m;
    cout<<"enter the value of m = ";
    cin>>m;
    // all_div(m);
    count_div(m);
    return 0;
}