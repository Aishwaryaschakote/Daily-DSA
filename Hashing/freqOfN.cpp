#include<iostream>
#include<map>
#include<unordered_map>
using namespace std;

int main(){
    int n;
    cin>>n;
    map<int, int>mpp;
    int arr[n];

    //storing
    for(int i=0; i<n; i++){
        cin>>arr[i];
        mpp[arr[i]]++;
    }

    //fetching
    for(auto it: mpp){
        cout<<it.first <<"->"<<it.second<<endl;
    }

}