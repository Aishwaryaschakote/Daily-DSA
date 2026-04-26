#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
// function to find a correct place for pivot....return j
int partition(vector<int>&arr, int low, int high){

    int pivot = arr[low];
    int i = low;
    int j = high;

    while (i<j)//runs until i crosses j or vicevarsa
    {
        while (i<=high  && arr[i]<=pivot)// checks whether left side ele are lesser or greater than pivot if greater stops if lesser continues
        {
            i++;
        }
        
        while (j>=low  && arr[j]>pivot)// same as above
        {
            j--;
        }

        if(i<j)swap(arr[i], arr[j]); //swaps else if i and j are not crossed yet
    }
    swap(arr[j], arr[low]);//when the while loop breaks then pivot ele is swaped with jth pos ele..
    
    return j;//returns the pos where the pivot has to be placed
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