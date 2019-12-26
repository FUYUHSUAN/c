#include<stdio.h>

int main(void)
{
    int a, i, b, GDB;
    printf("Please enter your number:\n");
    scanf("%d %d",&a,&b);
    for(i=1;i<=a;i++){
        if(a%i==0&&b%i==0){
            GDB=i;
        }
    }
    printf("%d",GDB);
}
