#include <stdio.h>
#include <stdlib.h>

void printOpcodes(int numBytes) {
    unsigned char* mainPtr = (unsigned char*)printOpcodes;
    int i;
    for (i = 0; i < numBytes; i++) {
        printf("%02x ", mainPtr[i]);
    }
    printf("\n");
}

int main(int argc, char *argv[]) {
    if (argc != 2) {
        printf("Error\n");
        return 1;
    }

    int numBytes = atoi(argv[1]);
    if (numBytes < 0) {
        printf("Error\n");
        return 2;
    }

    printOpcodes(numBytes);

    return 0;
}

