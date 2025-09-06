// create a vector of Slot struct with capacity 8...
// use hash from functional to compute index
// guessing capacity should be an int

#include <iostream>
#include <functional>
#include <vector>
#include <string>
using namespace std;

struct Slot{
    string key{};
    int value{};
    bool is_occupied{false};

    Slot() = default;
    Slot(string k, int v) : key(std::move(k)),value(v), is_occupied(true){}
};

size_t index_for(const string& key, size_t capacity){
    return hash<string>{}(key) % capacity;
}

int main(){ 
    const int capacity = 8;
    vector<Slot> table;
    hash<string> hasher;
    string string1 = "apple";

    cout << hasher("apple") % capacity << "\n"; 

    return 0;
}
