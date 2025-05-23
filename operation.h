#ifndef OPERATION_H
#define OPERATION_H

class Operation {
public:
    virtual double calculate(double a, double b) = 0; 
    virtual ~Operation() {}
};

#endif
