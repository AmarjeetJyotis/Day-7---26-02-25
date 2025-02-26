#include<iostream>
#include<vector>
using namespace std;
int main(){
    int arr[]={1, 2, 3, 4, 5};
    int sizea=5;
    int brr[]={6, 7, 8, 9, 10};
    int sizeb=5;
    vector<int> vrr;
    for(int i=0; i<sizea; i++){
        vrr.push_back(arr[i]);
    }
    for(int i=0; i<sizeb; i++){
        vrr.push_back(brr[i]);
    }
    cout<<"Union of Arrays is: "<<endl;
    for(int i=0; i<vrr.size(); i++){
        cout<<vrr[i]<<" ";
    }
    cout<<endl;
return 0;
}