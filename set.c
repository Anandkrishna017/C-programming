#include<stdio.h>
void main()
{ int i,j,t,N,n1,n2;
  printf("\nEnter size of universal set: ");
  scanf("%d",&N);
  int us[N],is[N],cs[N],d[N],sa[N],sb[N],u[N];
  printf("\nEnter %d elements to universal set: ",N);
  for(i=0;i<N;i++)
    scanf("%d",&u[i]);
  printf("\nEnter size of set A: ");
  scanf("%d",&n1);
  int A[n1];
  printf("Enter %d elements to set A: ",n1);
  for(i=0;i<n1;i++)
    scanf("%d",&A[i]);
  printf("\nEnter size of set B: ");
  scanf("%d",&n2);
  int B[n2];
  printf("\nEnter %d elements to set B: ",n2);
  for(i=0;i<n2;i++)
    scanf("%d",&B[i]);
  for(i=0;i<N;i++)
  { us[i]=1;
    sa[i]=0;
    sb[i]=0;
     }
  printf("\nThe bitstring representation of universal set is: ");
  for(i=0;i<N;i++)
    printf("%d",us[i]);
  printf("\n\nThe bitstring representation of set A is: ");
  for(i=0;i<n1;i++)
  { for(j=0;j<N;j++)
    { if(A[i]==u[j])
       { sa[j]=1;
         break;
         }
       }
     }
  for(i=0;i<N;i++)
    printf("%d",sa[i]);
  printf("\nThe bitstring representation of set B is: ");
  for(i=0;i<n2;i++)
  { for(j=0;j<N;j++)
    { if(B[i]==u[j])
      { sb[j]=1;
        break;
        }
      }
    }
  for(i=0;i<N;i++)
    printf("%d",sb[i]);
  printf("\nThe bitstring representation of Union is: ");
  for(i=0;i<N;i++)
    cs[i]=sa[i]|sb[i];
  for(i=0;i<N;i++)
    printf("%d",cs[i]);
  printf("\nUnion of A and B: ");
  for(i=0;i<N;i++)
  { if(cs[i]==1)
     printf("%d",u[i]);
    } 
  printf("\nThe bitstring representation of Intersection is: ");
  for(i=0;i<N;i++)
    is[i]=sa[i]&sb[i];
  for(i=0;i<N;i++)
    printf("%d",is[i]);
  printf("\nIntersection of A and B: ");
  for(i=0;i<N;i++)
  { if(is[i]==1)
      printf("%d",u[i]);
   }
  printf("\nThe bitstring representation of Difference is: ");
  for(i=0;i<N;i++)
    d[i]=sa[i]&(~sb[i]);
  for(i=0;i<N;i++)
    printf("%d",d[i]);
  printf("\nThe Difference of A and B: ");
  for(i=0;i<N;i++)
  { if(d[i]==1)
      printf("%d",u[i]);
   }
  printf("\n");
}
