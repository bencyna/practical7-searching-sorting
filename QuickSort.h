#ifndef QUICKSORT_H
#define QUICKSORT_H

#pragma once

#include "Sort.h"

#include <vector>


class QuickSort : public Sort
{
public:
   std::vector<int> sort(std::vector<int> list);
};

#endif