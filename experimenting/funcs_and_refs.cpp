#include <iostream>
#include <string>
using namespace std;
// In c, we usually use points when we want to pass the object
// instead of a copy. but cpp uses refernces

// Example of passing by value (makes a copy)
void greet_copy(string name){
    cout << "Hello " << name << "\n";
}