#include <stdio.h>
int main(void){
    int pass;
    double gas;
    int total=0;
    double dtotal;
    //printf("passangers\n");
    scanf("%d",&pass);
    //printf("gas\n");
    scanf("%lf",&gas);
    if (pass > 0){
        dtotal =((gas+1)/(pass+1.0));
    }else{
         dtotal = gas;
    }
 //   dtotal = (double) total;
    printf("%.2lf",dtotal);
    return 0;
}
