#include<stdio.h>
#include<conio.h>

void main(){
const float pi = 3.14;
int radius,total;

clrscr();
total = pi * radius * radius;
printf("Enter value of radius:");
scanf("%d",&radius);
printf("area of circle is %d",total);
getch();
}