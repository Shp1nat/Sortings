#ifndef BUBBLE_SORT_H
#define BUBBLE_SORT_H
#include <vector>

template<typename T>
void bubble_sort(std::vector<T>& vec) {
    for (int i = 0; i < vec.size(); ++i) {
        for (int j = 0; j < vec.size() - 1; ++j) {
            if (vec[j] > vec[j + 1]) {
                std::swap(vec[j], vec[j + 1]);
            }
        }
    }
}

#endif
