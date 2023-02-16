#include <stdio.h>
void main(){
    int array1[100],array2[100],array3[100],size1,size2,size3;
    printf("Enter the size of 1st array\n");
    scanf("%d",&size1);
    printf("Enter the elements of 1st array\n");
    for(int i=0;i<size1;i++)
        scanf("%d",&array1[i]);
    printf("Enter the size of 2nd array\n");
        scanf("%d",&size2);
    printf("Enter the elements of 2nd array\n");
    for(int i=0;i<size2;i++)
        scanf("%d",&array2[i]);  
    size3=size1+size2; 
    for(int i=0;i<size1;i++)
        array3[i]=array1[i]; 
    for(int i=0;i<size2;i++)
        array3[i+size1]=array2[i]; 
    printf("array elements before sorting\n");
    for(int i=0;i<size3;i++)
        printf("%d \n",array3[i]);
    for(int i = 0; i < size3; i++)
    {
        int temp;
        for(int j = i + 1; j < size3; j++) 
        {
            if(array3[i] > array3[j]) 
            {
                temp = array3[i];
                array3[i] = array3[j];
                array3[j] = temp;
            }
        }
    }       
    printf("array elements after sorting\n");
    for(int i=0;i<size3;i++)
        printf("%d \n",array3[i]);    
        
}        
