#include "QuickSort.h"

using namespace std;

vector<int> QuickSort::sort(vector<int> list) {
    if (list.size() <= 1) {
        return list;
    }

    vector<int> less, greater = {};
    int pivot;

    if (list.size() >= 3) {
        pivot = list.at(2);
        list.erase(list.begin() + 2);
    }
    else {
        pivot = list.at(list.size()-1);
        list.erase(list.begin() + list.size()-1);
    }

    for (int i = 0; i < list.size(); i++) {
        if (list.at(i) <= pivot) {
            less.push_back(list.at(i));
        }
        else {
            greater.push_back(list.at(i));
        }
     }

    vector<int> lessVector = sort(less);
    vector<int> greaterVector = sort(greater);
    vector<int> finalVector = {};

    for (int i = 0; i < lessVector.size(); i++) {
        finalVector.push_back(lessVector.at(i));
    }

    finalVector.push_back(pivot);

     for (int i = 0; i < greaterVector.size(); i++) {
        finalVector.push_back(greaterVector.at(i));
    }

    
    return finalVector;
}