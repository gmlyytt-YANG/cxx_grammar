/*************************************************************************
 *
 * Copyright (c) 2019 liyang. All Rights Reserved
 *
 ************************************************************************/

/*
 * @file reference_change_private_variable.h
 * @author gmlyytt@outlook.com
 * @date 2019-07-14
 * @brief 验证如果类的成员函数返回私有成员变量的引用，则类外可以改变私有变量的值。
 * */
#ifndef SELF_REFERENCE_CHANGE_PRIVATE_VARIABLE_H
#define SELF_REFERENCE_CHANGE_PRIVATE_VARIABLE_H

#include "header.h"

class Reference {
public:
    explicit Reference(int a) : variable(a) {}

    int &get_variable() {
        return variable;
    }

    int show() {
        return variable;
    }

private:
    int variable;
};

void test_reference_change_private_variable() {
    Reference reference(2);
    reference.get_variable() = 3;

    std::cout << reference.show() << std::endl;
}

#endif //SELF_REFERENCE_CHANGE_PRIVATE_VARIABLE_H
