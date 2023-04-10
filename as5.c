#include<stdio.h>
int main(){
   int i, daysinmonth, day_start;

   printf("Enter number of days in a month: ");
   scanf("%d", &daysinmonth);

   printf("Enter the starting day of the week (1=Sunday, 7=Saturday): ");
   scanf("%d", &day_start);
   for(i = 1; i < day_start; i++)
      printf("   ");

   for(i = 1; i <= daysinmonth; i++){
      printf("%3d", i);
      if((day_start + i - 1) % 7 == 0)
         printf("\n");
   }
   return 0;
}