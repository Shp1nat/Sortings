#include <iostream>
#include <any>
#include "sortings.h"


template<typename T>
void printVector(const std::vector<T>& vec) {
    for (const auto& el : vec) {
        std::cout << el << " ";
    }
    std::cout << std::endl;
}

int main()
{
    std::vector<std::vector<double>> vec(7, { 2.4, 2.3, 54.2, 12.0, 42.1, 2.14, 1.2, 0.5, 6.4 });

    std::cout << "Before: " << std::endl;
    for (const auto& el : vec) {
        printVector(el);
    }

    bubble_sort(vec[0]);
    comb_sort(vec[1]);
    insertion_sort(vec[2]);
    selection_sort(vec[3]);
    shell_sort(vec[4]);
    gnome_sort(vec[5]);
    quick_sort(vec[6]);

    std::cout << "After: " << std::endl;
    for (const auto& el : vec) {
        printVector(el);
    }

    return 0;
}
