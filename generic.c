/**
 * Author: Vincent X
 * Date 2021-12-09
 * 
 * A generic swap function from Stanford CS107 lecture 8
 */

#include <stdio.h>
#include <string.h>

void swap(void *a, void *b, size_t nbytes) {
    char temp[nbytes];
    memcpy(temp, a, nbytes);
    memcpy(a, b, nbytes);
    memcpy(b, temp, nbytes);
}

int main(int argc, char *argv[]) {
    // swap strings
    char *a = "a";
    char *b = "b";

    swap(&a, &b, sizeof(char *));

    puts("string swap:");
    printf("a: %s,  b: %s\n", a, b);


    // swap shorts
    short c = 2, d = 5;

    swap(&c, &d, sizeof(short));

    puts("short swap:");
    printf("c: %d,  d: %d\n", c, d);
    
    
    return 0;
}