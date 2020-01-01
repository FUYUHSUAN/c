#include<stdio.h>
#define SIZE 7

int main(void)
{
    int array[SIZE]={4,6,10,42,6,8,70};
    int temp, i;
        for(i=0;i<SIZE-1;i++){
            if(array[i]>array[i+1]){
                temp=array[i+1];
                array[i+1]=array[i];
                array[i]=temp;
            }
        }
        printf("max=%d min=%d",array[SIZE-1],array[0]);
}


