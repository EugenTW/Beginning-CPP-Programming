#include <iostream>
#include <climits>

using namespace std;

int main() {
    const double room_price = 30.6;
    const double tax_rate = 0.06;

    cout << "Please enter the room number: " << endl;
    int roomNumber;
    cin >> roomNumber;

    double price = room_price * roomNumber * (1+tax_rate);

    cout << "The estimated price will be $" << price << "." << endl;


    return 0;
}
