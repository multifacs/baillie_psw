#include "baillie_test.hpp"
#include <functional>
#include <string>

int main() {
    for (int i = 0; i < 1000; i++) {
        auto res = baillieTest(i);
        std::cout << (res == 1 ? "Is prime" : "Isn't prime") << "\n";
    }
}