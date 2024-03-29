#ifndef SHELL_SORT_H
#define SHELL_SORT_H
#include <vector>

template<typename T>
void shell_sort(std::vector<T>& vec) {
    for (int d = vec.size() / 2; d > 0; d /= 2) {
        for (int i = d; i < vec.size(); i++) {
            T x = vec[i];
            int j = 0;
            for (j = i; j >= d; j -= d) {
                if (x < vec[j - d]) {
                    vec[j] = vec[j - d];
                }
                else {
                    break;
                }
            }
            vec[j] = x;
        }
    }
}
#endif
