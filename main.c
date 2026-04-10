#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include "math_utils.h"
#include "random.h"
int main() {
    printf("%d", generateRandom(2,7));
    printf("\nPYTHON WRITING PROGRAM\n");
    FILE *pFile = fopen("main.py", "w");
    if (pFile == NULL) {
        printf("\n\033[31m FILE OPENING FAILED!");
        return 1;
    }
    char code[] = "x = int(input('enter the first number: '))\ny = int(input('Enter the 2nd number: '))\nz = None\nc = input('Enter the operation: ')\nif c == '+':\n  print(f'the sum is {x + y}')\nelif c == '-':\n  print(f'the sub is {x - y}')\nelif c == '*':\n  print(f'the multiplication is {x * y}')\nelif c == '/':\n  print(f'the division is {x / y}')\nelse:\n  print('unexpected operation')";
    printf("\n\033[33m Writing a File ...");
    fprintf(pFile, "%s", code);
    printf("\n\033[32m Writing File Finished! 100%%\n");
    fclose(pFile);
    return 0;
}