#include <iostream>

const double PI = 3.14;

double calculate_area(double radius) {
    return PI * radius * radius;
}

double calculate_volume(double radius, double height) {
    return PI * radius * radius * height;
}

int main() {
    double r = 5.0;
    double h = 10.0;

    double area_result = calculate_area(r);
    double volume_result = calculate_volume(r, h);

    std::cout << "Area: " << area_result << std::endl;
    std::cout << "Volume: " << volume_result << std::endl;

    return 0;
}
