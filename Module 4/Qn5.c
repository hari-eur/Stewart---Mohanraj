#include<stdio.h>
#include<stdlib.h>
void main()
{
    int *arr,n,i;
    printf("Enter n size: ");
    scanf("%d",&n);
    arr=(int*)malloc(n*sizeof(int));
    printf("\nEnter elements:");
    for(i=0;i<n;i++){
        scanf("%d",arr+i);
        
    }
    printf("\nEntered elements are:");
    for(i=0;i<n;i++){
        printf("%d ",*(arr+i));
        
    }
    free(arr);
    
}
