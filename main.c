#include <stdio.h>

void print();

int add(int a, int b);

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