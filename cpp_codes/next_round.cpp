#include <iostream>
#include <vector>
using namespace std;
int main(){
    int n,k;
    cin>>n;
    cin>>k;
    int mark;
    vector<int> input(n);
    for(int i = 0;i<n;i++){
        cin>>input[i];
        if(i==k-1) mark = input[i];
    }
    int count = 0;
    for(int i = 0;i<n;i++){
        if(input[i]>=mark && input[i]>0) count++;
    }
    cout<<count;
}