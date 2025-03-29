#include <iostream>
#include <climits>

using namespace std;

int age{30};

int main() {

    int price{999};
    int number{666};
    cout << price * number << endl;

    cout << age;

    cout << "char: " << sizeof(char) << endl;
    cout << "int: " << sizeof(int) << endl;
    cout << "short: " << sizeof(short) << endl;
    cout << "long: " << sizeof(long) << endl;
    cout << "long long: " << sizeof(long long) << endl;

    return 0;
}
