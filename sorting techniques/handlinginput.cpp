#include<bits/stdc++.h>
using namespace std;

int main(){
//     3
// 10 20 30
    try{
        int n;
        cin>>n;
        vector<int>arr(n);
        for(int i=0; i<n; i++){
            cin>>arr[i];
        }
        int sum =0;
        for(auto &a:arr)sum+=a;
        cout<<sum<<endl;
    }

    catch(...){
        cout<<"error"<<endl;
    }
return 0;

}
