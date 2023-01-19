#include<stdio.h>
void main()
{ int n,i,j,flag;
  printf("Enter a number :");
  scanf("%d",&n);
  printf("The prime factors of %d are ",n);
  for(i=2;i<=n;i++)
    {flag=0;
     for(j=2;j<=i/2;j++)
      { if(i%j==0)
        { flag=1;
          break; 
        }
      }
   if(flag==0)
   { if(n%i==0)
      printf("%d\t",i);
     }
  }  
}
