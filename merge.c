#include<stdio.h>
int main()
{
 int a1[50],a2[50],a3[50],i,j,k,n1,n2,temp1,temp2;
 printf("Enter the number of elements in array 1:");
 scanf("%d",&n1);
 printf("Enter the number of elements in array 2 :");
 scanf("%d",&n2);
 printf("Enter the elements for array 1:\n");
 for(i=0;i<n1;i++)
 { scanf("%d",&a1[i]);
   for(j=0;j<i;j++)
     if(a1[j]>a1[i])
     { temp1=a1[j];
       a1[j]=a1[i];
       a1[i]=temp1;
      }
   }
 printf("Enter the elements for array 2:\n");
 for(i=0;i<n2;i++)
 { scanf("%d",&a2[i]);
   for(j=0;j<i;j++)
     if(a2[j]>a2[i])
     { temp2=a2[j];
       a2[j]=a2[i];
       a2[i]=temp2;
      }
   }
 i=0,j=0,k=0;
 while(i<n1 && j<n2)
 { if(a1[i]<a2[j])
     a3[k]=a1[i++];
   else
     a3[k]=a2[j++];
   k++;
  }
 while(i<n1)
    a3[k++]=a1[i++];
 while(j<n2)
    a3[k++]=a2[j++];
 printf("Sorted array 1 :\n");
 for(i=0;i<n1;i++)
    printf("%d\t",a1[i]);
 printf("\nSorted array 2 :\n");
 for(i=0;i<n2;i++)
    printf("%d\t",a2[i]);
 printf("\nMerged array :\n");
 for(i=0;i<n1+n2;i++)
    printf("%d\t",a3[i]);
 return 0;
} 
