#include<stdio.h>
#include<string.h>
int main()
{char ch[30],rev[30];
 int len,flag=0,i;
 printf("Enter a string to check :");
 scanf("%s",ch);
 len=strlen(ch);
 for(i=0;i<len;i++)
 { if(ch[i]!=ch[len-1-i])
   { flag=1;
     break;
    }
  }
 if(flag)
  printf("%s is not palindrome.\n",ch);
 else
  printf("%s is palindrome.\n",ch);
  return 0;
}
