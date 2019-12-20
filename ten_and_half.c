#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int t, w=0,l=0;

double pork() {
    int player=rand()%13+1;
    if(player==11||player==12||player==13) {
        return 0.5;
    }
    else {
        return (double) player;
    }
}

int game() {
    int i,j;
    float computer=0,player=0,ans1=0,ans2=0;
    
    srand(time(NULL));

    do {
        ans1 += pork();
        printf("This is your PK %f\n",ans1);
        if(ans1>10.5) break;
        printf("Do you want to one more ?\n");
        printf("If you want enter 1 else enter 0\n");
        scanf("%d",&i);
    } while(i!=0);

    do {
        ans2 += pork();
        if(ans2<=7) j = 1; else j = 0;
    } while(j!=0);

    printf("This is mine %f\n",ans2);
    if(ans1>ans2&&ans1<=10.5) {
        printf("Your win!\n");
        w++;
    } else if(ans2>10.5) {
        printf("Your win!\n");
        w++;
    }
    else {
        printf("Your lose!\n");
        l++;
    }
    printf("Do you want to play again?(if you want please enter 1 else enter 0)\n");
    scanf("%d",&t);
    return t;
}

int main(void)
{
    int t;
    do {
      t=game();
    } while(t!=0);
    printf("You win %d time\n",w);
    printf("You lose %d time\n",l);
    return 0;
}
