#ifndef COMB_SORT_H
#define COMB_SORT_H
#include <vector>

template<typename T>
void comb_sort(std::vector<T>& vec) {
    float k = 1.247;
    for (int step = vec.size() - 1; step >= 1; step /= k) {
        for (int i = 0; i < vec.size() - step; ++i) {
            if (vec[i] > vec[i + step]) {
                std::swap(vec[i], vec[i + step]);
            }
        }
    }
}

#endif
