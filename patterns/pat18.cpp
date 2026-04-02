#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cout<<"Enter n:"<<endl;
    cin>>n; //4
    for(int i= 0; i<n; i++){
        
      //  for(char ch = char(n+64); ch>char(i+64); ch--){
      for(char ch = char(n - i + 64); ch <= char(n + 64); ch++){
            cout<<ch<<" ";
        }
        cout<<endl;
    }
    return 0;
}