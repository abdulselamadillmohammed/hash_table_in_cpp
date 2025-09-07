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

// Inserting functionality with linear probing (does not handle overwrites yet)
void insert(vector<Slot>& table, const string& k, int v){
    const size_t capacity = table.size();
    size_t i = index_for(k, capacity);

    for (size_t probes = 0; probes < capacity; ++probes){
        if (!table[i].is_occupied) {
            table[i] = Slot{k, v};  
            return;
        }
    }
}

int main(){ 
    const int capacity = 8;
    vector<Slot> table;
    hash<string> hasher;
    string string1 = "apple";

    cout << hasher("apple") % capacity << "\n"; 

    return 0;
}
