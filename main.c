#include <stdio.h>

void helloWorld();
void variables();

int main() {

    // This is a single-line comment.

    /**
     * This is a multi-line comment.
     */

    helloWorld();
    variables();
    return 0;
}

void helloWorld() {
    // Displays "Hello, world!".
    printf("Hello, world!\n");
}

void variables() {
    // Variable - A reusable container for a value.
    //            Behaves as if it were the value it contains.

    int age = 28;
    int year = 2025;
    int quantity = 1;

    printf("You are %d years old!\n", age);
    printf("The year is %d.\n", year);
    printf("You have order %d x items.\n", quantity);
}
