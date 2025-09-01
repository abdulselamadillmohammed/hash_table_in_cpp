#include <optional>
#include <iostream>
using namespace std;

optional<int> divide(int a, int b){ // can either return an int or none
    if (b == 0) return {};
    return a / b;
}

int main(){
    auto res = divide(10, 2);
    if (res) cout << "Result: " << *res << "\n"; // 5
}

// Can check using has_value. 