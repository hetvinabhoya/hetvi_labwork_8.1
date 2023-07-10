#include<stdio.h>
#include<conio.h>

void main(){
  int a[5]={7,4,9,5,2};
  int b[5]={1,3,1,7,3};
  int c[5];
  int i;
  int sum1=0,sum2=0,sum3=0;
  clrscr();
    for(i=0;i<=4;i++){
	printf("a[%d] = %d\n",i,a[i]);

    sum1=sum1+a[i];
    }
	printf("Total of a=%d\n",sum1);

printf("----------------------\n");

    for(i=0;i<=4;i++){
	printf("b[%d] = %d\n",i,b[i]);

    sum2=sum2+b[i];
    }
	printf("Total of b=%d\n",sum2);

printf("----------------------\n");

    for(i=0;i<=4;i++){

	printf("c[%d]=%d\n",i,c[i]=a[i]+b[i]);
    sum3=sum1+sum2;
    }
	printf("Total of c=%d\n",sum3);

  getch();
}