#include <iostream>
#include <string>
#include <algorithm>

using namespace std;
void compare(){
    string a,b;
    cin>>a;
    cin>>b;
    for (char &c : a) {
    c = tolower(static_cast<unsigned char>(c));
    }
    for (char &c : b) {
    c = tolower(static_cast<unsigned char>(c));
    }
    if(a<b) cout<<-1;
    else if(b<a) cout<<1;
    else cout<<0;
    cout<<endl;
    return;
}
int main(){
    compare();
}