#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cout<<"Enter n:"<<endl;
    cin>>n;
    for(int i= 0; i<n; i++){
        //spaces

        for(int j=1; j<=n-i-1; j++){
            cout<<" ";
        }
        char ch='A';
        int breakpoint = (2*i+1)/2;
        for(int j=1; j<=2*i+1; j++){
            cout<<ch;
        }
        //spaces

        for(int j=1; j<=n-i-1; j++){
            cout<<" ";
        }
       
        cout<<endl;
    }
    return 0;
}