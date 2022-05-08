#include "RecursiveBinarySearch.h"

#include <vector>

using namespace std;

bool RecursiveBinarySearch::search(vector<int> list, int target)
{
    return binarySearch(0, list.size() - 1, list, target);
}

bool RecursiveBinarySearch::binarySearch(int left, int right, vector<int> list, int target)
{
    if (left > right) {
        return false;
    }
    //  1 2 3 4 5 6, target is 4
    int mid = (left + right)/2; // 2

    if (list.at(mid) == target) {
        return true;
    }

    return binarySearch(left, mid - 1, list, target) || binarySearch(mid+1, right, list, target);
}