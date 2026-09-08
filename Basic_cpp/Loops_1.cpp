#include<iostream>
using namespace std;
// void positive_negative(){
// int n ;
// cout<<"enter the number"<<endl;
// cin>> n;
// if(n>0){
//     cout<<"positive";
// }
// else{
//     cout<<"negative";
// }

// }

// void sum_even(){
//     int n, sum=0;
//     cin>>n;
//     for(int i =0; i<=n; i++){
//         if(i%2==0){
//             sum = sum +i;
//         }
//     }
//     cout<<"sum of "<< n<<" even numbers ="<<sum;

// }

// void factorial(){
//     int n, i, factorial = 1; 
//     cin>>n;
//     for(i=1; i<=n ; i++){
//         factorial = factorial * i;
//     }
//     cout<<factorial;
// }
// int recursive_factorial(int n ){
//     if(n < 0){
//         return -1;
//     }
//     if( n == 0 || n==1){
//         return 1;
//     }
//     return n * recursive_factorial(n-1);
// }
void cout_digits(){
    int n , i , count = 0;
    cout<<"eneter your number = ";
    cin >> n;
    do{
        n = n/ 10;
        count++;
    }
    while(n>0);

    cout<<"number of digits are = "<<count;
}
int main(){
    // positive_negative();
    // sum_even();
    // factorial();
    // cout<<recursive_factorial(5);
    cout_digits();
    return 0;
}