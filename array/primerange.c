#include<stdio.h>

int main(void)
{
    int a, b, i, j, isprime=1;
    printf("Please enter the number's range:\n");
    scanf("%d %d",&a,&b);
    if(a>b){
        for ( j=b;j<=a;j++ ){
            int isprime=1;
            int i;
            for ( i=2;i<j;i++ )
            {
                if ( j%i==0 ){
                  isprime=0;
                  break;
                }
            }
            if(j<2)isprime=0;
            if (isprime==1)printf("%d\n",j);
            printf("%d is prime",j);
        }
    }
    else{
        for ( j=a;j<=b;j++ ){
            int isprime=1;
            int i;
            for ( i=2;i<j;i++ )
            {
                if ( j%i==0 ){
                  isprime=0;
                 break;
                }
            }
            if(j<2)isprime=0;
            if (isprime==1)printf("%d\n",j);
            printf("%d is prime",j);
        }

        }
}
