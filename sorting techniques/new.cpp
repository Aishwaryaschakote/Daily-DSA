#include<iostream>
#include<vector>
using namespace std;

int main(){
    vector<int>n ={9,9,1,1,1,2,2};
    int i =0;
 //   cout<<n[i]<<" ";
    int count =1;
    for(i =0; i<n.size()-1; i++){
        if(n[i] != n[i+1]){
           //  cout<<n[i+1]<<" ";
             count++;
        }
    }
    cout<< count<<" "<<endl;
    


}