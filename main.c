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
    printf("\n*** Display Text ***\n");
    printf("Hello, world!\n");
}

void variables() {
    // Variable - A reusable container for a value.
    //            Behaves as if it were the value it contains.

    // Int Variables
    int age = 28;
    int year = 2025;
    int quantity = 1;

    printf("\n*** Int Variables ***\n");
    printf("You are %d years old!\n", age);
    printf("The year is %d.\n", year);
    printf("You have order %d x items.\n", quantity);

    // Float Variables
    float gpa = 2.5;
    float price = 9.99;
    float temperature = -10.1;

    printf("\n*** Float Variables ***\n");
    printf("Your GPA is %f.\n", gpa);
    printf("The price is $%f.\n", price);
    printf("The temperature is %f°F.\n", temperature);

    // Double Variables
    double pi = 3.14159265358979;
    double e = 2.7182818284590;

    printf("\n*** Double Variables ***\n");
    printf("The value of pi is %lf.\n", pi);
    printf("The value of e is %lf.\n", e);

    // Char Variables
    char grade = 'A';
    char symbol = '@';
    char currency = '$';

    printf("\n*** Char Variables ***\n");
    printf("Your grade is %c.\n", grade);
    printf("Your favorite symbol is %c.\n", symbol);
    printf("The currency is %c.\n", currency);
}
