//Notes C
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

////指针
//int main()
//{
//
//    int a = 10;
//    int* p = &a;  //int* 为指针指向类型
//    *p = 20;
//    printf("%d\n", *p);
//    printf("%d\n", a);
//    return 0;
//}
//
//

////结构体 也相当于定义了一个新的类型
//struct Book
//{
//    char name[20];  //书名
//    int price;      //价钱
//};
//
//int main()
//{
//    struct Book b = {"C语言程序设计" , 20};
//    printf("%s\n", b.name);
//    printf("%d\n", b.price);
//    b.price = 50;
//    printf("修改后的价格%d\n", b.price);
//
//    struct Book* sp = &b;
//    printf("%s\n", (*sp).name);
//    printf("%d\n", (*sp).price);
//
//    printf("%s\n", sp->name);
//    printf("%d\n", sp->price);
//
//
//    return 0;
//}

//判断一个数是否为奇数
//void judgeOdd(int num)
//{
//    if(num%2 == 1){
//        printf("YES\n");
//    }else{
//        printf("NO\n");
//    }
//}
//
//int main()
//{
//    int x, result;
//    scanf("%d",&x);
//    judgeOdd(x)
//    return 0;
//}

//单分支语句 if else
//多分支语句
//switch()
//{
//case *:
//    break;
//
//    ……
//    default:
//
//}
//
//getchar();
//putchar();

////计算n的阶乘
//int main()
//{
//    int n, sum=1;
//    scanf("%d",&n);
//    for(int i=1; i<=n;i++)
//    {
//        sum*=i;
//    }
//    printf("%d\n",sum);
//    return 0;
//}


////计算阶乘相加
//int main()
//{
//    int n, sum=1, result=0;
//    scanf("%d",&n);
//    for(int i=1;i<=n;i++)
//    {
//        sum*=i;
//        result+=sum;
//
//    }
//    printf("%d\n",result);
//    return 0;
//
//}


////遍历数组找目标
//int main()
//{
//    int arr[10]={1, 2, 3, 4, 5, 6, 7, 8, 9, 10};                              //
//    int sz=0, target;
//    scanf("%d",&target);
//    sz = sizeof(arr)/sizeof(arr[0]);        //求出数组长度
//    for(int i=0;i<sz;i++)
//    {
//        if(arr[i]==target)
//        {
//            printf("%d\n",i);
//            break;
//        }
//    }
//    return 0;
//}

////分数求和
//int main()
//{
//    int flag=1;
//    double sum=0.0;
//    for(int i=1; i<=100; i++)
//    {
//        sum += flag*1.0/i;
//        flag*=-1;
//    }
//    printf("%lf\n",sum);
//    return 0;
//}

////二分法
//int main()
//{
//    int arr[]={1, 2, 3, 4, 5, 6, 7, 8, 9, 10}, target, mid;
//    int sz, right, left=0;
//    scanf("%d",&target);
//    sz = sizeof(arr)/sizeof(arr[0]);
//    right=sz-1;
//    while(right>left)
//    {
//        mid = (right + left)/2;
//        if(target >arr[mid])
//        {
//            left = mid;
//        }else if(target < arr[mid])
//        {
//            right = mid;
//        }else
//        {
//            break;
//        }
//    }
//    printf("%d\n",mid);
//    return 0;
//}


////猜数字游戏
//
//void menu()
//{
//    printf("***********************\n");
//    printf("******1.开始游戏 ******\n");
//    printf("******2.退出游戏 ******\n");
//    printf("***********************\n");
//}
//
//
//void game()
//{
//
//}
//
//int main()
//{
//
//    int choice;
//    int flag=1;
//
//    while(flag)
//    {
//        menu();
//        printf("请输入你的选择：\n");
//        scanf("%d",&choice);
//        switch(choice)
//        {
//        case 1:
//            game();
//            break;
//        case 2:
//            printf("退出游戏！\n");
//            flag=0;
//            break;
//        default:
//            system("cls");
//            printf("请重新选择：\n");
//
//            break;
//        }
//    }
//    return 0;
//}

////打印1—200之间的素数
//int  get_prime(int Max)
//{
//    for(int i = 2; i< Max/2; i++)
//    {
//        if(Max%i == 0)
//        {
//            return 0;
//        }
//
//    }
//}

//int main()
//{
//    int num;
//    scanf("%d",&num);
//    int flag= get_prime(num);
//    if(flag)
//    {
//        printf("%d\n",num);
//    }else
//    {
//        printf("Not Prime!\n");
//    }
//    return  0;
//}

////获取字符串长度函数
//int get_strlen(char* arr)
//{
//    int count=0;
//    while(*arr != '\0')
//    {
//        count++;
//        arr++;
//    }
//    return count;
//}

////将上述函数进行递归实现
////递归实现求出字符串长度
//int get_strlen(char* arr)
//{
//    if(*arr != '\0')
//    {
//        return 1+get_strlen(arr + 1);
//    }
//    else
//    {
//        return 0;
//    }
//}
//
//
//int main()
//{
//    char arr[] = {"Hello World"};
//    int x = get_strlen(arr);
//    printf("%d\n",x);
//
//    return 0;
//}

