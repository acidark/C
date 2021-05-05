#include <stdio.h>
int main(void){
    int age = 0,weight = 0,conditiono=0,conditiont=0,cost =0;
    printf("age\n");
    scanf("%d",&age);
    printf("weight\n");
    scanf("%d",&weight);
    conditiono = age == 60;
    conditiont = age < 10;
    //int conditionw = weight > 20;
    int conditiontr =  conditiono || conditiont;
    if(conditiontr){
        if(conditiont){
            cost = cost+5;
        }
    } else {
        cost = 30;
        conditiontr = weight > 20;
        if (conditiontr){
            cost = cost +10;
        }
    }
    printf("%d\n",cost);
}
