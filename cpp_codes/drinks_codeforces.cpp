#include <iostream>
#include <cmath>
using namespace std;

int main(){
    int n;
    double total = 0;
    cin>>n;
    for(int i = 0;i<n;i++){
        double temp;
        cin>>temp;
        temp=temp/100;
        total = total + temp/n;
    }
    cout<<total*100<<endl;
}