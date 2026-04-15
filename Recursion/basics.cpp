#include<bits/stdc++.h>
using namespace std;

void print(int n,string s){
    if(n==0)
        return ;
    
    cout<<s<<endl;
    return print(n-1,s);
}

int main(){
    string s="choti";
    int n;
    cin>>n;
    print(n,s);
}
