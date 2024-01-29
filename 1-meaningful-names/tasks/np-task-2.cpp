#include <iostream>

double calculate_area(double radius) {
    double pi = 3.14;
    double area = pi * radius * radius;
    return area;
}

double calculate_volume(double radius, double height) {
    double pi = 3.14;
    double volume = pi * radius * radius * height;
    return volume;
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
