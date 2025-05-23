#ifndef SUM_H
#define SUM_H

#include "operation.h"

class Sum : public Operation {
public:
    double calculate(double a, double b) override {
        return a + b;
    }
};

#endif
