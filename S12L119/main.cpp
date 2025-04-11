#include <iostream>
#include <vector>

using namespace std;

int main() {

    int *p;
    cout << "Value of p is " << p << endl;
    cout << "Address of p is " << &p << endl;
    cout << "Size of p is " << sizeof(p) << endl;
    p = nullptr;
    cout << "Value of p is " << p << endl;

    int *p1 {nullptr};
    double *p2 {nullptr};
    unsigned int *p3 {nullptr};
    vector<string> *p4 {nullptr};
    string *p5 {nullptr};

    cout << "Size of p1 is " << sizeof(p1) << endl;
    cout << "Size of p2 is " << sizeof(p2) << endl;
    cout << "Size of p3 is " << sizeof(p3) << endl;
    cout << "Size of p4 is " << sizeof(p4) << endl;
    cout << "Size of p5 is " << sizeof(p5) << endl;





    return 0;
}
