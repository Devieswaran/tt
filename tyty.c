#include<stdio.h>
int main()
{
int a,b,c;
printf("\n Enter a value of a ,band c");
scanf("%d%d%d"&a,&b,&c);
if(a>b)
{
if(a>c)
{
printf("\n a is big");
}
else if(b>c)
{
printf("\n b is big");
}
else
{
printf("\n c is big");
}
return 0;
}
