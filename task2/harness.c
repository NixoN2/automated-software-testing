#include "library.h"
#include <string.h>
#include <unistd.h>
#include <stdio.h>

#define SIZE 50

int main() {
    char input[SIZE] = {};
    ssize_t length;
    length = read(STDIN_FILENO, input, SIZE);
    lib_echo(input, length);    
}

