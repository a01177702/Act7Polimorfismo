#include <iostream>
#include "sum.h"
#include "sub.h"
#include "mul.h"
#include "div.h"

void runOperation(Operation* op, double a, double b, const std::string& name) {
    try {
        std::cout << name << ": " << op->calculate(a, b) << std::endl;
    } catch (const std::exception& e) {
        std::cout << name << ": Error - " << e.what() << std::endl;
    }
}

int main() {
    double a = 10, b = 5;

    Operation* op;

    op = new Sum();
    runOperation(op, a, b, "Suma");
    delete op;

    op = new Sub();
    runOperation(op, a, b, "Resta");
    delete op;

    op = new Mul();
    runOperation(op, a, b, "Multiplicacion");
    delete op;

    op = new Div();
    runOperation(op, a, b, "Division");
    delete op;

    return 0;
}
