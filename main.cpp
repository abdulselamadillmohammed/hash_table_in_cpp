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

// We will make capacity a power of 2 in order to achieve faster compute for linear probing 
std::size_t next_index(std::size_t i, std::size_t mask){
    return (i + 1) & mask;
}

int main(){

    // Replace this later with custom hash function implementation + linear probing
    //hash<string> hasher;
    //size_t h = hasher("hello");
    //cout << "hash of hello = " << h << "\n";


    // Key transformer: key -> index in vector
    // size_t index = hash<K>{}(key) % capacity;

}