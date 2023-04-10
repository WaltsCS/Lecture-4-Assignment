#include <stdio.h>
int main(void)
{
    int i;
    
    i = 1;
    
    /* Remove // for the program to work properly */
    //while (i < 10) {printf("%d ", i); i *= 2; };

    //for (; i < 10; i *= 2) {printf("%d ", i);};
    
    //do {printf("%d ", i); i *= 2; } while (i < 10); 

    /* 
    The do-while loop is not equivalent to the for loop 
    and the while loop. The while loop and the for loop 
    both evaluates conditions first before executing statements, 
    unlike the do-while loop, which executes the statements first, 
    before evaluating the conditions.
     */

    return 0;
}
