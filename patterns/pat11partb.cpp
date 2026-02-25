#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cout<<"enter n: "<<endl;
    cin>>n;

    for(int i=0; i<n; i++){
        int start=0;
        if(i%2==0) start = 0;
        else start =225;
        for(int j=1; j<=n-i;j++){
            cout<<" "<<start;
            //flipping the 0 to 1 and 1 to 0
            start= 225-start;
        }
        cout<<endl;
    }
    
    
return 0;
}