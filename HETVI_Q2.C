#include<stdio.h>
#include<conio.h>

void main(){
  int marks[5]={12,42,18,50,26};
  int i;
  int Average=0;
    clrscr();
    for(i=0;i<=4;i++){
       printf("a[%d]=%d\n",i,marks[i]);

       Average=Average+marks[i];
    }
       printf("Average of Array: %d",Average/5);

    getch();

}