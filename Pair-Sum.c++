#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int> arr{10, 20, 30, 40, 50};
    int Sum=70;
    for(int i=0; i<arr.size(); i++){
        int element = arr[i];
        for(int j=i+1; j<arr.size(); j++){
            if(element + arr[j]==Sum){
                cout<<"Element found is: "<<element<<","<<arr[j]<<endl;
            }
        }
    }
return 0;
}
