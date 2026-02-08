#include <stdio.h>

int factorial(int n);
void displayFactorial(int n);

int main() {
    int number = 5;
    displayFactorial(number);
    return 0;
}

int factorial(int n) {
    if (n == 0)
        return 1;
    else
        return n * factorial(n - 1);
}

void displayFactorial(int n) {
    printf("Factorial of %d is %d\n", n, factorial(n));
}

