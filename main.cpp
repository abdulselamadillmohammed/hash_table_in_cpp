// Tenplates are used for the generic hash table
#include <iostream>
#include <vector>
#include <string>
#include <functional> // where default hashing function is coming from
#include <optional>
#include <cstdint>     // uint8_t
#include <cassert>

using namespace std;
// template <typename K, typename V>
// class HashTable{
    
// };

// This allows for:

/*
HashTable<std::string, int> table;
HashTable<int, double> table2;
*/

enum class State: uint8_t {Empty= 0, Occupied = 1, Tombstone = 2};
// Tombstone state included to watch out for linear probing stacking case


struct Slot {
    std::string key{};
    int value{};
    State State{State::Empty};
};

int main(){

    // Replace this later with custom hash function implementation + linear probing
    //hash<string> hasher;
    //size_t h = hasher("hello");
    //cout << "hash of hello = " << h << "\n";


    // Key transformer: key -> index in vector
    // size_t index = hash<K>{}(key) % capacity;

}