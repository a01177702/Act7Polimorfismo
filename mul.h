#ifndef MUL_H
#define MUL_H

#include "operation.h"

class Mul : public Operation {
public:
    double calculate(double a, double b) override {
        return a * b;
    }
};

#endif
