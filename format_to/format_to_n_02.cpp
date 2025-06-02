#include <format>
#include <iostream>
#include <vector>

int main() 
{
    std::vector<char> buffer(20); 
    auto result = std::format_to_n(buffer.begin(), 10, "Hello, {}!", "World");

    
    std::cout << "written_chars : " << std::string(buffer.begin(), result.out) << '\n';
    std::cout << "length        : " << result.size << '\n';
}
