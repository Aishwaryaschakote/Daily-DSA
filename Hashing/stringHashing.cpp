#include<iostream>
// #include<map>
// #include<unordered_map>
#include<map>

using namespace std;

int main(){
    
    // unordered_map<char, int>mpp;
    map<char, int>mpp;//for ordered output
    string s;
    cin>>s;
    
    //storing
    for(int i=0; i<s.length(); i++){
        mpp[s[i]]++;
    }

    //fetching
    for(auto it: mpp){
        cout<<it.first <<"->"<<it.second<<endl;
    }

}