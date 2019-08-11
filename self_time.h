//
// Created by liyang98 on 2019-08-11.
//

#ifndef SELF_SELF_TIME_H
#define SELF_SELF_TIME_H

#include <iostream>
#include <ctime>


std::string segment_time() {
    // format like: [xx:x0:00]
    std::string segment_time;

    time_t t_now;
    time(&t_now);
    time_t segment_t = (t_now / 600) * 600;

    tm segment_tm{};
    localtime_r(&segment_t, &segment_tm);

    const int size = sizeof("HH:MM:SS");
    char buffer[size];

    strftime(buffer, size, "%H:%M:%S", &segment_tm);
    segment_time.assign(buffer);

    return segment_time;
}

#endif //SELF_SELF_TIME_H
