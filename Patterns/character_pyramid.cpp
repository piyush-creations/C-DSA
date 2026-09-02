#include<iostream>
using namespace std;
void character_pyramid(int n ){
for(int i =0; i<=n ;i++){
    for(int j =1; j<=n-i; j++){
        cout<<" ";
    }
    for(char ch = 'A'; ch <= 'A'+i-1; ch++){
        cout<<ch<<" ";
    }
    for(char ch ='A'+i-2; ch>='A' ;ch--){
        cout<<ch<<" ";
    }
    for(int j=0; j<=n-i; j++){
        cout<<" ";
    }
    cout<<endl;
}

}
int main(){
    character_pyramid(5);
    return 0;
}