////对数组进行冒泡排序，由小排到大
//
//void sort(int arr[], int sz)
//{
//    int tmp = 0;
//    //排序次数为数组中元素个数-1，最后一个元素自动补位
//    for(int j=0; j<sz-1; j++)
//    {
//        //末尾最大元素无需重复排序
//        for(int i=0; i<sz-j-1 ;i++)
//        {
//            if(arr[i] > arr[i+1])
//            {
//            tmp = arr[i];
//            arr[i] = arr[i+1];
//            arr[i+1] = tmp;
//            }
//        }
//    }
//}
//
//
//
//int main()
//{
//    int arr[] = {1, 25, 42, 55, 68, 52, 71, 26, 85, 91, 58, 24, 56, 20, 30};
//    int sz = sizeof(arr) / sizeof(arr[0]);
//    printf("%d\n",sz);
//    sort(arr, sz);
//    for(int i=0; i<sz;i++)
//    {
//        printf("%d\n",arr[i]);
//    }
//    return 0;
//}
//
/*
int main()
{
//错误代码：
    float x,a,b,c,d,rslt;
    scanf("%f %f %f %f %f",&x,&a,&b,&c,&d);
    rslt=(a*x*x*x)+(b*x*x)+(c*x)+d;
    printf("%.7lf");
    return 0;
}

*/
//int main() {
//	double x, a, b, c, d;
//	scanf("%lf %lf %lf %lf %lf", &x, &a, &b, &c, &d);
//	printf("%.7lf", a * x * x * x + b * x * x + c * x + d);
//    return 0;
//}

//int main()
//{
//    double x, a, b, c, d;
//    double r;
//    scanf("%f %f %f %f %f",&x,&a,&b,&c,&d);
//    r=a*x*x*x+b*x*x+c*x+d;
//    printf("%.7lf\n",r);
//    return 0;
//}
//
//int main()
//{
//    double a=1.1;
//    float b=2.2;
//    printf("%lf\n",a/1.0);
//    printf("%lf\n",b/1.0);
//    printf("%f\n",a/1.0);
//    printf("%f\n",b/1.0);
//    return 0;
//}

//#include <stdio.h>
//int main()
//{
//    double f, c;
//    scanf("%lf",&f);
//    c=5*(f-32)/9.0*1.0;
//    printf("%.5f\n",c);
//    return 0;
//}

//if语句不能使用break中断

//数组中数组名在部分情况中代表数组首元素地址，有两种情况代表整个数组地址
    //1、在sizeof(arr)中数组名代表整个数组地址，sizeof计算的是整个数组的空间大小(单位是字节)
    //2、在 &arr（取地址操作符）代表取整个数组地址

//int main()
//{
//    int arr[] = {1,2,3,4,5};
//    int sz = sizeof(arr) / sizeof(arr[0]);
//    printf("%p\n",arr);
//    printf("%p\n",&arr[0]);
//    printf("%p\n",&arr);
//    printf("%d\n",sz);
//
//    return 0;
//}

//取模操作符 % 应用于整数


////>> 右移操作符
//    //1.算术右移        右边去除，左边补原符号位
//    //2.逻辑右移        右边去除，左边补0
//int main()
//{
////    int a = 11;
////    //二进制 a= 00000000 00001011;     左边符号位正数为0，负数为1
////    //右移二进制位
////    int b = a >> 1;
////    printf("%d\n", b);
////    //b=5
////    //b= 00000000 00000101;
////移位操作符移动补码（内存中放入的是补码）
////整数的二进制表示有：原码、补码、反码
////在内存中，正整数的三码相同
////-11的原码：10000000 00001011
////     反码：11111111 11110100     符号位不变，其它位取反
////     补码：11111111 11110101     反码加一
//    int x=-11;  //x=10000000 00001011 原码
//                //x=11111111 11110100 反码
//                //x=11111111 11110101 补码
//                //补码移位 11111111 11111010
//              //移位后反码 11111111 11111001
//              //移位后原码 10000000 00000110 =-6
//    int y = x >> 1;
//    printf("%d\n",y);
// /*
//    错误思路：
//    //y=10000000 00000101;
//    //y=-6
//    */
//    return 0;
//}

////左移，左边丢弃，右边补0；
////& 按位与，补码进行按位与
////| 按位或，补码进行按位或
////^ 按位异或， 补码进行按位异或
////~ 按位取反
//int main()
//{
//    int a=3, b=5;
//    int c=0;
//
//    //按位与
//    c= a & b;
//    printf("%d\n",c);
//    //c=1;
//    //a=00000000 00000011
//    //b=00000000 00000101
//    //c=00000000 00000001
//
//    //按位或
//    c= a | b;
//    printf("%d\n",c);
//    //c=7
//    //a=00000000 00000011
//    //b=00000000 00000101
//    //c=00000000 00000111
//
//    //按位异或 相同位0，相异位1
//    c= a ^ b;
//    printf("%d\n",c);
//    //c=6;
//    //a=00000000 00000011
//    //b=00000000 00000101
//    //c=00000000 00000110
//
//    return 0;
//
//}

////不使用中间变量将两个变量交换数值
//int main()
//{
//    int a=3, b=5;
//
//    //加减发
//    a= a+b; //a=8
//    b= a-b; //b=3
//    a= a-b; //a=5
//    printf("%d %d\n",a,b);
//
//    //异或法
//    a= a^b;
//    b= a^b;
//    a= a^b;
//    printf("%d %d\n",a,b);
//    return 0;
//}

//int main()
//{
//    int arr[10] = {0};
//    printf("%p\n",&arr);
//    printf("%p\n",&arr+1);  //跳过整个数组
//    return 0;
//}

//结构体
struct stu
{
    char name[10];
    int age;
    char gender[4];
};

typedef struct stu
{
    char name[10];
    int age;
    char gender[4];
}Stu;

int main()
{
    struct stu s;
    return 0;
}























