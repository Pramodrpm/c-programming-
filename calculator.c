#include<stdio.h>
#include<stdlib.h>
int main()
{
    int monthnum;
    printf("enter the month in number :\n");
    scanf("%d",&monthnum);
    switch(monthnum)
    {

case 1:
printf("jan");
break;

case 2:
printf("feb");
break;

case 3:
printf("march");
break;

case 4:
printf("april");
break;

case 5:
printf("may");
break;

case 6:
printf("june");
break;

case 7:
printf("july");
break;

case 8:
printf("august");
break;

case 9:
printf("septamber");
break;

case 10:
printf("october");
break;

case 11:
printf("november");
break;

case 12:
printf("december");
break;

default:
    printf("enter number only range from 1-12");
    }
    getch();
    return 0;
}
