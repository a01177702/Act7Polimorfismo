#ifndef DIV_H
#define DIV_H

#include "operation.h"
#include <stdexcept>

class Div : public Operation {
public:
    double calculate(double a, double b) override {
        if (b == 0) throw std::invalid_argument("División entre cero");
        return a / b;
    }
};

#endif
