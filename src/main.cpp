#include "arraylib.h"
#include <iostream>

int main() {
    int data[] = {5, 3, 8, 1, 9, 2};
    std::cout << "Sum: " << arr_sum(data, 6) << "\n";
    return 0;
}