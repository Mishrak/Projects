#include"head.h"
void delete_all(struct stud **ptr)
{
struct stud *temp;
temp=*ptr;
while(temp)
{
	*ptr=temp->next;
	free(temp);
	temp=*ptr;
}
}


void del_stud(struct stud **ptr)
{
char c,nam[25];
int rol,t1=0;
struct stud *temp;
printf("r/R:To delete the record based on roll no \n");
printf("n/N:To delete the record based on name    \n");
scanf(" %c",&c);
if((c=='r')||(c=='R'))
{
	printf("Enter Roll no to delete \n");
	scanf("%d",&rol);
 	temp=*ptr;
	temp1=temp;
	while(temp)
	{
		if(temp->roll==rol)
		{
			if((*ptr)->roll==rol)
				*ptr=temp->next;
			else 
				temp1->next=temp->next;
				free(temp);
				break;
		}	
		temp1=temp;
		temp=temp->next;
	}	

  if(temp==NULL)
	
	printf("Record not found ...\n");
	
	
}	
else if((c=='n')||(c=='N'))
{

	printf("Enter name to delete \n");
	scanf("%s",nam);
	temp=*ptr;
	temp1=temp;
	while(temp)
	{
		if((strcmp(temp->name,nam))==0)
			t1++;
	
		temp=temp->next;	
	}
	if(t1==0)
	goto jmp;
	else if(t1==1)
	{
		temp=*ptr;
		while(temp)
		{
			if((strcmp(temp->name,nam))==0)
			{
				if((strcmp((*ptr)->name,nam))==0)
					*ptr=temp->next;
				else 
					temp1->next=temp->next;
					free(temp);	
					break;
			}
			temp1=temp;
			temp=temp->next;
		}	
	}
	else if(t1>1)
	{
		temp=*ptr;
		while(temp)
		{
			if((strcmp(temp->name,nam))==0)
				printf("%d\t\t %s\n",temp->roll,temp->name);
			temp=temp->next;
		}
		printf("Enter the roll no \n");
		scanf("%d",&rol);
		temp=*ptr;
		while(temp)
       		{
                	if(temp->roll==rol)
                	{
                        	if((*ptr)->roll==rol)			// if the first node itself to be deleted 
                                *ptr=temp->next;
                        else
                        
                                temp1->next=temp->next;
                                free(temp);
                                break;
                        }
                        temp1=temp;
                        temp=temp->next;
               }
        }

jmp:  
printf("Record not found ...\n");
}
}







