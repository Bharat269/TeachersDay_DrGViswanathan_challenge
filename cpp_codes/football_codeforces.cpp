#include <iostream>
using namespace std;

int main(){
    string s;
    cin>>s;
    char cur=s[0];
    int count=1;
    int maximum=0;
    for(int i = 1;i<s.size();i++){
        if(s[i]==cur) count++;
        else{
            maximum = max(count,maximum);
            cur = s[i];
            count = 1;
        }
    }
    maximum= max(maximum,count);
    if(maximum>=7) cout<<"YES";
    else cout<<"NO";
    cout<<endl;
}