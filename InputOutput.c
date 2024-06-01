#include <stdio.h>

int main() {
    int num;
    char ch;
    float f;

    printf("Enter the integer: ");
    if (scanf("%d", &num) != 1) {
        printf("Invalid integer input.\n");
        return 1; // Exit with an error code
    }

    printf("\nEntered integer is: %d", num);

    int c;
    while ((c = getchar()) != '\n' && c != EOF); // Clear input buffer

    printf("\n\nEnter the float: ");
    if (scanf("%f", &f) != 1) {
        printf("Invalid float input.\n");
        return 1;
    }
    printf("\nEntered float is: %f", f);

    printf("\n\nEnter the character: ");
    if (scanf(" %c", &ch) != 1) {  // Space before %c
        printf("Invalid character input.\n");
        return 1;
    }

    printf("\nEntered character is: %c\n", ch);

    // Declare string variable
    // as character array
    char str[50];

    // --- String (Word) ---
    printf("Enter the Word: ");
    if (scanf("%49s", str) != 1) {  // Limit input to 49 characters
        printf("Invalid word input.\n");
        return 1;
    }
    printf("\nEntered Word is: %s", str);

    while ((c = getchar()) != '\n' && c != EOF); // Clear input buffer

    // --- String (Sentence) ---
    printf("\n\nEnter the Sentence: ");
    if (scanf("%49[^\n]", str) != 1) {  // Limit input, correct format specifier
        printf("Invalid sentence input.\n");
        return 1;
    }
    printf("\nEntered Sentence is: %s", str);


    return 0;
}
