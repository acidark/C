#include <stdio.h>
int main(void){
    int cars = 0;
    double totalweight=0;
    printf("cars\n");
    scanf("%d",&cars);
    double array[cars];
    int i = 0;
    for(i=0;i<cars;i++){
        printf("weight can\n");
        scanf("%lf",&array[i]);
        totalweight = totalweight+array[i];
    }
    double avg = totalweight/cars;
    for (i=0; i < cars;i++){
        if (array[i] <= avg){
            printf("%.1lf\n",avg-array[i]);
        } else {
            printf("-%.1lf\n",array[i]-avg);
        }
    }
}
