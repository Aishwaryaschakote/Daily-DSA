#include<bits/stdc++.h>
using namespace std;

void print(int n){//3,3
    if(n<1)//
        return ;
    
    cout<<n<<endl;//1,2
    return print(n-1);//3,3
}

int main(){
   
    int n;
    cin>>n;
    print(n);
}
