#include<stdio.h>
#include<conio.h>

void main(){
int p,r,t,total;

clrscr();
printf("principal amount=");
scanf("%d",&p);
printf("rate per annum=");
scanf("%d",&r);
printf("time in years=");
scanf("%d",&t);
total=(p*r*t)/100;
printf("simple interest is %d",total);
getch();
}