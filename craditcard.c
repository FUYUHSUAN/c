#include<stdio.h>
#define SIZE 50
int array1[SIZE];
int array[SIZE];
int main(void)
{
    int i,a,b,c,d,w=0,x=0,y=0,z=0,ans=0;
    printf("please enter the credit card number:\n");
    scanf("%d %d %d %d",&a,&b,&c,&d);
    for(i=0;i<4;i++){
        array[i]=a%10;
        a=a/10;
    }
    for(i=0;i<4;i++){
        array[i+4]=b%10;
        b=b/10;
    }
    for(i=0;i<4;i++){
        array[i+8]=c%10;
        c=c/10;
    }
    for(i=0;i<4;i++){
        array[i+12]=d%10;
        d=d/10;
    }
    for(i=0;i<16;i++){
        if(i%2==0){
            x+=array[i];
        }
        else{
            array1[i]=2*array[i];
        }
    }
    for(i=0;i<16;i++){
        if(i%2==1){
            if(array1[i]>9){
                z=array1[i]%10;
                w=array1[i]/10;
                y=z+w+y;

            }
            else{
                y+=array1[i];
            }
        }
    }

    ans=x+y;
    printf("%d\n",ans);
    if(ans%10==0)printf("Valid");
    else printf("Invalid");

}