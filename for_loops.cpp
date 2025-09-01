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

    // Using an iterator loop. it = pointer.. *it = value 
    vector<int> nums2 = {1,2,3};
    for (auto it = nums.begin(); it != nums.end(); ++it){
        cout << *it << " ";
    }

    
    return 0;
}

