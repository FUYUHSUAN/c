#include<stdio.h>
#include <string.h>
#define SIZE 1000
int main(void)
{
    int i, k;
    char temp;
    char str[SIZE];
    printf("Please enter your words:");
    scanf("%s", str);
    int len = strlen(str);

    for(i=0;i<=len/2-1;i++){
        temp=str[i];
        str[i] = str[len-1-i] ;
        str[len-1-i] = temp  ;
       //k = SIZE-1-i ;
        //printf("%d\n",k);
    }

    printf("%s",str);

    return 0;
}