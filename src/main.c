#include <stdatomic.h>
#include <stdio.h>

void helloWorld(void);
void variables(void);

int main(int argc, char **argv) {

    // This is a single-line comment.

    /**
     * This is a multi-line comment.
     */

    fprintf(stdout, "Number of args: %d\n", argc - 1);

    if (argc > 1) {
        fprintf(stdout, "Arguments provided:\n");

        for (int i = 1; i < argc; i++) {
            fprintf(stdout, "Argument %d: %s\n", i, argv[i]);
        }
    } else {
        fprintf(stdout, "No additional arguments provided.\n");
    }

    helloWorld();
    variables();
    return 0;
}

void helloWorld(void) {
    // Output "Hello, world!" in the console.
    fprintf(stdout, "\n=== Console Output ===\n");
    fprintf(stdout, "Hello, world!\n");
}

void variables(void) {
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

    // Char [] Variables
    char name[] = "Emman";
    char food[] = "Ice Cream";
    char email[] = "fake_email@provider.com";

    printf("\n*** Char [] Variables ***\n");
    printf("Hello %s\n", name);
    printf("Your favorite food is %s\n", food);
    printf("Your email is %s\n", email);
}
