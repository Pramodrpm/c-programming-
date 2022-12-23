int main()
{
   int num, pow;
   int tempPow;
   int result = 1;
   printf("Enter a number: ");
   scanf("%d", &num);
   printf("Enter a POWER: ");
   scanf("%d", &pow);
   tempPow = pow;
   while(pow>0)
   {
       result = result*num;
       pow--;
   }
   printf("%d^%d=%d\n",num,tempPow,result);
}
