#include<bits/stdc++.h>
using namespace std;

bool revStr(int i, string &s){
    if(i>=s.size() / 2) return true;
    if(s[i] != s[s.size()- i -1])return false;
    return revStr(i+1,s);
}

int main(){
   string s="madam";
 //  int n=s.size();
   cout<<revStr(0,s);
}
