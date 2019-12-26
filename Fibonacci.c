#include<stdio.h>

int f(int y);
int main(void)
{
    int sum,a;
    printf("please enter your number\n");
    scanf("%d",&a);
    sum=f(a);
    printf("%d",sum);
    return 0;
}
int f(int y)
{
    int a,i;
    if(y==1||y==2){
        a=1;
        return a;
    }
    else {
        for(i=3;i<=y;i++){
            a=f(i-1)+f(i-2);

        }
        return a;
    }
}
