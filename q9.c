#include <stdio.h>

void Binary(int num) // Binary conversion
{
    if (num == 0)
        return;            // returns to last recursive call
    Binary(num / 2);       // Recursive call till the
    printf("%d", num % 2); // printys the remainder
}

void octal(int num) // Octal conversion
{
    if (num == 0)
        return;            // returns to last recursive call
    octal(num / 8);        // Recursive call
    printf("%d", num % 8); // prints the remainder
}

void Hexadecimal(int num) // Hexadecimal conversion
{
    if (num == 0)
        return;            // returns to last recursive call
    Hexadecimal(num / 16); // Recursive call
    int remainder = num % 16;
    if (remainder < 10) // 10 to 15(A to F)
        printf("%d", remainder);// Prints if less than 10 i.e 0 to 9
    else
        printf("%c", 'A' + remainder - 10); // 'A'+ 13(ex)-10= 65 + 3 = 68(D)
}

int main()
{
    int number;
    printf("Enter Number: ");
    scanf("%d", &number);

    printf("Given Number: %d\n", number);
    printf("Binary equivalent: ");
    Binary(number); // call to binary conversion
    printf("\nOctal equivalent: ");
    octal(number); // call to octal conversion
    printf("\nHexadecimal equivalent: ");
    Hexadecimal(number); // call to hexadecimal conversion
    printf("\n");

    return 0;
}