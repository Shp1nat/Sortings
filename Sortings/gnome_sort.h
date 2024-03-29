#ifndef GNOME_SORT_H
#define GNOME_SORT_H
#include <vector>

template<typename T>
void gnome_sort(std::vector<T>& vec) {
    int i = 1, j = 2;
    while (i < vec.size()) {
        if (vec[i - 1] > vec[i]) {
            std::swap(vec[i], vec[i - 1]);
            i--;
            if (i > 0) {
                continue;
            }
        }
        i = j++;
    }
}

#endif
