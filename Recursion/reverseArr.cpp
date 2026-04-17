#include<bits/stdc++.h>
using namespace std;

void revArr(vector<int>&v,int l, int r){
    
    if(l>=r)return;
    swap(v[l], v[r]);
    revArr(v, l+1, r-1);
}

int main(){
    vector<int>v={1,2,3,4,5};
    int l=0;
    int r = v.size() - 1;
    revArr(v,l,r);
    for(int x:v){
        cout<<x<<" ";
    }
}
