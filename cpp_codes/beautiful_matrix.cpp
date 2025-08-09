#include <iostream>

using namespace std;
int main(){
    int row;
    int col;
    bool found = false;
    for(int i = 0;i<5;i++){
        for(int j=0;j<5;j++){
            int temp;
            cin>>temp;
            if(temp==1){
                found = true;
                row = i;
                col = j;
            }
            if(found) break;
        }
        if(found) break;
    }
    row = abs(row-2);
    col = abs(col-2);
    cout<< row+col<<endl;
}


