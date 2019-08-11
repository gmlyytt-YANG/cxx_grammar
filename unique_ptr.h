/*************************************************************************
 *
 * Copyright (c) 2019 liyang. All Rights Reserved
 *
 ************************************************************************/

/*
 * @file unique_ptr.h
 * @author gmlyytt@outlook.com
 * @date 2019-07-28
 * @brief 
 * */
#ifndef SELF_UNIQUE_PTR_H
#define SELF_UNIQUE_PTR_H

#include "header.h"

void test_unique_ptr() {
    std::vector<std::unique_ptr<int>> vec;
    std::unique_ptr<int> p(new int(5));
    vec.push_back(std::move(p));
}

#endif //SELF_UNIQUE_PTR_H
