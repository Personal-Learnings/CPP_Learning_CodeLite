#include <iostream>

using namespace std;

int main() {
    
    const short PRICE_PER_SMALL_ROOM {25};
    const short PRICE_PER_LARGE_ROOM {35};
    const float SALES_TAX {0.06};
    
    int numberOfSmallRooms {0};
    int numberOfLargeRooms {0};
    int roomCost {0};
    short estimateExpiry {30};
    float tax {0.0};
    double totalEstimate {0.0};
    
    cout << "Hello, Welcome to Frank's Carpet Cleaning Service" << endl;
    cout << "******************************************************************" << endl << endl;

    cout << "How many small rooms would you like cleaned ? ";
    cin >> numberOfSmallRooms;

    cout << "How many Large rooms would you like cleaned ? ";
    cin >> numberOfLargeRooms;
    
    roomCost = (numberOfSmallRooms * PRICE_PER_SMALL_ROOM) + (numberOfLargeRooms * PRICE_PER_LARGE_ROOM);
    tax = roomCost * SALES_TAX;
    totalEstimate = roomCost + tax;
    
    cout << "\nEstimate for Carpet Cleaning Service" << endl;
    cout << "---------------------------------------------------------" << endl;
    
    cout << "Number of Small Rooms: " << numberOfSmallRooms << endl;
    cout << "Number of Large Rooms: " << numberOfLargeRooms << endl;
    
    cout << "Price Per Small Room: $" << PRICE_PER_SMALL_ROOM << endl;
    cout << "Price Per Large Room: $" << PRICE_PER_LARGE_ROOM << endl;
    
    cout << "Cost: $" << roomCost << endl;
    cout << "Tax: $" << roomCost * SALES_TAX << endl;
    
    cout << "=========================================================" << endl;
    cout << "Total Estimate: $" << totalEstimate << endl;
    cout << "This Estimate is valid for " << estimateExpiry << " days" << endl << endl;
    
    return 0;
}