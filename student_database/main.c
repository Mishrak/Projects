#include"head.h"
main()
{
char ch;
struct stud *hptr=0;
read_stud(&hptr);
repeat:
printf("\n\n\n");
printf(" ***STUDENT RECORD MENU***  ");
printf("\n\n");
printf("  a/A:add new record    \n");
printf("  d/D:delete a record   \n");
printf("  s/S:show the list     \n");
printf("  m/M:modify the record \n");    
printf("  v/V:save              \n");
printf("  e/E:exit              \n");
printf("  t/T:sort the list     \n");
printf("  l/L:delete all the record  \n");
printf("  r/R:reverse the list   \n");

printf(" Enter ur choice:  ");
scanf(" %c",&ch);
printf("\n\n");



 
	if((ch=='a')||(ch=='A'))
		stud_add(&hptr);
	else if((ch=='d')||(ch=='D'))
		del_stud(&hptr);
	
	else if((ch=='s')||(ch=='S'))
		print_stud(hptr);
	
	else if((ch=='m')||(ch=='M'))
		stud_mod(&hptr);
	
	else if((ch=='v')||(ch=='V'))
		sav_stud(hptr);
	
	else if((ch=='e')||(ch=='E'))
		stud_exit(hptr);
	
	else if((ch=='t')||(ch=='T'))
		sort_stud(hptr);

	else if((ch=='l')||(ch=='L'))
		delete_all(&hptr);
	
	else if((ch=='r')||(ch=='R'))
		rev_stud(&hptr);
	else 
		printf("wrong command \n");		



goto repeat;



}
