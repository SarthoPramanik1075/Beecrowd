#include <stdio.h>
 
int main() 
{
 
   int number,amount;
   float hour,salary;
   
   scanf("%d\n",&number);
   printf("NUMBER = %d\n",number);
   
   scanf("%d\n",&amount);
   scanf("%f\n",&hour);
   
   salary=amount*hour;
   printf("SALARY = U$ %.2f\n",salary);
    return 0;
}