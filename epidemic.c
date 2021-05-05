#include <stdio.h>
int main(void)
{
    int totalpop = 0,day=1,infected=1;
    printf("population\n");
    scanf("%d",&totalpop);
    while (infected < totalpop)
    {
        day++;
        infected = infected+infected*2;
    }
    printf("%d\n",day);
    return 0;
}
