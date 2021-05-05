#include <stdio.h>
main(void){
    double moni,priceperbook;
    int pricepb;
    printf("how much moni?\n");
    scanf("%lf",&moni);
    printf("book price?\n");
    scanf("%lf",&priceperbook);
    moni = moni/priceperbook;
    pricepb = (int)moni;
    printf("%d",pricepb);
    return 0;
}
