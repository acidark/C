#include <stdio.h>
int main(void){
    int i=0;
    int players,teamo =0,teamt=0,weight=0;
    printf("number players\n");
    scanf("%d",&players);
    for(i=0;i < players;i++){
        printf("team 1 player %d\n: ",i);
        scanf("%d",&weight);
        teamo = teamo+weight;
        printf("team 2 player %d\n",i);
        scanf("%d",&weight);
        teamt = teamt+weight;
    }
    weight = teamo > teamt;
    if(weight){
        printf("Team 1 has an advantage\n");
        printf("Total weight for team 1: %d\n",teamo);
        printf("Total weight for team 2: %d\n",teamt);
    } else {
        printf("Team 2 has an advantage\n");
        printf("Total weight for team 1: %d\n",teamo);
        printf("Total weight for team 2: %d\n",teamt);
    }
    return 0;
}
