#include <cstddef>
#include <iostream>
#include <sys/types.h>

int main() {
    std::cout << sizeof(size_t) << std::endl;
    std::cout << sizeof(ssize_t) << std::endl;
}