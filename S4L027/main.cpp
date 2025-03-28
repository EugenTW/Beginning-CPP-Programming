#include <iostream>

int main() {
    int favorite_number;
    std::cout << "Enter your favorite number between 1~100: ";
    std::cin >> favorite_number;
    std::cout << "That's my favorite number too." << std::endl;
    std::cout << "My favorite number is: " << favorite_number << std::endl;
    return 0;
}