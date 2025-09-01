#include <iostream>
#include <vector>
#include <string>
using namespace std;
// In c, we usually use points when we want to pass the object
// instead of a copy. but cpp uses refernces

// Example of passing by value (makes a copy)
void greet_copy(string name){
    cout << "Hello " << name << "\n";
}

// by reference -> no copy but this allows you to modify original 
void greet_ref(string& name){
    name += "!!!";
    cout << "Hello " << name << "\n";
}

// Adding in const for passing by ref but now allowing modifications 
void greet_const(const string& name){
    cout << "Hello " << name << "\n";
}

struct Slot {
    string key;
    int value;
    bool occupied; // simple version without enum

    // constructor (optional)
    Slot(string k, int v) : key(k), value(v), occupied(true){}
};

int main() {
    vector<Slot> table;
    string s = "Alice";
    Slot s2("apple", 5);
    Slot s3("orange", 10);

    greet_copy(s);    
    greet_ref(s);     
    greet_const(s);

    cout << s2.key << " -> " << s2.value;
    table.push_back(s2);
    table.push_back(s3);

    for (auto it = table.begin();it != table.end();++it){
        const Slot& e = *it; // dereference the iterator
        cout << e.key << " -> " << e.value << "\n";
    }

    // simpler version

    for (const auto& e : table){
        cout << e.key << " -> " << e.value << "\n";
    }

    // Thos also works

    for (const Slot& e : table){
        cout << e.key << " -> " << e.value << "\n";
    }

    return 0;
}
