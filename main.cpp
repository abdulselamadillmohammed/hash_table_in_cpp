// Tenplates are used for the generic hash table
#include <iostream>
#include <vector>

#include <functional> // where default hashing function is coming from

using namespace std;
#include "HashTable.hpp"

// template <typename K, typename V>
// class HashTable{
    
// };

// This allows for:

/*
HashTable<std::string, int> table;
HashTable<int, double> table2;
*/

int main(){

    // Replace this later with custom hash function implementation + linear probing
    //hash<string> hasher;
    //size_t h = hasher("hello");
    //cout << "hash of hello = " << h << "\n";


    // Key transformer: key -> index in vector
    // size_t index = hash<K>{}(key) % capacity;

    HashTable<std::string, int> table;
}