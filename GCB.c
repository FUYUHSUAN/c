#include<stdio.h>
int GCD(int a, int b);
int main(void)
{
    int G=0,N,i,j;
    printf("input:");
    scanf("%d",&N);
    for(i=1;i<N;i++){
        for(j=i+1;j<=N;j++)
        {
            G+=GCD(i,j);
        }
    }
    printf("%d",G);
}
int GCD(int a, int b)
{
    int d,bigest;
    for(d=1;d<=a;d++){
        if(a%d==0 && b%d==0)bigest=d;
        }
    return bigest;
}
