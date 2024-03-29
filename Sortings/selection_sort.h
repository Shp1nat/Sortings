#ifndef SELECTION_SORT_H
#define SELECTION_SORT_H
#include <vector>

template<typename T>
void selection_sort(std::vector<T>& vec) {
    for (int i = 0; i < vec.size() - 1; i++) {
        int min = i;
        for (int j = i + 1; j < vec.size(); j++)
        {
            if (vec[j] < vec[min]) {
                min = j;
            }
        }
        std::swap(vec[i], vec[min]);
    }
}
#endif
