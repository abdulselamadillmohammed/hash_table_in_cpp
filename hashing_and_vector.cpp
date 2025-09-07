// create a vector of Slot struct with capacity 8...
// use hash from functional to compute index
// guessing capacity should be an int

#include <iostream>
#include <functional>
#include <vector>
#include <string>
#include <utility>
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

        // update operation
        if (table[i].is_occupied && table[i].key == k){
            table[i].value = v;
            return;
        }
        i = (i + 1) % capacity; // linear probing 
    }
    cout << "Table full, couldn't insert " << k << "\n";
}

// find value when given a key
int* find_value(vector<Slot>& table, const string& k){
    const size_t capacity = table.size();
    size_t i = index_for(k, capacity);
    for (size_t probes = 0; probes < capacity; ++probes) {
        if (!table[i].is_occupied) {
            return nullptr; // hit an Empty → key isn't in the table
        }
        if (table[i].key == k) {
            return &table[i].value;
        }
        i = (i + 1) % capacity;
    }
    return nullptr; // not found after full loop (defensive)
}


int main(){ 
    const int capacity = 8;
    vector<Slot> table(capacity);

    insert(table, "apple",  5);
    insert(table, "orange", 10);

    if (int* v = find_value(table, "apple")) {
        cout << "apple -> " << *v << "\n";
    } else {
        cout << "apple not found\n";
    }

    if (int* v = find_value(table, "orange")) {
        cout << "orange -> " << *v << "\n";
    } else {
        cout << "orange not found\n";
    }

    if (int* v = find_value(table, "banana")) {
        cout << "banana -> " << *v << "\n";
    } else {
        cout << "banana not found\n";
    }


    return 0;
}
