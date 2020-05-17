#include <iostream>
#include <vector>
#include <string>

using namespace std;

void displayVector(const vector<string> input);

int main() {
    
    vector<string> names {"Madan", "Jayashree", "Yashika"};
    
    for(auto name : names) 
        name = "New Name";
        
    cout << "Items in the Vector will not be modified : ";
    displayVector(names);
        
    for(auto &name : names)
        name = "Hello " + name;

    cout << "The Modified Items in the Vector         : ";    
    displayVector(names);
    
    return 0;
}

void displayVector(const vector<string> input) {
    cout << endl;
    //Here It Creates copy of each item in the vector, hence uses more memory
    for(const auto i : input)
        cout << i << "    ";
    cout << endl;

    //Here It uses Reference and Saves space
    for(const auto &i : input)
        cout << i << "    ";
    cout << endl << endl;
}