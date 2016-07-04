#include<stdio.h>
#include<conio.h>
void main()
{
int a,b=0,i,j;
char c[100][100],d[100];
clrscr();
printf("Enter the number:");
scanf("%d",&a);
for(i=0;i<a;i++)
scanf("%s",c[i]);
for(i=0;c[0][i];i++)
{
for(j=1;c[j][i];j++)
{
if(c[j][i]!=c[j-1][i])
{
printf("%s",d);
b=1;
}
}
if(b==0)
{
i=0;
d[i]=c[0][i];
}
else
printf("Nothing");
}
getch();
}

