#ifndef RECURSIVEBINARYSEARCH_H
#define RECURSIVEBINARYSEARCH_H

#pragma once

#include <vector>

class RecursiveBinarySearch
{
public:
    bool search(std::vector<int>, int);

private:
    bool binarySearch(int left, int right, std::vector<int> list, int target);
};

#endif