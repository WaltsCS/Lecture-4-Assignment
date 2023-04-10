#include <stdio.h>
int main(void)
{
    int row = 0, column = 1;
    
    printf("TABLE OF POWERS OF TWO \n");
    printf("n  2 to the n \n");
    printf("--  -------- \n");

    while(row <= 10){
        while(column <= 1024){
            printf("%d      %d", row, column);
            column += column;
            row++;
            printf("\n");
        }
    }

    return 0;
}
