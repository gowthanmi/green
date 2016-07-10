
#include<conio.h>
#include<conio.h>
void main()
{
int n,a,p,i;
clrscr();
printf("the value of n is:");
scanf("%d",&n);
printf("the pair is:");
scanf("%d",&p);
for(i=0;i<2*n;i++)
{
a=2*n-i;
if(p!=a)
{
printf("The pair is%d for days %d is %d\n");
}
}
getch();
}
