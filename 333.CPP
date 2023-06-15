#include<stdio.h>
#include<conio.h>

void main(){
int b,h,area;

clrscr();
printf("base=");
scanf("%d",&h);
printf("height=");
scanf("%d",&b);
area=(b*h)/2;
printf("area of triangle is %d",area);
getch();
}