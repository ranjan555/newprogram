#include<stdio.h>
#include<conio.h>
void main()
{
double s,h,d,p,ns;
clrscr();
scanf("%lf",&s);
h=s*5/100;
d=s*10/100;
p=s*12/100;
printf("\nhra=%lf\nda=%lf\npf=%lf",h,d,p);
ns=s+h+d-p;
printf("\nTotal salary o my income=%lf",ns);
getch();
}

//Comment testing 
