#include<stdio.h>
void main()
{ char s1[20],s2[20];
  int flag=0,i=0;
  printf("Enter 1st string: ");
  scanf("%s",s1);
  printf("Enter 2nd string: ");
  scanf("%s",s2);
  while(s1[i]!=0 && s2[i]!=0)
  { if(s1[i]!=s2[i])
    { flag=1;
      break;
      }
     i++;
     }
  if(flag==0)
    printf("Strings are same");
  else
    printf("Strings are not same.");
  }
