#include "Practice.h"

//代码内容为计蒜客题目解答（函数形式）
//来源：https://www.jisuanke.com/problems
//      程序设计（复试）自由练题

//day 1
//输入两个整数，输出A+B
int answer1(int a, int b)
{
    return a+b;
}

//输出Mario
void answer2()
{
    printf("        ********\n");		/*八个空格*/
    printf("       ************\n");		/*七个空格*/
    printf("       ####....#.\n");			/*七个*/
    printf("     #..###.....##....\n");
    printf("     ###.......######\n");
    printf("        ...........\n");
    printf("       ##*#######\n");
	printf("    ####*******######\n");
    printf("   ...#***.****.*###....\n");
    printf("   ....**********##.....\n");
    printf("   ....****    *****....\n");
    printf("     ####        ####\n");
    printf("   ######        ######\n");
}

//输出菱形字符
void answer3(char x)
{
    for(int a=1;a<=3;a++){
        for(int i=1;i<=(3-a);i++){
            printf(" ");
        }
        for(int j=1;j<2*a;j++){
            printf("%c",x);
        }
        printf("\n");
    }
    for(int a=1;a<=2;a++){
        for(int j=1;j<=a;j++){
            printf(" ");
        }
        for(int j=5;j>2*a;j--){
            printf("%c",x);
        }
        printf("\n");
    }
}

//输出Hello World
void answer4()
{
    printf("Hello World\n");
}

//输出字符三角形
void answer5(char x)
{
    for(int i=1;i<=3;i++){
        for(int j=i;j<3;j++){
            printf(" ");
        }
        for(int k=0;k<i*2-1;k++){
            printf("%c",x);
        }
        printf("\n");
    }
}

//对齐输出三个整数，每个占8位
void answer6(int a, int b, int c)
{
    printf("%-8d%-8d%-8d",a,b,c);//左对齐
}

//bool类型
void answer7()
{

}

//打印ASCII码字符
void answer8(int num)
{
    printf("%c\n",num);
}

//求等差数列的第N项
int answer9(int first, int second, int n)
{
        return (first-second)*(n-1)+first;
}

//通过坐标计算线段长度
double answer10(int x1, int y1, int x2, int y2)
{
    double z=sqrt((x1-x2)*(x1-x2)+(y1-y2)*(y1-y2));
    return z;
}

//反向打印三位数
void answer11(int num)
{
    for(int i=0; i<3; i++)
    {
        printf("%d",num%10);
        num/=10;
    }
}

//输出A*B
int answer12(int a, int b)
{
    return a*b;
}

//输出第二个数字
int answer13(int a, int b, int c)
{
    return b;
}

//输出保留三位小数的浮点数

//输出保留12位小数的浮点数
//answer15

//打印字符的ASCII码
//answer16

//“*”
//answer17

//“/”
//answer18

//打印商和余数
//answer19

//计算分数的浮点数值
//answer20

//打印甲流疫情死亡率
void answer21(int all, int d)
{
    printf("%.3f%\n",d/all*100.0);
}

//计算多项式的值
//answer22

//温度表达式转换
//answer23

//计算园的相关数据
//answer24

//求浮点数相除的余数
double answer25(double a, double b)
{
    double r;
    double f=0, k=1;
    while(f<a)
    {
        f=k*b;
        k++;
    }
    r=a-(k-1)*b;
    return r;
}

//计算球的体积
double answer26(double r)
{
    double p=3.14;
    double v;
    v=p*r*r*r*4/3;
    return v;
}

//计算次数
int answer27(double h, double r)
{
    double p=3.14159, v=0.0;
    int n=1;
    v=p*r*r*h/1000;
    while((n*v)<20)
    {
        n++;
    }
    return n;
}

//输出剩余整数
int answer28(int n, int x, int y)
{
    if((y%x) != 0)
    {
        return n-y/x-1;
    }else
    {
        return n-(x*y);
    }
}

//计算2的幂
int answer29(int n)
{
    int f=1;
    for(int i=0; i<n; i++)
    {
        f*=2;
    }
    return f;
}

//输出绝对值
double answer30(double num)
{
    if(num<0)
    {
        return num*(-1);
    }else
    {
        return num;
    }
}

//奇偶数判断
void answer31(int num)
{
    if(num%2 != 0)
    {
        printf("odd");
    }else
    {
        printf("even");
    }
}

//ASCII码值奇偶判断
void answer32(char x)
{
    int r=(int)x;
    if(r%2 != 0)
    {
        printf("YES");
    }else
    {
        printf("NO");
    }
}





















































