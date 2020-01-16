#include<stdio.h>
#include<time.h>
#include<stdlib.h>
#define SIZE 52
int a[SIZE]={1,2,3,4,1,2,3,4,1,2,3,4,1,2,3,4,1,2,3,4,1,2,3,4,1,2,3,4,1,2,3,4,1,2,3,4,1,2,3,4,1,2,3,4,1,2,3,4,1,2,3,4};
int main(void)
{
    int j, i, x, temp;
    srand(time(NULL));
    for (i=0;i<52;i++) {
        x = rand()%52;
        temp = a[i];
        a[i] = a[x];
        a[x] = temp;
    }
    for (j=1;j<=4;j++) {
        for (i=0;i<52;i++) {
            if (a[i]==j) {
                if (i/13==0)  printf("¶Â®ç%d",i%13+1);
                if (i/13==1)  printf("¬õ¤ß%d",i%13+1);
                if (i/13==2)  printf("±öªá%d",i%13+1);
                if (i/13==3)  printf("¤è¶ô%d",i%13+1);
            }
        }
        printf("\n");
    }
}
