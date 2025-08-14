#include <iostream>
#include <algorithm>
#include <numeric> 

using namespace std;

int main() {
    int n;
    cin >> n;
    int arr[n];
    int sum = 0;
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
        sum = sum + arr[i];
    }
    sort(arr, arr + n);
    int taken = 0;
    int count = 0;
    int total_sum = sum;
    for(int i = n - 1; i >= 0; i--){
        taken = taken + arr[i];
        count++;
        if(taken > total_sum / 2){
            break;
        }
    }
    cout << count << endl;
    return 0;
}