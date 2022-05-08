#ifndef SORT_H
#define SORT_H

#pragma once

#include <vector>

class Sort
{
public:
    virtual std::vector<int> sort(std::vector<int> list) = 0;
};

#endif