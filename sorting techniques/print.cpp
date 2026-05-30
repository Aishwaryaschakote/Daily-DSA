// #include<bits/stdc++.h> 
// using namespace std;

// int main() {
//     string s = " ";
//     cout<<quoted(s)<<"\n";
//     return 0;
// }

#include<bits/stdc++.h>
using namespace std;

// [10, 20, 30, 40]

int main(){

    try{
    string line;
    getline(cin, line);

    line.erase(remove(line.begin(), line.end(),'['),line.end());
    line.erase(remove(line.begin(), line.end(),']'),line.end());

    stringstream ss(line);
    vector<int>arr;
    string token;
    while (getline(ss,token,','))
    {
        arr.push_back(stoi(token));
    }
    // cout<<"[";
    for(int i=0; i<arr.size(); i++){
        cout<<arr[i];
        if(i != arr.size()-1)cout<<" ";}
    // cout<<"]";
    }

    catch(...){
        cout<<"error"<<endl;
    }
return 0;

}
