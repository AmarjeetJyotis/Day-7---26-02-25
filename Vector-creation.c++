#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int> arr;
    cout<<arr.size()<<endl;
    cout<<arr.capacity()<<endl;

    // Insert element on vector 
    arr.push_back(5);
    arr.push_back(10);
    arr.push_back(50);

    for(int i=0; i<arr.size(); i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;

    // Remove element on Vector 
    cout<<"Remove element is"<<endl;
    arr.pop_back();
    for(int i=0; i<arr.size(); i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;

    // Vector creation from user 
    int n;
    cout<<"Enter your value n is: "<<endl;
    cin>>n;
    vector<int> brr(n, 101);
    cout<<"size of b is: "<<brr.size()<<endl;
    cout<<"size of capacity is: "<<brr.capacity()<<endl;

    for(int i=0; i<brr.size(); i++){
        cout<<brr[i]<<" ";
    }
    cout<<endl;

    // Another Methods for inisilazition 
    cout<<"Another Methods for inisilazition: "<<endl;
    vector<int> crr{1, 2, 6, 3, 7};
    for(int i=0; i<crr.size(); i++){
        cout<<crr[i]<<" ";
    }
    cout<<endl;

    vector<int> drr;
    cout<<"Vector is empty or not: "<<drr.empty()<<endl;
return 0;
}