#include <vector>
#include <iostream>
using namespace std;

// Templates (like C macros) in order to create generic code
template <typename T>
void mySwap(T& a, T& b){
    T temp = a;
    a = b;
    b = temp;
}
int main() {
    int x=1, y=2;
    mySwap(x, y);  // works for ints
    double p=1.1, q=2.2;
    mySwap(p, q);  // works for doubles too
}