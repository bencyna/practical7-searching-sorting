#include "BubbleSort.h"

using namespace std;

vector<int> BubbleSort::sort(std::vector<int> list) {
    int length = list.size();
    for (int i = 0; i < length; i++) {
        for (int j = 0; j < length; j++) {
            if (list.at(j) > list.at(j + 1)) {
                // swap
                int temp = list.at(j);
                list.at(j) = list.at(j + 1);
                list.at(j+1) = temp;
            }
        }
    }
}
