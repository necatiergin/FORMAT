#include <format>
#include <iostream>

int main() 
{
    char buffer[16]; 

    auto result = std::format_to_n(buffer, sizeof(buffer) - 1, "ID: {:06} necati", 42);
    *result.out = '\0'; 

    std::cout << "formatetd output : " << buffer << '\n';
    std::cout << "real output size : " << result.size << '\n';

    if (result.size >= sizeof(buffer)) {
        std::cout << "output shortened!\n";
    }
}
