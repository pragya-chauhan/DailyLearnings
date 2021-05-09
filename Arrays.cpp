#include<iostream>
#include<algorithm>
using namespace std;

int main(){
    //1. initialize
    int array[5]={0};
    int a[2] = {0};
    int b[4] = {1,2};
    
    //get length
    int size = sizeof(array)/sizeof(*a);
    cout<<"size= "<<size<<endl;
    
    //access element
    cout<<array[1]<<endl;
    
    //iterate all elements
    for(int i = 0;i<5;i++){
        cout<<array[i]<<endl;
    }
    
    //another way to iterate
    for(auto i: array){
        cout<<i;
    }
    cout<<endl;
    
    //modify elements
    array[3] = 5;
    
    //sort
    sort(array, array+size);
}
