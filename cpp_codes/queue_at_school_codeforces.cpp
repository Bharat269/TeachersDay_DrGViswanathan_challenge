#include <iostream>
using namespace std;

int main(){
    int n;
    int t;
    cin>>n;
    cin>>t;
    string s;
    cin>>s;
    while(t--){
        int i = 0;
        while(i<n-1){
            if(s[i]=='B' && s[i+1]=='G'){
                s[i]='G';
                s[i+1]='B';
                i++;
            }
            i++;
        }
    }
    cout<<s<<endl;
    return 0;
}