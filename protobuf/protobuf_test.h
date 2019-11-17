/*************************************************************************
 *
 * Copyright (c) 2019 liyang. All Rights Reserved
 *
 ************************************************************************/

/*
 * @file protobuf_test.h
 * @author gmlyytt@outlook.com
 * @date 2019-07-21
 * @brief
 * */
#ifndef SELF_PROTOBUF_TEST_H
#define SELF_PROTOBUF_TEST_H

#include "../header.h"
#include "person.pb.h"

/**
 * @brief proto的常规操作, 包括定义proto, set和get成员
 * @param
 * @return
 */
void test_protobuf() {
    tutorial::AddressBook address_book;
    tutorial::Person* bob = address_book.add_people();
    bob->set_id(2);
    std::cout << bob->id() << std::endl;
}

#endif //SELF_PROTOBUF_TEST_H
