/**
 * Author: Vincent X
 * Date 2021-12-09
 * 
 * Play with file. From Chris Bourke. CS155H, File I/O
 */

#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main(int argc, char *argv[]) {
    // "w" for write, create if it doesn't exist. If permission is denied, returns NULL
    // One could use chmod command to change file status
    // Assume data.txt exists in the current fold
    FILE *f = fopen("data.txt", "r");

    if (f == NULL) {
        puts("unable to open file!");
        return 1;
    } else 
        puts("opened file successfully!");

    /*  fgetc testing block
    // The expression "c = fgetc(f)" evaluates to the value of c (left-hand side).
    // EOF is defined in stdio.h, it is usually -1.
    // Reads the entire file until EOF.
    // After each read, pointer f moves to the next character.
    int c; 
    while ((c = fgetc(f)) != EOF) {
        putchar(c);
    }
    */

    // the size of approx. 4 kb
    char buffer[1000];

    // Fgets returns NULL if it encounters EOF
    // Fgets just returns char * the same as buffer if it doesn't return NULL
    while (fgets(buffer, 1000, f) != NULL) {
        /* chomp the trailing spaces or newlines,
        n is the last space or newline before \0  */
        int n = strlen(buffer) - 1;
        while (isspace(buffer[n]) && n >= 0) {
            buffer[n] = '\0';
            n--;
        }
        printf("%s\n", buffer);
    }

    fclose(f);

    return 0;
}