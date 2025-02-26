#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int> arr{1, 5, 8, 6, 9};
    vector<int> brr{4, 5, 6, 10};
    vector<int> ans;

    for(int i=0; i<arr.size(); i++){
        int element=arr[i];
        // for every element run on brr loop 
        for(int j=0; j<brr.size(); j++){
            if(element==brr[j]){
                ans.push_back(element);
                break;
            }
        }
    }
    // printing ans 
    for(auto value: ans){
        cout<<value<<" ";
    }
    cout<<endl;
return 0;
}

