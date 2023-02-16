#include<stdio.h>
void main()
{
int a[10],b[10],i,c[10],d[10],e[10],f[10],j,k=0,n1,l,n2,ch,m=0,n=0,p=0;
printf("Enter number of element of set A\n");
scanf("%d",&n1);
printf("Enter the element of set A \n");
for(i=0;i<n1;i++)
scanf("%d",&a[i]);
printf("Enter number of element of set B\n");
scanf("%d",&n2);
printf("Enter the element of set B \n");
for(i=0;i<n2;i++)
scanf("%d",&b[i]);
while(ch!=4)
{
printf("\n\nSelect your choice\n");
printf("\n1.Union of the 2 Sets \n2.Intersection Of The2Sets\n3.Differenence between The Sets End\n4.Exit\n");
printf("\nEnter your choice\n");
scanf("\n%d",&ch);
switch(ch)
{
case 1:
for(i=0;i<n1;i++)
{
for(j=0;j<k;j++)
{
if(c[j]==a[i])
break;
}
if(j==k)
{
c[k]=a[i];
k++;
}
}
for(i=0;i<n2;i++)
{
for(j=0;j<k;j++)
{
if(c[j]==b[i])
break;
}
if(j==k)
{
c[k]=b[i];
k++;
}
}
printf("Union of set A and B is:-\n");
for(i=0;i<k;i++)
printf("%d ",c[i]);

break;

case 2:
n=0;
printf("INTERSECTION \n");
for( i=0;i<n1;i++)
{
for(j=0;j<n2;j++)
{
if(a[i]==b[j])
{
d[n]=a[i];
n++;
}
}
}
printf("intersection of set A and set B are:-\n");
for(i=0;i<n;i++)
printf("%d ",d[i]);
break;
case 3:
m=0;
p=0;
for( i=0;i<n1;i++)
{
for(j=0;j<n2;j++)
{
if(b[j]==a[i])
break;
}
if(j==n2)
{
for(l=0;l<m;l++)
{
if(e[l]==a[i])
break;
}
if(l==m)
{
e[m]=a[i];
m++;
}
}
}
for( i=0;i<n2;i++)
{
for(j=0;j<n1;j++)
{
if(b[i]==a[j])
break;
}
if(j==n1)
{
for(l=0;l<p;l++)
{
if(d[l]==b[i])
break;
}
if(l==p)
{
d[p]=b[i];
p++;
}
}
}
printf("Difference of A-B is:-\n");
for(i=0;i<m;i++)
{
printf("%d ",e[i]);
}
printf("\n");
printf("Difference of B-A is:-\n");
for(i=0;i<p;i++)
{
printf("%d ",d[i]);
}
}
}
}

