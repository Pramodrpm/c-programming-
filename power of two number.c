#include<stdio.h>
#include<stdlib.h>
int main()
{

    int long pow, num,tempow;
    int long result=1;
    printf("enter the number \n");
    scanf("%ld",&num);
    printf("enter the power value\n");
    scanf("%ld",&pow);
    tempow=pow;
    while(pow>0)
    {
        result= result *num;
        pow--;
    }
    printf("%ld power %ld is %ld",num,tempow,result);
return 0;
}
