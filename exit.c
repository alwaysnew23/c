/**
 * Author: Vincent X
 * Date:   2021-12-20
 * 
 * exit() terminates the program.
 * return terminates the program only if it is in main().
 */

#include <stdio.h>
#include <stdlib.h>

void func() {
    puts("inside the func");

    /* EXIT_SUCCESS is defined in stdlib.h and the value is 0. 
    Check the value of it using 'echo $?' in the shell. */
    exit(EXIT_SUCCESS);

    puts("I'm here!");  // exit() terminates the program. It can't reach here.
}

int main(int argc, char *argv[]) {

    puts("start");

    func();

    puts("end");
    
    
    return 0;
}