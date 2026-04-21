#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

vector<int> selectionSort(vector<int>&arr, int n){

    for(int i=0; i<=n-2; i++){
        int mini = i;
        for(int j=i+1; j<=n-1; j++){
            if(arr[j]<arr[mini]) mini = j;
        }
    //    swap(arr[mini], arr[i]);
        int temp = arr[i];
        arr[i] = arr[mini];
        arr[mini] = temp;
    }

    return arr;
}

int main(){
    
    int n;
    cin>>n;
    vector<int>arr(n);
    for(int i=0; i<n; i++)cin>>arr[i];

    selectionSort(arr, n);
    for (auto x:arr)cout<<x<<" ";

    return 0;
}