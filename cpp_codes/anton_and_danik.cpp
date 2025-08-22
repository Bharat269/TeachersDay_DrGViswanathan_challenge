#include <iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    int a=0;
    int d=0;
    for(int i = 0;i<n;i++){
        char t;
        cin>>t;
        if(t=='A') a++;
        else d++;
    }
    if(a==d) cout<<"Friendship";
    else if(a>d) cout<<"Anton";
    else cout<<"Danik";
    cout<<endl;
}