#include <iostream>
#include <vector>

using namespace std;

int main() {

    vector <int> test_scores{100, 50, 97, 55};
    cout << "The size of vector: " << test_scores.size() << endl;
    cout << "The first score: " << test_scores.at(0) << endl;
    test_scores.push_back(77);
    cout << "The size of vector: " << test_scores.size() << endl;
    cout << "The last score: " << test_scores.at(4) << endl;

    return 0;
}
