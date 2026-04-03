#include <iostream>
#include <vector>
using namespace std;

int main() {
    
    int n ;
    cout<<"ENter n";
    cin >>n;
    
    if(n<=0)cout<<"Invalid input";
    else if(n==1)cout<<2000;
    else if(n<=3)cout<<5000;
    else if(n<=6)cout<<9000;
    else cout <<15000;

    return 0;
}