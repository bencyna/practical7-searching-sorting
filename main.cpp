#include <iostream>
#include "Sort.h"
#include "BubbleSort.h"
#include "QuickSort.h"
#include "RecursiveBinarySearch.h"

#include <vector>
#include <string>

using namespace std;

int main() {

    vector<int> integers;
    string line;

    getline(cin, line);

    for (int i = 0; i < line.length(); i++) {
        if (line.at(i) != ' ') {
            int number = stoi(string(1, line.at(i)));
            integers.push_back(number);
        }
    }

    Sort *sort;

    QuickSort *quickSort = new QuickSort();

    sort = quickSort;

    vector<int> sortedIntegers = sort->sort(integers);

    RecursiveBinarySearch binarySearch;
    if (binarySearch.search(sortedIntegers, 1)) {
        cout << "true ";
    }
    else {
        cout << "false ";
    }

    for (int i = 0; i < sortedIntegers.size(); i++) {
        cout << sortedIntegers.at(i) << " ";
    }

    


    return 0; 
}