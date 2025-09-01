#include <iostream>
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

int main() {
    string s = "Alice";

    greet_copy(s);    
    greet_ref(s);     
    greet_const(s);
    return 0;
}
