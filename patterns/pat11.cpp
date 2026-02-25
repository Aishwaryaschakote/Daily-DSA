#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cout<<"enter n: "<<endl;
    cin>>n;

    for(int i=1; i<=n; i++){
        int start=1;
        if(i%2==1) start = 1;
        else start =0;
        for(int j=1; j<=i;j++){
            cout<<" "<<start;
            //flipping the 0 to 1 and 1 to 0
            start= 1-start;
        }
        cout<<endl;
    }
    
    
return 0;
}