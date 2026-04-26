#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

int partition(vector<int>&arr, int low, int high){

    int pivot = arr[low];
    int i = low;
    int j = high;

    while (i<j)
    {
        while (i<=high  && arr[i]<=pivot)
        {
            i++;
        }
        
        while (j>=low  && arr[j]>pivot)
        {
            j--;
        }

        if(i<j)swap(arr[i], arr[j]);
    }
    swap(arr[j], arr[low]);
    
    return j;
}

vector<int> quickSort(vector<int>&arr, int low, int high){
    if(low < high){
        int pivotIdx = partition(arr, low, high);

        quickSort(arr, low, pivotIdx -1);
        quickSort(arr, pivotIdx +1, high);

    }
    return arr;
}


int main(){

    int n;
    cin>>n;

    vector<int>arr(n);
    for(int i =0; i<n; i++){
        cin>>arr[i];
    }
    cout<<endl;

    quickSort(arr,0,arr.size()-1);

    for(auto a: arr)cout<<a<<" ";
    return 0;
}