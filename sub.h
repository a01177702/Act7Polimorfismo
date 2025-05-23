#ifndef SUB_H
#define SUB_H

#include "operation.h"

class Sub : public Operation {
public:
    double calculate(double a, double b) override {
        return a - b;
    }
};

#endif
