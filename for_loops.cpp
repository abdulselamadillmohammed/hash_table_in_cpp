#include <iostream>
#include <vector>
using namespace std;

int main(){

    vector<int> nums = {1, 2, 3};

    for (int i = 0; i < 10; i++){
        cout << i << "\n";
    }

    for (int x : nums){
        cout << x << " ";
    }
    cout << "\n";

    // In place manipluation
    for (int& x: nums){
        x *= 2;
    }

    return 0;
}

