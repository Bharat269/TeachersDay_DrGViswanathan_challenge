
#include <iostream>
#include <string>
using namespace std;
int main() {
    int n = 0;
    cin>>n;
    for(int i = 0;i<n;i++){
        string s;
        int x;
        cin>>s;
        x = s.size();
        if(x<=10){
            cout<<s<<endl;
            continue;
        }
        else{
            string min;
            min.push_back(s[0]);
            x = x-2;
            min = min + to_string(x);
            min.push_back(s[x+1]);
            cout<<min<<endl;
            
        }
    }
}