#include<stdio.h>
void main()
{
int a[100],n,s;
printf("Enter the array size");
scanf("%d",&n);
printf("Enter the array elements");
for(int i=0;i<n;i++)
{
scanf("%d",&a[i]);
}
printf("Enter the element to be searched\n");
scanf("%d",&s);
for(int i=0;i<n;i++)
{
if(a[i]==s)
{
printf("Element found at position\t %d \n",i+1);
break;
}
if(i==n)
{
printf("Element not found\n");
}
}
}

