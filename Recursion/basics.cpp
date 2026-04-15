#include<bits/stdc++.h>
using namespace std;

int print(int n,string s){
    if(n==0)
        return 0;
    
    cout<<s<<endl;
    return print(n-1,s);
}

int main(){
    string s="choti";
    int n;
    cin>>n;
    print(n,s);
}
