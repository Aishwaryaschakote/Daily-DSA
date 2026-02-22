#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    for(int i=1; i<=n; i++){
        //spaces
        for(int j=1; j<=n-i; j++){
            cout<<" ";
        }
        //stars
        for(int k=1; k<=2*i-1; k++){
            cout<<"*";
        }
        //spaces
        for(int m=1; m<=n-i; m++){
            cout<<" ";
        }
        cout<<endl;
    }

    return 0;

}