#include <iostream>
#include <vector>

using namespace std;

int main() {
    
    vector <int> type1 {10, 20};
    type1.push_back(30);
    cout << "Type 1 Vector :: Index 0: " << type1.at(0) << " Index 1: " << type1[1] << endl;
    
    vector <int> type2 (5, 10);
    type2.push_back(30);
    cout << "Type 2 Vector :: Index 0: " << type2[0] << " Index 5: " << type2.at(5) << endl;
    
    cout << "Enter a Number to replace at index 0: ";
    cin >> type2.at(0);
    cout << type2.at(0) << endl;
    
    vector <vector <int>> multiDimensionVector { {1, 2}, {3, 4} };
    cout << "Multi Dimension Vector :: Index (0, 1): " << multiDimensionVector.at(0).at(1) << endl;
    
    multiDimensionVector.push_back({ 5, 6 });
    cout << "Multi Dimension Vector :: Index (2, 1): " << multiDimensionVector.at(2).at(1) << endl;
    
    cout << "Enter a number to insert into Multi Dimension Array: ";
    cin >> multiDimensionVector.at(2).at(1);
    cout << "Multi Dimension Vector :: Index (2, 1): " << multiDimensionVector.at(2).at(1) << endl;
    
    
    //Coding Challenge
    vector <int> vector1;
    vector <int> vector2;
    
    vector1.push_back(10);
    vector1.push_back(20);
    
    cout << "Vector1 Size: " << vector1.size() << endl;
    cout << "Vector1 Elements: " << vector1.at(0) << " " << vector1.at(1) << endl;
    
    vector2.push_back(100);
    vector2.push_back(200);
    
    cout << "Vector2 Size: " << vector2.size() << endl;
    cout << "Vector2 Elements: " << vector2.at(0) << " " << vector2.at(1) << endl;
    
    vector <vector <int>> vector2d;
    vector2d.push_back(vector1);
    vector2d.push_back(vector2);
    
    cout << "Vector 2d Elements: [" << vector2d.at(0).at(0) << " " << vector2d.at(0).at(1) << "] [" << vector2d.at(1).at(0) << " " << vector2d.at(1).at(1) << "]" << endl;

    vector1.at(0) = 1000;
    cout << "Vector 2d Elements: [" << vector2d.at(0).at(0) << " " << vector2d.at(0).at(1) << "] [" << vector2d.at(1).at(0) << " " << vector2d.at(1).at(1) << "]" << endl;

    cout << "Vector1 Elements: " << vector1.at(0) << " " << vector1.at(1) << endl;
    return 0;
}