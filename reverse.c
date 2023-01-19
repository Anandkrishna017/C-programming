#include<stdio.h>
int main()
{int num,rem,rev=0;
 printf("Enter a number to be reversed :");
 scanf("%d",&num);
 while(num!=0)
 { rem=num%10;
   rev=rev*10+rem;
   num/=10;
 }
 printf("The reverse is : %d",rev);
 return 0;
}
