#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

vector<int>inserTionSort(vector<int>& arr, int n){

    for(int i = 0; i<= n-1; i++){
        int j=i;
        while (j>0 && arr[j-1]>arr[j])
        {
           int temp = arr[j-1];
           arr[j-1] = arr[j];
           arr[j] = temp;
           j--;
        }
        
    }

    return arr;
}

int main(){

    int n;
    cin>>n;

    vector<int>arr(n);
    for(int i = 0; i< n; i++){
        cin>>arr[i];
    }
    cout<<endl;

    inserTionSort(arr, n);
    for(auto a: arr)cout<<a<<" ";
    return 0;
}