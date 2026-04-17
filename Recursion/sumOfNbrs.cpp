#include<bits/stdc++.h>
using namespace std;

int summ(int n){
    if(n==0) return 0;
    return n+summ(n-1);
}

int main(){
    int i=1;
    int sum =0;
    int n;
    cin>>n;
   cout<< summ(n);
}
