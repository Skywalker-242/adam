#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>

int using_for(char steps[]) {
    int steps_len = strlen(steps);
    int count = 0;
    for (int c = 0; c < steps_len; ++c) {
        if (steps[c] == 'D') {
            break;
        }  ++count;
    }
    return count;
}

int main(void) {
    int MAX_BUFFER = 1000;
    int MAX_LINE_LENGTH = 100;
    char path [MAX_BUFFER];
    getcwd(path, MAX_BUFFER);
    strcat(path, "\\src\\adam.in");
    FILE *ftpr;
    char input[MAX_LINE_LENGTH];
    ftpr = fopen(path, "r");
    while (fgets(input, MAX_LINE_LENGHT, ftpr)) {
        int w = using_for(input);
        printf("%i \n", w);
    }
    fclose(ftpr);
    return EXIT_SUCCESS;
}