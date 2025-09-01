#include <iostream>
#include <functional> // std::hash
#include <string>
using namespace std;

int main() {
    hash<string> hasher;

    string key1 = "apple";
    string key2 = "orange";

    size_t h1 = hasher(key1);
    size_t h2 = hasher(key2);

    cout << "hash(apple) = "  << h1 << "\n";
    cout << "hash(orange) = " << h2 << "\n"; 

    return 0;
}