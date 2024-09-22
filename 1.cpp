#include <stdio.h>

int main()
{
    int i,j,k,b;
    int tem;


    printf("请输入正整数数字个数及其所需第几最小整数:\n");

    scanf("%d %d",&i,&j);

    int a[i];
    int num[i] = {0};
    printf("请输入数字：\n");

    for(int c = 0;c < i;c++)
    {
        scanf("%d",&a[c]);
    }

    for(k = 0; k < i - 1; k++)
    {
        for(b = k + 1; b < i; b++)
        {
            if(a[k] >= a[b])
            {
                tem = a[k];
                a[k] = a[b];
                a[b] = tem;
            }
        }
    }

    num[0] = a[0];

     for(int c = 1;c < i;c++)
    {
        for(int d = c ;d < i;d++)
        {
            if(num[c - 1] < a[d])
            {
                num[c] = a[d];
                break;
            }
        }
        if(num[c] == 0)
        break;
    }
    
    if(num[j] > 0)
    printf("第%d小的整数是%d\n",j,num[j-1]);
    else
    printf("无第%d小的正整数",j);


    return 0;
}
