/*************************************************************************
 *
 * Copyright (c) 2019 liyang. All Rights Reserved
 *
 ************************************************************************/

/*
 * @file try_move2.h
 * @author gmlyytt@outlook.com
 * @date 2019-07-14
 * @brief move返回右值引用的示例
 * */

#ifndef SELF_TRY_MOVE_H
#define SELF_TRY_MOVE_H

#include "header.h"

class Resource {
public:
    Resource() = default;
    ~Resource() = default;

};

class Holder {
public:
    Holder() {
        resource_ = new Resource();
    }

    ~Holder() {
        delete resource_;
    }

    Holder(Holder &other) {
        resource_ = new Resource(*other.resource_);
        std::cout << "in Holder(Holder &other)" << std::endl;
    }

    Holder(Holder &&other) {
        resource_ = other.resource_;
        other.resource_ = nullptr;
        std::cout << "in Holder(Holder &&other)" << std::endl;
    }

    Holder &operator=(Holder &other) {
        delete resource_;
        resource_ = new Resource(*other.resource_);
        std::cout << "in Holder &operator=(Holder &other) " << std::endl;

        return *this;
    }

    Holder &operator=(Holder &&other) {
        std::swap(resource_, other.resource_);
        std::cout << "in Holder &operator=(Holder &&other) " << std::endl;

        return *this;
    }

private:
    Resource *resource_;
};

void swap(Holder &a, Holder &b) {
    Holder h = a;
    std::cout << " " << std::endl;
    a = b;
    std::cout << " " << std::endl;
    b = h;
    std::cout << " " << std::endl;
}

void swap_move(Holder& a, Holder& b) {
    Holder h = std::move(a);
    std::cout << " " << std::endl;
    a = std::move(b);
    std::cout << " " << std::endl;
    b = std::move(h);
    std::cout << " " << std::endl;
}
#endif //SELF_TRY_MOVE_H
