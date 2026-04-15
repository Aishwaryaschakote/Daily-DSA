#include<bits/stdc++.h>
using namespace std;

void print(int n,int i){//3,3
    if(i>n)//
        return ;
    
    cout<<i<<endl;//1,2
    return print(n,i+1);//3,3
}

int main(){
    int i=1;
    int n;
    cin>>n;
    print(n,i);
}
