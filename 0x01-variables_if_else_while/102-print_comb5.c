
#include <stdio.h>

void printTwoDigitNumber(int number) {
    putchar((number / 10) + '0');
    putchar((number % 10) + '0');
}

int main() {
    int i, j;

    for (i = 0; i < 100; i++) {
        for (j = i; j < 100; j++) {
            printTwoDigitNumber(i);
            putchar(' ');
            printTwoDigitNumber(j);

            if (i != 99 || j != 99) {
                putchar(',');
                putchar(' ');
            }
        }
    }

    return 0;
}

