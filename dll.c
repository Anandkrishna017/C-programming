#include<stdio.h>
#include<stdlib.h>
int main()
{ struct node
  { int data;
    struct node *prev;
    struct node *next;
    };
  struct node *start=NULL, *newnode,*rn;
  int ch,n,x,f,c;
  do
  { printf("\n1. Add\n");
    printf("2. Insert before\n");
    printf("3. Insert after\n");
    printf("4. Search\n");
    printf("5. Delete\n");
    printf("6. Display\n");
    printf("7. Exit\n");
    printf("Enter your choice :");
    scanf("%d",&ch);
    switch(ch)
    { case 1: printf("Enter a number :");
              scanf("%d",&n);
              newnode=(struct node*)malloc(sizeof(struct node));
              newnode->data=n;
              newnode->prev=NULL;
              newnode->next=NULL;
              if(start==NULL)
                 start=newnode;
              else
              { rn=start;
                while(rn->next!=NULL)
                { rn=rn->next;
                    }
                rn->next=newnode;
                newnode->prev=rn;
                }
      break;
      case 2: f=0;
              if(start==NULL)
                 printf("List is empty.\n");
              else
               { printf("Enter the number :");
                 scanf("%d",&n);
                 printf("\nInsert before :");
                 scanf("%d",&x);
                 newnode=(struct node*)malloc(sizeof(struct node));
                 newnode->data=n;
                 newnode->prev=NULL;
                 newnode->next=NULL;
                 rn=start;
                 while(rn!=NULL)
                 { if(start==rn && rn->data==x)
                   { newnode->next=rn;
                     rn->prev=newnode;
                     start=newnode;
                     f=1;
                     break;
                     }
                   else if(start!=rn && rn->data==x)
                   { newnode->next=rn;
                     newnode->prev=rn->prev;
                     newnode->prev->next=newnode;
                     rn->prev=newnode;
                     f=1;
                     break;
                      }
                   rn=rn->next;
                    }
                 if(f==0)
                 { printf("Number not found.\n");
                   free(newnode);
                    }
      break;
      case 3: f=0;
              if(start==NULL)
                printf("List is empty.\n");
              else
               { printf("Enter the number :");
                 scanf("%d",&n);
                 printf("Insert after ");
                 scanf("%d",&x);
                 newnode=(struct node*)malloc(sizeof(struct node));
                 newnode->data=n;
                 newnode->prev=NULL;
                 newnode->next=NULL;
                 rn=start;
                 while(rn!=NULL)
                 { if(rn->data==x &&rn->next==NULL)
                   { newnode->prev=rn;
                     rn->next=newnode;
                     f=1;
                     break;
                     }
                   else if(rn->data==x &&rn->next!=NULL)
                   { newnode->next=rn->next;
                     newnode->next->prev=newnode;
                     newnode->prev=rn;
                     rn->next=newnode;
                     f=1;
                     break;
                     }
                  rn=rn->next;
                   }
                 if(f==0)
                  { printf("Number not found.\n");
                   free(newnode);
                 }}
      break;
      case 4: f=0;
              c=0;
              if(start==NULL)
                printf("Number not found.\n");
              else
              { printf("Enter number to search :");
                scanf("%d",&x);
                rn=start;
                while(rn!=NULL)
                { c++;
                  if(rn->data==x)
                  { printf("Number %d found at position %d",rn->data,c);
                    f=1;
                    break;
                     }
                  rn=rn->next;
                  }
                if(f==0)
                  printf("Number not found.\n");
                }
      break;
      case 5: f=0;
              if(start==NULL)
                printf("List is empty.\n");
              else
              { printf("Enter number to delete :");
                scanf("%d",&x);
                rn=start;
                while(rn!=NULL)
                { if(start==rn && rn->data==x)
                   { start=rn->next;
                     rn->next->prev=NULL;
                     free(rn);
                     f=1;
                     printf("Number deleted sucessfully.\n"); 
                     break;
                      }
                  else if(rn->next!=NULL && rn->data==x)
                   { rn->prev->next=rn->next;
                     rn->next->prev=rn->prev;
                     free(rn);
                     f=1;
                     printf("Number deleted sucessfully.\n");
                     break;
                      }
                  else if(rn->next==NULL && rn->data==x)
                   { rn->prev->next=NULL;
                     free(rn);
                     f=1;
                     printf("Number deleted sucessfully.\n");
                     break;
                      }
                 rn=rn->next;
                  }
                if(f==0)
                  printf("Number not found.\n");
                }
      break;
      case 6: if(start==NULL)
                printf("List is empty.\n");
              else
              { rn=start;
                while(rn!=NULL)
                { printf("%d\t",rn->data);
                  rn=rn->next;
                   }
                 }
      break;
      case 7:
      break;

      default: printf("Wrong choice.\n");
      }
     }}
    while(ch!=7);
    return 0;
  }

