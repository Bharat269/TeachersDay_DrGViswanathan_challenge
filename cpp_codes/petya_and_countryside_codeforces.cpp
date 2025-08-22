#include <iostream>
#include <vector>
#include <algorithm>

int main() {
    int n;
    std::cin >> n;

    std::vector<int> h(n);
    for(int i = 0; i < n; ++i){
        std::cin >> h[i];
    }
    int mW = 0;
    for (int i = 0; i < n; ++i) {
        int cW = 1;
        int cH = h[i];

        int tH = cH;
        for(int j=i - 1; j >= 0; --j){
            if(h[j] <= tH){
                cW++;
                tH = h[j];
            } 
            else{
                break;
            }
        }
        tH = cH;
        for(int j = i + 1; j < n;++j){
            if(h[j] <= tH){
                cW++;
                tH = h[j];
            } 
            else{
                break;
            }
        }
        mW = std::max(mW, cW);
    }
    std::cout<< mW << std::endl;

    return 0;
}
