#include <iostream>
#include <cstddef> // for size_t

// 8 bytes => 32 bit system
int main() {
    std::cout << "sizeof(size_t) = " << sizeof(std::size_t) << " bytes\n";
    return 0;
}
