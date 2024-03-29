#ifndef QUICK_SORT_H
#define QUICK_SORT_H
#include <vector>

template<typename T>
void quick_sort(std::vector<T>& vec, int begin, int end) {
    if (begin >= end) {
        return;
    }
    int left = begin, right = end;
    T pivot = vec[begin + (end - begin) / 2];
    while (left <= right) {
        while (vec[left] < pivot) {
            left++;
        }
        while (vec[right] > pivot) {
            right--;
        }

        if (left <= right) {
            std::swap(vec[left], vec[right]);
            left++;
            right--;
        }
    }
    quick_sort(vec, begin, right);
    quick_sort(vec, left, end);
}

template<typename T>
void quick_sort(std::vector<T>& vec) {
    quick_sort(vec, 0, vec.size() - 1);
}

#endif
