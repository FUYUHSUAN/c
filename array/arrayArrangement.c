#include<stdio.h>

int main(void)
{
    int s=1, i, temp=0, j;
    printf ("Please enter the size of array\n") ;
    scanf ("%d",&s) ;
    int array[s] ;
    printf("Please enter the contents of array:\n");
    for (i=0;i<s;i++){
        scanf("%d",&array[i]);
    }
    printf("Current number \n");
    for (i=0;i<s;i++){
        printf("%d\n",array[i]);
    }
     printf("Sorted number\n");
    for(j=0;j<s;j++){
        for(i=0;i<s;i++){
            if(array[i]>array[i+1]){
                temp=array[i];
                array[i]=array[i+1];
                array[i+1]=temp;
            }
        }

        for(i=0;i<s;i++) printf("%d\t", array[i]);
        printf("\n");
    }
    return 0;



}
