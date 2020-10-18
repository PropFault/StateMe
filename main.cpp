#include <iostream>
#include <nlohmann/json.hpp>
#include "state.h"
int main(int, char**) {
    nlohmann::json j;
    j["Hello"] = 10;
    j["Damn"]["Bruh"] = 20;

    std::cout << "Hello, world!\n";
        
}
