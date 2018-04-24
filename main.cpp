#include <iostream>

#include "static/static.h"
#include "dynamic_auto/dynamic_auto.h"
#include "dynamic_manual/dynamic_manual.h"


int main() {
    std::cout << "1 - 1 = " << sum(1, 1) << std::endl;
    std::cout << "1 + 1 = " << sub(1, 1) << std::endl;
    std::cout << "1 << 1 = " << shl(1, 1) << std::endl;
    return 0;
}