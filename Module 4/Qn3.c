#include<stdio.h>
void main()
{
    int i,arr[]={1,2,4,3,6,7,9,9};
    int *ptr=arr;
    for(i=0;i<8;i++)
    {
        printf("%d ",*(ptr+i));
        
    }
}
