#include <iostream>
using namespace std;

struct Slot {
    string key;
    int value;
    bool occupied = false;

    Slot(string k, int v) : key(k), value(v), occupied(true) {} // constructor
};
