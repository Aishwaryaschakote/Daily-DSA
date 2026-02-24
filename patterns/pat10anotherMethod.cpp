#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cout<<"enter n: "<<endl;
    cin>>n;

    for(int i=1; i<=2*n-1; i++){
        for(int j=1; j<=2*n-i; j++){
            cout<<" * ";
        }
        cout<<endl;
    }
    
return 0;
}