#include<stdio.h>
#define SIZE 26

char a[SIZE] = {'a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z'};
char b[SIZE] = {'A','B','C','D','E','F','G','H','I','J','K','L','M','N','O','P','Q','R','S','T','U','V','W','X','Y','Z'};
int main(void)
{
    int i,j;
    char word[SIZE];
    printf("Please enter the word\n");
    scanf("%s",word);
    for(i=0;word[i]!='\0';i++){
       printf("%c\t",word[i]);
    }
    printf("\n");
    for(i=0;word[i]!='\0';i++){
        char c = word[i];
        if(c>='A'&&c<='Z'){
           for(j=0;c!=b[j];j++){

               ;

           }
            printf("%c",a[j]);
        }
        else{
            for(j=0;c!=a[j];j++){

                ;
            }
             printf("%c",b[j]);

        }
    }
}