#include <stdio.h>
int main()
{
   int value,hour,min,sec;
   scanf("%d", &value);

   hour = (value / 3600);
   min = ((value % 3600) / 60);
   sec = (value % 60);

   printf("%d:%d:%d\n",hour,min,sec);



    return 0;
}

