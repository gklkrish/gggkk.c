#include<stdio.h>
void main()
{
int a[100],g,k,o,temp;
printf("Enter the value ");
scanf("%d",&g);
for(k=0;k<=g;k++)
{
scanf("%d",&a[k]);
}
for(k=0;k<=g;k++)
{
for(o=1;o<=g;o++)
{
if(a[k]>a[o])
{
temp=a[o];
a[o]=a[k];
a[k]=temp;
}
}
}
k=k%2;
printf("%d",a[k]);
}
