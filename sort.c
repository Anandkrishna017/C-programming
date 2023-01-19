#include<stdio.h>
int main()
{ int i,j,a[100],n,temp;
  printf("Enter the limit of the array to be sorted :");
  scanf("%d",&n);
  for(i=0;i<n;i++)
  { printf("Enter element %d :",(i+1));
    scanf("%d",&a[i]);
  }
  for(i=0;i<n;i++)
   {
    for(j=i+1;j<n;j++)
     {
      if(a[i]>a[j])
       { temp=a[i];
         a[i]=a[j];
         a[j]=temp;
       }
     }
   }
  printf("Sorted array is ");
  for(i=0;i<n;i++)
    printf("%d\t",a[i]);
  return 0;
}
