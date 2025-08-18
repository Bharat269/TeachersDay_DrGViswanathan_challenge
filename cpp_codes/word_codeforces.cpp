#include <iostream>
#include <string>
#include <cctype>
using namespace std;

int main(){
    string s;
    float count=0;
    cin>>s;
    for(int i = 0;i<s.size();i++){
        if(islower(s[i])) count++;
    }
    if(count*2>=s.size()){
        for(int i = 0;i<s.size();i++){
            s[i]=tolower(s[i]);      
        }
    }
    else{
        for(int i = 0;i<s.size();i++){
            s[i]=toupper(s[i]);      
        }
    }
    cout<<s<<endl;
}