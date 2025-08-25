// std::vector - allows for dynamic arrays (auto malloc and free)

#include <vector>
#include <iostream>
using namespace std;

int main(){
    vector<int> nums; // empty vector which is meant to contain nums
    nums.push_back(10); // add element
    nums.push_back(20);
    cout << nums[0] << "\n"; // prints 10
    cout << nums.size() << "\n"; // 2
}
