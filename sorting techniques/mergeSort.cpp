#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;


void merge(vector<int>& arr, int low, int mid, int high){
// creating temp arr
vector<int>temp;

int left =low;
int right =mid+1;
   while (left <= mid && right <= high)
   {
    /* code */
    if(arr[left] <= arr[right]){
    temp.push_back(arr[left]);
    left++;
    }
    else  {
    /* code */
    temp.push_back(arr[right]);
    right++;
   }
   }

    while (left <= mid )
   {
    /* code */
    temp.push_back(arr[left]);
    left++;
   }

    while ( right <= high)
   {
    /* code */
    temp.push_back(arr[right]);
    right++;
   }

   //merging
   for(int i = low; i<= high; i++){
    arr[i] = temp[i -low];
   }
      
}

void mergeSort(vector<int>& arr, int low, int high){

   if(low == high)return ;
    int mid = (low + high)/2;
    mergeSort(arr, low, mid);
    mergeSort(arr, mid+1, high);
    merge(arr, low, mid, high);

    
}

int main(){

    int n;
    cin>>n;

    vector<int>arr(n);
    for(int i = 0; i< n; i++){
        cin>>arr[i];
    }
    cout<<endl;

    mergeSort(arr, 0, n-1);
    for(auto a: arr)cout<<a<<" ";
    return 0;
}