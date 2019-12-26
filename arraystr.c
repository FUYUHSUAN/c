#include<stdio.h>
#define SIZE 5
int main(void)
{
    int i, k;
    char temp;
    char str[SIZE];
    printf("Please enter your words:");
    scanf("%s",&str);

    for(i=0;i<=SIZE/2-1;i++){
        temp=str[i];
        str[i] = str[SIZE-1-i] ;
        str[SIZE-1-i] = temp  ;
       k = SIZE-1-i ;
        //printf("%d\n",k);
    }

    printf("%s",str);

    return 0;
}