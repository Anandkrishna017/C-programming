#include<stdio.h>
int main()
{
 int q[50],R=-1,F=0,te=0,size,ch,n,i,x,element,flag,pos;
 printf("Enter the size of Circular Queue :");
 scanf("%d",&size);
 do
  {
   printf("\n\n1. Insert an element.\n");
   printf("2. Delete an element.\n");
   printf("3. Search for an element.\n");
   printf("4. Display Circular Queue.\n");
   printf("5. Exit.\n");
   printf("\nEnter your choice :");
   scanf("%d",&ch);
   switch(ch)
   {
    case 1:
     if(te==size)
       printf("\nQueue is full...\n");
     else
     { printf("\nEnter the element to be inserted :");
       scanf("%d",&n);
       R=(R+1)%size;
       q[R]=n;
       te=te+1;
       }
    break;

    case 2:
     if(te==0)
       printf("\nQueue is empty...\n");
     else
     { printf("\nNumber deleted=%d\n",q[F]);
       F=(F+1)%size;
       te=te-1;
       }
    break;

    case 3:
     printf("\nEnter the element to be searched :");
     scanf("%d",&element);
     for(i=F;i<=R;i++)
     { flag=0;
       if(q[i]==element)
       { pos=i+1;
         flag++;
         break;
         }
      }
     if(flag!=0)
       printf("\nElement found at position %d\n",pos);
     else
       printf("\nElement not found.\n");
    break;

    case 4:
     if(te==0)
       printf("\nQueue is empty...\n");
     else
     { x=F;
       printf("\n");
       for(i=1;i<=te;i++)
        { printf("%d\t",q[x]);
          x=(x+1)%size;
          }
       }
    break;

    case 5:
     printf("\nExiting...\n");
    break;

    default:
     printf("\nWrong choice.\n");
    }
   }
 while(ch!=5);
 return 0;
}
