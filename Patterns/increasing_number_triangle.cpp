#include<iostream>
using namespace std;
void inc_num_triangle(int n ){
            int num =1;
    for(int i = 0; i<= n ; i++){
        for(int j=0 ; j<=i ; j++){
            cout<<num;
            num = num +1;
        }
        cout<<endl;
    }
}
void character(int n ){

    for(int i =1; i<=n ; i++){
        for(char ch = 'A'; ch <= 'A'+i; ch++){
            cout<<ch<<" ";
        }
        cout<<endl;
    }
}
void character_2(int n ){

    for(int i =1; i<=n ; i++){
        for(char ch = 'A'; ch <= 'A'+(n-i-1); ch++){
            cout<<ch<<" ";
        }
        cout<<endl;
    }
}

int main(){
    inc_num_triangle(4);
    character(5);
    character_2(5);
    return 0;
}