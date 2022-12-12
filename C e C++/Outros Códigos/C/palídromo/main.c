#include <stdio.h>
#include <stdlib.h>

int main()
{
    char a[100],b[100];
    printf("Type an word to check if it is a palindrome or not\n");
    gets(a);
    strcpy(b,a);
    strrev(b);
    if(strcmp(b,a)==0){
        printf("%s is a palindrome",a);
    }else{
        printf("%s is not a palindrome",a);
    }
    return 0;
}
