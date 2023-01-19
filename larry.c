#include<stdio.h>
int main()
{int n,a[100];
 printf("Enter the number of elements.(Limit) :");
 scanf("%d",&n);
 printf("Enter the values.");
 for(int i=0;i<n;i++)
 { printf("Enter value %d :",(i+1));
   scanf("%d",&a[i]);
 }
 for(int i=1;i<n;i++)
 {
   if(a[0]<a[i])
      a[0]=a[i];
 }
 printf("Largest number is :%d",a[0]);
 return 0;
}
