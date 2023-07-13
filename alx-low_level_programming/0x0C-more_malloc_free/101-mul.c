#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>

void printNumber(int num) {
    if (num == 0) {
        putchar('0');
        return;
    }

    int reverseNum = 0;
    while (num > 0) {
        int digit = num % 10;
        reverseNum = reverseNum * 10 + digit;
        num /= 10;
    }

    while (reverseNum > 0) {
        int digit = reverseNum % 10;
        putchar(digit + '0');
        reverseNum /= 10;
    }
}

int isNumber(const char *str) {
    for (int i = 0; str[i] != '\0'; i++) {
        if (!isdigit(str[i])) {
            return 0;
        }
    }
    return 1;
}

int multiplyNumbers(int num1, int num2) {
    if (num1 == 0 || num2 == 0) {
        return 0;
    }

    int result = 0;
    int position = 1;

    while (num2 > 0) {
        int digit = num2 % 10;
        int carry = 0;
        num2 /= 10;

        int tempNum1 = num1;
        int tempPosition = position;

        while (tempNum1 > 0 || carry > 0) {
            int product = (tempNum1 % 10) * digit + carry;
            carry = product / 10;
            product %= 10;

            result += product * tempPosition;
            tempNum1 /= 10;
            tempPosition *= 10;
        }

        position *= 10;
    }

    return result;
}

int main(int argc, char *argv[]) {
    if (argc != 3 || !isNumber(argv[1]) || !isNumber(argv[2])) {
        putchar('E');
        putchar('r');
        putchar('r');
        putchar('o');
        putchar('r');
        putchar('\n');
        return 98;
    }

    int num1 = atoi(argv[1]);
    int num2 = atoi(argv[2]);

    int result = multiplyNumbers(num1, num2);
    printNumber(result);
    putchar('\n');

    return 0;
}

