#include <stdio.h>
int main(void){
    int i;
    int ngrades,grades,igrades;
    double dgrades;
    //printf("how many grades:\n");
    scanf("%d",&ngrades);
    for(i=0;i<ngrades;i++){
       // printf("type grade:\n");
        scanf("%d",&grades);
       // i = i+1;
        igrades = igrades+grades;
    }
    dgrades = (double)igrades;
    printf("%.2lf",dgrades/ngrades);
    return 0;
}
