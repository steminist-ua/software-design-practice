#include <iostream>

void check_number(int number) {
    if (number > 0) {
        if (number % 2 == 0) {
            std::cout << "Positive and even." << std::endl;
        } else {
            std::cout << "Positive and odd." << std::endl;
        }
    } else if (number < 0) {
        std::cout << "Negative." << std::endl;
    } else {
        std::cout << "Zero." << std::endl;
    }
}

int main() {
    int num = 7;
    check_number(num);

    return 0;
}
