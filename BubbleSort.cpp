#include "BubbleSort.h"

using namespace std;

vector<int> BubbleSort::sort(std::vector<int> list) {
    int length = list.size();
    bool noSwap = true;
    for (int i = 0; i < length-1; i++) {
        noSwap = true;
        for (int j = 0; j < length-1; j++) {
            if (list.at(j) > list.at(j + 1)) {
                // swap
                int temp = list.at(j);
                list.at(j) = list.at(j + 1);
                list.at(j+1) = temp;
                noSwap = false;
            }
        }
        if (noSwap) break;
    }
    return list;
}

// Complexity
// S:O(1)
// T:O(n^2)
