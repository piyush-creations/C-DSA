#include<iostream>
#include<utility>
#include <vector>
#include<algorithm>
using namespace std;
// void explain_vectors(){
// vector<int> v;
// v.push_back(100);
// v.push_back(10);
// v.push_back(20);
// v.push_back(30);
// v.push_back(40);
// cout<<v[0]<<endl;
// cout<<v[1]<<endl;
// cout<<v[2]<<endl;
// cout<<v[3]<<endl;
// vector<int> v1 = {10, 20, 30, 40};

// for(int i = 0; i < v1.size(); i++) //v.size tells us how many elements are present in the vector
// {
//     cout << v1[i] << " "<<endl;
// }
// cout<< "size of vector is  " << v1.size()<<endl;
// //vector initialization 
// vector<int> v2 = {2,3,1,5,10,60,20,45};
// cout << v2[2]<<endl;
// cout<<v2.front()<<endl;
// cout<<v2.back()<<endl;
// v2.pop_back();
// cout<<v2.back()<<endl;
// v2.clear();
// for(int i =0 ; i<v2.size();i++){
//     cout<<v2[i]<<endl;
// }
// vector<int> v(5,10); //5 elements will be there and every element will be 10 
// }

// void taking_input(){
//     int n,i;
//     cin>>n;
//     vector<int> v;
//     for(i =0 ; i < n ; i++){
//         int x ;
//         cin >> x;
//         v.push_back(x);
//     }
//     for(i =0 ; i < n ; i++){
//         cout<<v[i]<<endl;
//     }
//     for (int x : v){ // Range based for loop 
//         cout<<x;
//     }
// }
void vector_sorting(){
    vector<int> v;
    int i, n;
    cin >>n ;
    for(i=0; i<n ; i++){
        int x;
        cin >>x;
        v.push_back(x);
    }
    sort(v.begin(), v.end());
    for(auto x : v){
        cout<<x<<",";
    }
    sort(v.begin(), v.end(),greater<int>());//Decending
        for(auto x : v){
        cout<<x<<",";
    }
    auto a = find(v.begin(), v.end(), 30);
}
int main(){
   
// explain_vectors();
// taking_input();
vector_sorting();
    return 0;
}