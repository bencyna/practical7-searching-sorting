#ifndef BUBBLESORT_H
#define BUBBLESORT_H

#pragma once

#include "Sort.h"

#include <vector>


class BubbleSort : public Sort
{
public:
   std::vector<int> sort(std::vector<int> list);
};

#endif