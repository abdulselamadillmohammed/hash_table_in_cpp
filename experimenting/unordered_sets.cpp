#include <unordered_set>
#include <vector>
#include <iostream>
using namespace std;

int main() {
    vector<int> nums = {1, 2, 3, 2, 1, 4};
    unordered_set<int> unique(nums.begin(), nums.end());

    for (int x : unique){
        cout << x << " ";
    }

}