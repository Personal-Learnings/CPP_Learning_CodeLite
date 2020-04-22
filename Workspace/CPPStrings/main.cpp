#include <iostream>
#include <string>
#include <cctype>

using namespace std;

int main() {
    
    string firstName {"Madanraj"};
    string lastName {"Venkatesan"};
    string fullName = firstName + " " + lastName;
    
    cout << "Your Full Name is : " << firstName + " " + lastName << endl;
    cout << "Substring         : " << firstName.substr(0, 5) << endl;
    cout << "Find j            : " << firstName.find('j') << endl;
    cout << "Find Venk         : " << fullName.find("Venk") << endl;
    cout << "Length            : " << fullName.length() << endl;
 
    string address;
    cout << "Enter Address     : ";
    getline(cin, address);
    
    for(size_t i = 0; i < address.length(); i++) {
        address.at(i) = toupper(address.at(i));
    }
    cout << "Address           : " << address << endl;
    
    string newFullName = firstName + " " + lastName;
    cout << "Is String Equal   : " << boolalpha << (newFullName == fullName) << endl;
    
    string cellNumber {"(206)488-8792"};
    string areaCode {cellNumber, 1, 3};
    string threeStars(3, '*');
    string fourStars(4, '*');
    string modifiedAreaCode = areaCode;
    modifiedAreaCode[0] = '4';
    modifiedAreaCode.at(1) = '2';
    modifiedAreaCode[2] = '5';
    
    cout << "====================================================" << endl;
    cout << "Original Phone Number : " << cellNumber << endl;
    cout << "Modifed Phone Number  : " << "(" + modifiedAreaCode + ") " + threeStars + "-" + fourStars << endl;
    
    //This willl throw a compilation error as we cannot concatinate two c style strings
    //string cstyleStrings = "Madanraj" + "Venkatesan";
    
    string unformatted_full_name {"StephenHawking"};
    string first_name (unformatted_full_name, 0, 7);
    string last_name = unformatted_full_name.substr(7, 7);
    string formatted_full_name = first_name + last_name;
    
    formatted_full_name.insert(7, " ");
    cout << formatted_full_name << endl;
    
    string journal_entry_1 {"Isaac Newton"};
    string journal_entry_2 {"Leibniz"};
    
    journal_entry_1.erase(0, journal_entry_1.find("N"));
    cout << "After Removing Issac: " << journal_entry_1 << endl;
    
    if(journal_entry_1 > journal_entry_2) {
        journal_entry_1.swap(journal_entry_2);
    }
    
    cout << "After Swaping: Journal Entry 1: " << journal_entry_1 << ", Journal Entry 2: " << journal_entry_2 << endl;
    return 0;
}