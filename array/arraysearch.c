#include<stdio.h>

int main(void)
{
    int s=1, i, temp=0, j, num , k,check=1;
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

    printf("Please enter the number what you want to search:\n");
    scanf("%d",&num);
    //num = array[s-1];
    for(k=0; k<=s; k++){
      if(array[k] == num)
      {
          printf("%d",k);
          break;
      }
      check++;
    }
    if(check > s) printf("error");
    return 0;



}
