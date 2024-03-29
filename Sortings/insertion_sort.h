#ifndef INSERTION_SORT_H
#define INSERTION_SORT_H
#include <vector>

template<typename T>
void insertion_sort(std::vector<T>& vec) {
    for (int i = 1; i < vec.size(); ++i) {
        T key = vec[i];
        int j = 0;
        for (j = i - 1; j >= 0 && vec[j] > key; --j) {
            vec[j + 1] = vec[j];
        }
        vec[j + 1] = key;
    }
}

#endif
