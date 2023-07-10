#include<stdio.h>
#include<conio.h>

void main(){
   int marks[5]={3,7,1,8,6};
   int i;
   int length=0;
   clrscr();
   for(i=0;i<=4;i++){
      printf("a[%d]=%d\n",i,marks[i]);
      length++;

      }
      printf("Length of an Array:%d",length);


   getch();
}