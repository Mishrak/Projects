#include"head.h"

void print_stud(struct stud *ptr)
{
while(ptr)
{
	printf("%d\t\t%s\t\t\t %f \n", ptr->roll,ptr->name,ptr->mark);
	ptr=ptr->next;
}
}
void sav_stud(struct stud *ptr)
{

        struct stud *temp;
        temp=ptr;
        FILE *fp;
        fp=fopen("student.dat","w");
        while(temp)
        {
                fprintf(fp,"%d %s %0.2f\n",temp->roll,temp->name,temp->mark);
                temp=temp->next;
        }
        fclose(fp);
}





void read_stud(struct stud **ptr)
{
struct stud *temp,v;
FILE *fp;
fp=fopen("student.dat","r");
while((fscanf(fp,"%d %s %f",&v.roll,v.name,&v.mark))!=EOF)
{
	
	temp=malloc(sizeof(struct stud));
        temp->roll=v.roll;
	strcpy(temp->name,v.name);
	temp->mark=v.mark;

	if((*ptr)==NULL)
	{
		temp->next=*ptr;
		*ptr=temp;
		temp1=temp;
	}
	
	else
	{
		temp->next=temp1->next;
		temp1->next=temp;
		temp1=temp;
	}
}

}

