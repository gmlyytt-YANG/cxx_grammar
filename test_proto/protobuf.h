/*************************************************************************
 *
 * Copyright (c) 2019 liyang. All Rights Reserved
 *
 ************************************************************************/

/*
 * @file protobuf.h
 * @author gmlyytt@outlook.com
 * @date 2019-07-21
 * @brief 
 * */
#ifndef SELF_PROTOBUF_H
#define SELF_PROTOBUF_H

#include "../header.h"
#include "test.pb.h"

void test() {
    tutorial::AddressBook address_book;
    tutorial::Person* bob = address_book.add_people();

    bob->set_id(2);

    std::cout << bob->id() << std::endl;
}

#endif //SELF_PROTOBUF_H
