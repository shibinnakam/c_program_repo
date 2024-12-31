#include <stdio.h>

void toBinary(int num) {
    int i;
    if (num == 0) {
        printf("0");
        return;
    }

    int binary[32];
    int index = 0;

    while (num > 0) {
        binary[index++] = num % 2;
        num /= 2;
    }

    for (i = index - 1; i >= 0; i--) {
        printf("%d", binary[i]);
    }
}

void toHexadecimal(int num) {
    int i;
    if (num == 0) {
        printf("0");
        return;
    }

    char hex[32];
    int index = 0;

    while (num > 0) {
        int remainder = num % 16;
        if (remainder < 10) {
            hex[index++] = '0' + remainder;
        } else {
            hex[index++] = 'A' + (remainder - 10);
        }
        num /= 16;
    }

    for (i = index - 1; i >= 0; i--) {
        printf("%c", hex[i]);
    }
}

void toOctal(int num) {
    int i;
    if (num == 0) {
        printf("0");
        return;
    }

    int octal[32];
    int index = 0;

    while (num > 0) {
        octal[index++] = num % 8;
        num /= 8;
    }

    for (i = index - 1; i >= 0; i--) {
        printf("%d", octal[i]);
    }
}

int main() {
    int num;
    char choice;

    do {
        printf("\n");
        printf("Enter a decimal number: ");
        scanf("%d", &num);

        printf("Binary: ");
        toBinary(num);
        printf("\n");

        printf("Hexadecimal: ");
        toHexadecimal(num);
        printf("\n");

        printf("Octal: ");
        toOctal(num);
        printf("\n");

        printf("Do you want to enter another number? (y/n): ");
        scanf(" %c", &choice);
        printf("\n");

    } while (choice == 'y' || choice == 'Y');

    return 0;
}
