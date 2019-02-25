//
// Created by alex on 25.02.19.
//

#ifndef MONITOR_COUNTER_H
#define MONITOR_COUNTER_H

#include <iostream>
#include <sys/stat.h>
#include <fcntl.h>


#include "plx9030c.h"

class Counter {
private:
    int dev_desc;                   // device descriptor
public:
    /* just constructor */
    explicit Counter(std::string device);
    ~Counter();
};


#endif //MONITOR_COUNTER_H
