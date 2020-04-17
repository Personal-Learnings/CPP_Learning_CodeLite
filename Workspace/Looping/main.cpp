#include <iostream>
#include <vector>

using namespace std;

int main() {
    
    vector<int> list;
    list.push_back(100);
    list.push_back(200);
    list.push_back(300);
    
    for(unsigned int i {0}; i < list.size(); i++)
        cout << list[i] << " ";
    
    cout << endl << "Range Based For Loop: Arrays: " << endl;
    int scores [] { 1000, 2000, 3000 };
    for(int score :  scores)
        cout << score << " ";
        
    cout << endl << "Range Based For Loop: Vectors: " << endl;
    for(int value : list)
        cout << value << " ";
        
    cout << endl << "Range Based For Loop: Vectors: " << endl;
    for(auto c : "madan")
        cout << c << " ";
        
    unsigned int count{0};
    vector<int> vect = {1, 2, 3, -99};
    
    while(count < vect.size() && vect.at(count) != -99) {
        ++count;
    }
    cout << "Count: " << count << endl;
    cout << endl;
    
    vector<int> vec = { 1 };
    int result {0};
    
    for(size_t i {0}; i < vec.size(); i++) {
         for(size_t j = i + 1; j < vec.size(); j++) {
             result += (vec.at(i) * vec.at(j));
         }
     }
     
     cout << "Sum of product of all pairs: " << result << endl;
    
    return 0;
}