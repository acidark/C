#include <stdio.h>
int main(void)
{
    int citiesinreg = 0,counter =0;
    printf("coties in region\n");
    scanf("%d",&citiesinreg);
    int popincity[citiesinreg];
    int i=0;
    for(i=0;i<citiesinreg;i++)
    {
        printf("pop in reg\n");
        scanf("%d",&popincity[i]);
        if(popincity[i] > 10000)
        {
            counter = counter+1;
        }
    }
    printf("%d\n",counter);
    return 0;
}
