#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
int main() {
    char input[1000000];
    int i = 0;
    scanf("%s", input);
    while (1) {
        if (input[i] == '\0') {
            break;
        }
        else {
            i++;
        }
    }
    printf("%c", input[i-1]);
    return 0;
}