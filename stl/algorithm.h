/*************************************************************************
 *
 * Copyright (c) 2019 liyang. All Rights Reserved
 *
 ************************************************************************/

/*
 * @file algorithm.h
 * @author gmlyytt@outlook.com
 * @date 2019-11-17
 * @brief stl所提供的通用算法接口函数的使用
 * */

#ifndef SELF_ALGORITHM_H
#define SELF_ALGORITHM_H

#include "../header.h"

/**
 * @brief vector的erase函数
 * @param
 * @return
 */
void test_vector_erase() {
    std::vector<int> a = {1, 2, 3, 4};
    a.erase(a.begin() + 2, a.end());
    for (auto elem: a) {
        std::cout << elem << std::endl;
    }
}

#endif //SELF_ALGORITHM_H
