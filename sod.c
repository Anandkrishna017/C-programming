#include<stdio.h>
void main()
{ int num,n,rem,sum=0;
  printf("Enter a number: ");
  scanf("%d",&n);
  num=n;
  while(n!=0)
  { rem=n%10;
    sum=sum+rem;
    n/=10;
    }
  printf("The sum of digits of %d is %d.\n",num,sum);
}
