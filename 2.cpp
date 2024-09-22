#include <stdio.h>

int main()
{
    int i;
    float j;

    printf("用了多少度电？\n");

    scanf("%d",&i);

    if(i > 0 && i <= 150)
    j = 0.4463 * i;
    else if (i > 150 && i <= 400)
    j = 0.4663 * (i - 150) + 150 * 0.4463;
    else
    j = 250 * 0.4663 + 150 * 0.4463 + (i - 400) * 0.5663;

    printf("%.1f\n",j);

    return 0;
}