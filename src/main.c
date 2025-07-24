#include <stdio.h>
#include <string.h>

#define MAX_INPUT 256

int main() {
    char input[MAX_INPUT];

    printf("AlgebraDSL v0.1\n");
    while (1) {
        printf(">>> ");
        if (!fgets(input, MAX_INPUT, stdin)) {
            break;
        }

        if (strncmp(input, "exit", 4) == 0) {
            break;
        }

        printf("You entered: %s", input);
    }

    return 0;
}