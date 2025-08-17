#include <iostream>
using namespace std;

int main(){
    int k,n,w;
    cin>>k>>n>>w;
    int cost;
    cost = (w*(w+1)/2) * k;
    cout<<max(0,cost-n)<<endl;
}