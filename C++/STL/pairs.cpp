#include<iostream>
#include<utility>
using namespace std;
void explainPairs(){
pair<int, int> p = {1, 2};
cout<<p.first<<" "<<p.second<<endl;

pair<string, int> p1 = {"Hello", 5};
cout<<p1.first<<" "<<p1.second<<endl;

pair<int, pair<int, int>> p2 = {1, {3, 4}};
cout<<p.first<<" "<<p2.second.first<<endl;

pair <int, int > arr[]= {{1,2},{2,3},{3,4}};
cout<<arr[1].second<<endl;

pair<int, string> student = {101, "Piyush"};
cout<<"UID="<<student.first;

// pair<int> a[]={1,2,3,4,5}; ---- not valid 
// cout<<a[1];
}

int main(){
    explainPairs();
    return 0;
}
//In short, std::pair is used to glue two values together into a single object without the effort of writing a custom struct.