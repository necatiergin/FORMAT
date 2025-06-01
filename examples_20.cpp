#include <iostream>
#include <format>
#include <vector>

int main() 
{
    std::vector<double> dvec = { 
        3.14159, 
        123.456, 
        0.00123, 
        42.0, 
        9876.54321,
        2.5, 
        0., 
        -78.9, 
        1.2345, 
        -0.00012 };

    for (double d : dvec) {
        std::cout << std::format("{:>12.5f}\n", d);
    }
}
