#include <iostream>
#include "Sort.h"
#include "BubbleSort.h"
#include "QuickSort.h"
#include "RecursiveBinarySearch.h"

#include <vector>

using namespace std;

int main() {
    // BUBBLE SORT

    Sort * sort1;

    BubbleSort * bubbleSort = new BubbleSort();

    sort1 = bubbleSort;

    vector<int> list1 = {1, 2, 3 , 4};
    vector<int> list = sort1->sort(list1);

    for (int i = 0; i < list.size(); i++) {
        cout << list[i] << endl;
    }

    return 0; 

    // ////////////////////////////////////

    
}