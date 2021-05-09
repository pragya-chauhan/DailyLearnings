#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main(){

  //initialize
  vector<int> vec;
  vector<int> a(5,1); //a(size, value)
  vector<int> e = {1,2};
  
  //make a copy
  vector<int> b(a);
  vector<int> c(b.begin(), b.end());
  
  //cast an array to vector
  int array[5] = {1,2};
  //vector<int> d(a, *(&a+1));
    cout<<"size";

  //get length
  cout<<a.size()<<endl;
  //access element
  //cout<<a[0]<<endl;
  
  //iterate the vector
  
  for(int i = 0; i<a.size(); i++){
    cout<<a[i];
  }
  
  for(auto it: a){
    cout<<it;
  }
  
  //modify element
  a[0] = -1;
  
  //sort
  sort(a.begin(), a.end());
  
  //add element at the end of vector
  a.push_back(18);
  
  //delete the last element
  a.pop_back();
    
    //print
    for(auto it: a){
        cout<<it;
    }
  
  
  
  





}
