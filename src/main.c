//
// Created by manparvesh on 6/3/2018.
//

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#define TRUE 1

void main_loop();

char *read_line();

int main() {
    main_loop();
    return EXIT_SUCCESS;
}

void main_loop() {
    while (TRUE) {
        printf(">>> ");
        char *input_command = read_line();
        if (strncmp(input_command, "exit", 4) == 0) {
            break;
        }
        fputs(input_command, stdout);
    }
}

char *read_line() {
    char *line = NULL;
    size_t buffer_size = 0;
    getline(&line, &buffer_size, stdin);
    return line;
}
