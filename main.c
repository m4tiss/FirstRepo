#include <stdio.h>

void print();

int add(int a, int b);

int multiply(int a, int b);

int divide(int a, int b);

int main() {
    print();
    return 0;
}

void print() {
    printf("Hello, World!\n");
}

int add(int a, int b) {
    return a + b;
}

int multiply(int a, int b) {
    return a * b;
}

int divide(int a, int b) {
    if (b == 0) return 0;
    return a / b;
}
