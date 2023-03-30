// Online C compiler to run C program online
#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {
    char str[10];
    int cnt=0,lw,up,spl,i;
    printf("Enter the string: ");
    //scanf("%s", str);
    printf("\n\n\nWithout using string fuctions");
    while(str[i] != '\0'){
        cnt++;
        if(str[i]>='A' && str[i]<='Z')
            lw=1;
        if(str[i]>='a' && str[i]<='z')
            up=1;
        if(str[i]>=33 && str[i]<=64)
            spl=1;
    }
    
    if(lw=1)
        printf("\nThe string contains lowercase");
    if(up=1)
        printf("\nThe string contains uppercase");
    if(spl=1)
        printf("\nThe string contains special character");
    if(cnt==8)
        printf("\nThe string is 8 characters in length");
        
    lw,up,spl,cnt=0;
    
    printf("\n_____With using String Functions______");
    while(str[i]!='\0'){
        if(islower(str[i]))
            lw=1;
        if(isupper(str[i]))
            up=1;
        if(str[i]>=33 && str[i]<=64)
            spl=1;
    }
    if(lw=1)
        printf("\nThe string contains lowercase");
    if(up=1)
        printf("\nThe string contains uppercase");
    if(spl=1)
        printf("\nThe string contains special character");
    if(strlen(str)==8)
        printf("\nThe string is 8 characters in length");
    return 0;
}
