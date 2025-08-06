#include <iostream>
#include <string>
using namespace std;

int main(){
    int one = 0;
    int two = 0;
    int three = 0;
    string s;
    cin>>s;
    for(int i = 0;i<s.size();i++){
        if(s[i]=='1') one++;
        else if(s[i]=='2') two++;
        else if(s[i]=='3') three++;
        else continue;
    }
    s.clear();
    while(one!=0){
        s.push_back('1');
        s.push_back('+');
        one--;
    }
    while(two!=0){
        s.push_back('2');
        s.push_back('+');
        two--;
    }
    while(three!=0){
        s.push_back('3');
        s.push_back('+');
        three--;
    }
    s.pop_back();
    cout<<s;
}