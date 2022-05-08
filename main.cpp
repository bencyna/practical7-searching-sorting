#include <iostream>
#include "Sort.h"
#include "BubbleSort.h"
#include "QuickSort.h"
#include "RecursiveBinarySearch.h"

#include <vector>

using namespace std;

int main() {
    Sort * sort1;

    QuickSort * quickSort = new QuickSort();

    sort1 = quickSort;

    vector<int> list1 = {8, 3, 9, 438, 322, 23, 3};
    vector<int> list = sort1->sort(list1);

    for (int i = 0; i < list.size(); i++) {
        cout << list[i] << endl;
    }

    return 0; 
}