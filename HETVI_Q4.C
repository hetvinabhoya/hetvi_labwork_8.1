#include<stdio.h>
#include<conio.h>

void main(){
   int marks[10];
   int i;

   clrscr();
       for(i=0;i<=9;i++)
       {
	  printf("Enter your marks =  ");
	  scanf("%d",&marks[i]);
       }

printf("--------------------------------\n");
       for(i=0;i<=9;i++)
	  {
	  if(marks[i]>=90)
	  {
	       printf("Marks = %d  A1  Passed\n",marks[i]);
	  }
	  else if(marks[i]>=80)
	  {
	       printf("Marks = %d  A2  Passed\n",marks[i]);
	  }
	  else if(marks[i]>=70)
	  {
	       printf("Marks = %d  B1  Passed\n",marks[i]);
	  }
	  else if(marks[i]>=60)
	  {
	       printf("Marks = %d  B2  Passed\n",marks[i]);
	  }
	  else if(marks[i]>=50)
	  {
	       printf("Marks = %d  C1  Passed\n",marks[i]);
	  }
	  else if(marks[i]>=40)
	  {
	       printf("Marks = %d  C2  Passed\n",marks[i]);
	  }
	  else
	  {
	       printf("Marks = %d  Failed\n",marks[i]);
	  }

       }

   getch();
}