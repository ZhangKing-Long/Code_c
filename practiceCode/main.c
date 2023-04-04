//用于测试代码

#include "Practice.h"

//int main()
//{
//    int y;
//    scanf("%d",&y);
//    answer11(y);
//
//    return 0;
//}
#include <stdio.h>
int main()
{
    double num;
    scanf("%lf",&num);
    double r;
    if(num<0)
    {
        r=(-1)*num;
    }else
    {
        r=num;
    }
    printf("%.2lf",r);
    return 0;
}
