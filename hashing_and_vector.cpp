// create a vector of Slot struct with capacity 8...
// use hash from functional to compute index
// guessing capacity should be an int

#include <iostream>
#include <functional>
#include <vector>
using namespace std;

struct Slot{
    string key;
    int value;
    bool is_occupied = false;

    Slot(string k, int v) : key(k),value(v), is_occupied(true){}
};

int main(){ 
    const int capacity = 8;
    vector<string> table;
    hash<string> hasher;
    string string1 = "apple";
    
    return 0;
}