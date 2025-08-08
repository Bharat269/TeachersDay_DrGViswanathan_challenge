#include <string>
#include <iostream>
#include <unordered_map>
using namespace std;
int main(){
    string s;
    int distinct = 0;
    cin>>s;
    unordered_map<char,bool> m;
    for(int i = 0;i<s.size();i++){
        if(m.find(s[i])==m.end()){
            distinct++;
            m[s[i]] = true;
        }
    }
    if(distinct%2==0) cout<<"CHAT WITH HER!";
    else cout<<"IGNORE HIM!";
    cout<<endl;
}