#include <stdio.h>
int main(void){
    int i=0;
    int howManyRobots=0;
    int height=0;
    int weight=0;
    int power=0;
    int resistance=0;
    int sum=0;
    //printf("How many robots?\n");
    scanf("%d",&howManyRobots);
    for(i=0;i < howManyRobots;i++){
        //printf("Type height,weight,power,resistance\n");
        scanf("%d%d%d%d",&height,&weight,&power,&resistance);
        sum = sum+((height-weight)*(power+resistance));
    }
    printf("%d/n",sum);
    return 0;
}
