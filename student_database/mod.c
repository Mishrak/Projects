#include"head.h"
void stud_mod(struct stud **ptr)
{
struct stud *temp;
temp=*ptr;
temp1=temp;
char ch,tempn[30];
int temp2,t1=0,t2;
float mar;

printf(" r/R: to search the record based on the Roll number   \n");
printf(" n/N: to search the record based on the Names         \n");
printf(" p/P: to search the record based on the Percentage    \n");
scanf(" %c",&ch);
if((ch=='r')||(ch=='R'))
{
	printf("Enter the Roll number  \n");
	scanf("%d",&temp2);
	while(temp)
	{
		if(temp->roll==temp2)
		{
		printf(" RECORD FOUND  \n");
		printf(" Enter the new details of the record\n");
		printf("Enter the name   \n");
		scanf("%s",temp->name);
		printf("Enter the percentage \n");
		scanf("%f",&temp->mark);	
		break;
		}
		temp=temp->next;
	}
	if(temp==NULL)
	printf("The record not found...\n");
}
else if((ch=='n')||(ch=='N'))
{
	printf("Enter the name \n");
	scanf("%s",tempn);
	temp=*ptr;
	while(temp)
	{
		if((strcmp(temp->name,tempn))==0)
			t1++;
		temp=temp->next;
	}
	if(t1==0)
	goto jmp;
	temp=*ptr;
	if(t1==1)
	{
		while(temp)
		{
			if((strcmp(temp->name,tempn))==0)
			{
			        printf(" Enter the new details of the record\n");
                		printf("Enter the name   \n");
		                scanf("%s",temp->name);
                                printf("Enter the percentage \n");
                                scanf("%f",&temp->mark);
					break;
			}
			temp=temp->next;
		}			
	}
        else if(t1>1)
        {
                temp=*ptr;
                while(temp)
                {
                     if((strcmp(temp->name,tempn))==0)
                        printf("%d\t\t %s\n",temp->roll,temp->name);

                        temp=temp->next;
                }
                printf("Enter the Roll no to be modified \n");
                        scanf("%d",&t2);
                temp=*ptr;
                while(temp)
                {
                        if(temp->roll==t2)
                        {
                                 printf(" RECORD FOUND  \n");
                                 printf(" Enter the new details of the record\n");
                                 printf("Enter the name   \n");
                                 	scanf("%s",temp->name);
                                 printf("Enter the percentage \n");
                                        scanf("%f",&temp->mark);
                                 break;
                        }
                        temp=temp->next;
                }

        }




}
	
else if((ch=='p')||(ch=='P'))
{
	float f2;
        printf("Enter the percentage \n");
        scanf("%f",&f2);
        temp=*ptr;
        while(temp)
        {
                if(temp->mark==f2)
                        t1++;
                temp=temp->next;
        }
	if(t1==0)
	goto jmp;
	
        temp=*ptr;
        if(t1==1)
        {
                while(temp)
                {
                	if(temp->mark==f2)
                        {
                                printf(" Enter the new details of the record\n");
                                printf("Enter the name   \n");
                                scanf("%s",temp->name);
                                printf("Enter the percentage \n");
                                scanf("%f",&temp->mark);
                                        break;
                        }
                        temp=temp->next;
                }
        }
        else if(t1>1)
        {
                temp=*ptr;
                while(temp)
                {
                     if(temp->mark==f2)
                        printf("%d\t\t %s\t %f \n",temp->roll,temp->name,temp->mark);

                        temp=temp->next;
                }
                printf("Enter the Roll no to be modified \n");
                        scanf("%d",&t2);
                temp=*ptr;
                while(temp)
                {
                        if(temp->roll==t2)
                        {
                                 printf(" RECORD FOUND  \n");
                                 printf(" Enter the new details of the record\n");
                                 printf("Enter the name   \n");
                                        scanf("%s",temp->name);
                                 printf("Enter the percentage \n");
                                        scanf("%f",&temp->mark);
                                 break;
                        }
                        temp=temp->next;
                }

        }
}
jmp:
printf("The record not found \n");
}
