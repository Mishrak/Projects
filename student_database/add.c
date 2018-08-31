#include"head.h"
void stud_add(struct stud **ptr)
{
int i;
struct stud *temp;
temp=malloc(sizeof(struct stud));
printf("Enter the name...\n");
scanf("%s",temp->name);
printf("Enter the percentage ..\n");
scanf("%f",&temp->mark);
printf("Enter the roll no...\n");
scanf("%d",&temp->roll);
if((*ptr==NULL)||((*ptr)->roll>temp->roll))
{
	temp->next=*ptr;
	*ptr=temp;
}
else
{
	temp1=*ptr;
	while(temp1)
	{
		if((temp1->next->roll>temp->roll)||(temp->next==NULL))
		{
			temp->next=temp1->next;
			temp1->next=temp;
			break;	
		}
		temp1=temp1->next;
	}
}
}
