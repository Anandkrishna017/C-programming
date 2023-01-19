#include<stdio.h>
int sets[10][25],size[10],n=0;
int find(int data)
{ int i,j;
  for(i=0;i<n;i++)
    for(j=0;j<size[i];j++)
      if(data==sets[i][j])
        return i+1;
  return 0;
 }

void create()
{ int i;
  printf("\nEnter the number of elements in set: ");
  scanf("%d",&size[n]);
  printf("\nEnter the elements: ");
  for(i=0;i<size[n];i++)
  { scanf("%d",&sets[n][i]);
    if(find(sets[n][i])>0)
    { printf("%d is already present in the disjoint set %d\n",sets[n][i],find(sets[n][i]));
      sets[n][i--]=0;
      }
    }
  n++;
 }

void union_(int i,int j)
{ int _union[size[i]+size[j]],k=0,l;
  for(l=0;l<size[i];l++)
    _union[k++]=sets[i][l];
  for(l=0;l<size[j];l++)
    _union[k++]=sets[j][l];
  printf("The union set is: ");
  for(l=0;l<k;l++)
    printf("\n%d",_union[l]);
  printf("\n");
 }
int main()
{ int ch,data,i,j;
  do
   { printf("\tDISJOINT SET OPERATIONS.\n1.CREATE\n2.FIND\n3.UNION\n4.EXIT");
     printf("\nEnter your choice: ");
     scanf("%d",&ch);
     switch(ch)
     { case 1: create();
               break;
       case 2: printf("\nEnter the element to find: ");
               scanf("%d",&data);
               if(find(data)>0)
                 printf("\n%d is present in the set %d.\n",data,find(data));
               else
                 printf("\n%d is not present in any disjoint sets.\n",data);
               break;
       case 3: printf("\nEnter the sets to merge(1 for set 1,2 for set 2 etc..): "); 
               scanf("%d%d",&i,&j);
               union_(i-1,j-1);
               break;
       case 4: break;
       default: printf("\nInvalid Input.");
       }
   }
  while(ch!=4);
  return 0;
 }
  
