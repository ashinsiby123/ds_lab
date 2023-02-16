#include<stdio.h>
void main()
{
int a[100],n,s,first,last,mid,flag;
printf("Enter the array size");
scanf("%d",&n);
printf("Enter the array elements");
for(int i=0;i<n;i++)
{
scanf("%d",&a[i]);
}
printf("Enter the element to be searched\n");
scanf("%d",&s);
first=0;
last=n-1;
flag=0;
while(first<=last)
{
mid=(first+last)/2;
if(s==a[mid])
{
flag=1;
break;
}
else if(s>a[mid])
{
   first=mid+1;
}
else
{
    last=mid-1;
}
}
    if(flag==0)
    printf("\n  The number is not found");
    else
    printf("\n  The number is found and its position is: %d\n",mid+1);
}

