#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cout<<"enter n: "<<endl;
    cin>>n;

    for(int i=1; i<=n; i++){
        int start=1;
        for(int j=1; j<=i; j++){
            if(i%2 == 1){
                cout<<" "<<start;
            }
            else{
                start = 0;
                cout<<" "<<start;
            }
        }
        cout<<endl;
    }
    
    
return 0;
}