#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cout<<"enter n: "<<endl;
    cin>>n;

    for (int i=0; i<n; i++){
        //stars
        for(int j=0; j<n-i;j++){
            if(j%2==0)cout<<"***";
            else cout<<"225";
        }

        //spaces
        for(int j=0; j<2*i; j++)cout<<"   ";

        //stars
        for(int j=0; j<n-i;j++){
            if(j%2==0)cout<<"***";
            else cout<<"225";
        }
        cout<<endl;
        
    }
    for (int i=0; i<n; i++){
        //stars
        for(int j=0; j<i+1;j++){
            if(j%2==0)cout<<"***";
            else cout<<"225";
            
        }

        //spaces
        for(int j=0; j<2*(n-1-i); j++)cout<<"   ";

        //stars
        for(int j=0; j<i+1;j++){
            if(j%2==0)cout<<"***";
            else cout<<"225";
            
        }
        cout<<endl;
        
    }

    return 0;
}