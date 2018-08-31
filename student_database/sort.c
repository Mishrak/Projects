#include"head.h"
void stud_exit(struct stud *ptr)
{
char ch;
printf("s/S: save and exit   \n");
printf("e/E: exit without saving \n");
scanf(" %c",&ch); 
if((ch=='s')||(ch=='S'))
{

	struct stud *temp;
	temp=ptr;
	FILE *fp;
	fp=fopen("student.dat","w");
	while(temp)
	{
		fprintf(fp,"%d %s %f\n",temp->roll,temp->name,temp->mark);
		temp=temp->next;
	}
	fclose(fp);

	exit(0);
}


else if((ch=='e')||(ch=='E'))
	exit(0);


}



void rev_stud(struct stud **ptr)
{
struct stud *p,*q,*r;
p=*ptr;
q=r=0;
while(p)
{
	r=q;
	q=p;
	p=p->next;
	q->next=r;
}
*ptr=q;
}


int count(struct stud *ptr)
{
int i=0;
while(ptr)
{
	printf("hello\n");
	i++;
	*ptr=*ptr->next;
}
printf("%d",i);
return(i);
}



void sort_stud(struct stud **ptr)
{
char ch,temp2[30];
int c,i,j,temp1;
float temp3;
struct stud *temp;
temp=*ptr;
printf(" n/N:sort with name  \n");
printf(" p/P:sort with percentage   \n");
scanf(" %c",&ch);
c=count(*ptr);
if((ch=='n')||(ch=='N'))
{
for(i=0;i<c-1;i++)
{
	temp=*ptr;
	for(j=0;j<c-1-i;j++)
	{
	
		if((strcmp(temp->name,temp->next->name))>0)
		{	
			strcpy(temp2,temp->name);
			strcpy(temp->name,temp->next->name);
			strcpy(temp->next->name,temp2);
			temp1=temp->roll;
			temp->roll=temp->next->roll;
			temp->next->roll=temp1;
			temp3=temp->mark;
			temp->mark=temp->next->mark;
			temp->next->mark=temp3;
		}
	temp=temp->next;
	
	}
	
}	
}
else if((ch=='p')||(ch=='P'))
{
	for(i=0;i<c;i++)
	for(j=0;j<c-1-i;j++)
	{
       		 if(temp->mark>temp->next->mark)
        	{
                	strcpy(temp2,temp->name);
                	   strcpy(temp->name,temp->next->name);
               		 strcpy(temp->next->name,temp2);
               		 temp1=temp->roll;
               		 temp->roll=temp->next->roll;
               		 temp->next->roll=temp1;
               	 	temp3=temp->mark;
               	 	temp->mark=temp->next->mark;
               		 temp->next->mark=temp3;
        	}
        	temp=temp->next;
	}
}
 

}	














