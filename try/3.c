#include<stdio.h>
void main()
{
int array[100],item,pos,size,i;
printf("size of array : ");
scanf("%d",&size);
printf("\n Enter elements : ");
for(i=1;i<=size;i++)
{
scanf("%d",&array[i]);
}

printf("enter element to insert : ");
scanf("%d",&item);
printf("position : ");
scanf("%d",&pos);
size=size+1;
for(i=size;i>pos;i--)
{
array[i]=array[i-1];
}
array[pos]=item;
printf("\n elemets are:\n");
for(i=1;i<=size;i++)
{
printf("%d \n ",array[i]);
}


}
