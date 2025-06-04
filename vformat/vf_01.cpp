#include <format>
#include <iostream>
#include <string>

void log_message(const std::string& fmt, std::format_args args) 
{
    std::cout << std::vformat(fmt, args) << '\n';
}

int main() 
{
    int x = 42;
    std::string name = "Necati";

    log_message("name: {}, value : {}", std::make_format_args(name, x));
}
