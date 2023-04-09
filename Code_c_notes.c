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

////结构体
//struct stu
//{
//    char name[10];
//    int age;
//    char gender[4];
//};
//相当于创建一个 int
//
//typedef struct stu
//{
//    char name[10];
//    int age;
//    char gender[4];
//}Stu;
//声明结构体时省略结构体标签得到匿名结构体
//struct
//{
//    char name[4];
//    int age;
//}s1;
//匿名结构体只能使用一次
//int main()
//{
//    char a = -1;
//    signed char b = -1;
//    unsigned char c = -1;
//    printf("%d\n",a);
//    printf("%d\n",b);
//    printf("%d\n",c);
//    return 0;
//}

////指针数组 是数组
//int* arr1[];
//char* arr2[];
//
////数组指针 是指针
//int (*p)[];
//char (*p)[];

////再一次讨论数组名
//int  main()
//{
//    int arr[10] = {0};
//    printf("%p\n",arr);         //000000000061FDF0
//    printf("%p\n",&arr[0]);     //000000000061FDF0
//    printf("%p\n",&arr);        //000000000061FDF0
//    //数组名通常表示的都是数组首元素地址，但是有两个例外
//    //1、sizeof(数组名) 计算的是整个数组的大小
//    //2、&数组名 取地址取的是整个数组的地址
//    printf("%p\n",arr+1);       //000000000061FDF4 相比于000000000061FDF0跳跃一个元素地址
//    printf("%p\n",&arr+1);      //000000000061FE18 相比于000000000061FDF0跳跃了整个数组的地址
//    int len = sizeof(arr);
//    printf("%d\n",len);         //计算的是整个数组的长度，单位是字节
//    return 0;
//}
//
//void* my_memcpy(void* dest, const void* src, int num)
//{
//    void* ret=dest;
//    for(int i=0; i<num; i++)
//    {
//        *(char*)dest=*(char*)src;
//        dest=(char*)dest +1;
//        src=(char*)src +1;
//    }
//    return ret;
//}
//
//void* my_memmove(void* dest, const void* src, int num)
//{
//
//}
//
//int main()
//{
//    char dest[]="suijiceshi";
//    char src[]="hello";
//    my_memcpy(dest, src, 5);
//    int l=sizeof(dest);
//    printf("%s",dest);
//    printf("\n");
//    return 0;
//}
//结构体自引用
//struct Node
//{
//    int data;
//    struct Node next;
//};
//直接包含下一个节点无法计算内存大小，无限嵌套
//struct Node
//{
//    int data;         //数据域
//    struct Node* next;//指针域
//};
//包含下一个节点地址
//结构体内存对齐
//规则：1、第一个成员在与结构体偏移量为0的地址处；
//      2、其他成员变量要对齐到某个数字（对齐数）的整数倍地址处；
//      对齐数：编译器默认的一个对齐数与该成员大小的较小值（编译器默认的对齐数与成员内存大小比较，得到较小值）
//      3、结构体总大小为最大对齐数（每一个成员都有一个对齐数）的整数倍；
//      4、如果嵌套了结构体的情况，嵌套的结构体对齐到自己的最大对齐数的整数倍处，
//      结构体整体的大小就是所有最大对齐数（含嵌套结构体的对齐数）的整数倍；
//对齐原因：1、平台可移植性；    2、通过空间换取性能
//修改默认对齐数（对于vs）
//#pragma pack(4)//将默认对齐数修改为4；
//struct s
//{
//    int i;
//    char ch;
//}s1;
//
//结构体传参
struct s
{
    int data[100];
    int num;
};

void print1(struct s sn)
{
    for(int i=0; i<3; i++)
    {
        printf("%d ",sn.data[i]);
    }
    printf("\n");
    printf("%d\n",sn.num);
}

void print2(struct s* s)
{
    for(int i=0; i<3; i++)
    {
        printf("%d ",s->data[i]);
    }
    printf("\n");
    printf("%d\n",s->num);
}

int main()
{
    struct s s1={{1,2,3}, 4};
    print1(s1);     //传值调用
    print2(&s1);    //传址调用
    return 0;
}

//结构体位段  可用来节省空间
//位段声明与结构体类似不同点：
//          1：位段成员必须是int、unsigned int、signed int
//          2：位段成员后边有一个冒号和数字
struct A
{
    int _a:2;
    int _b:3;
    int _c:4;
};
//位段的内存分配
//1、位段的成员可以是int、unsigned int、signed int或者是char(属于整形家族)类型
//2、位段的空间上是按照需要以四个字节(int)或者一个字节(char)的方式来避开
//3、位段涉及很多不确定因素，位段是不跨平台的，注重可移植的程序应该避免使用位段
//位段的跨平台问题
//1、int位段被当成有符号数还是无符号数是不确定的
//2、位段中最大位的数目不能确定(16位机器最大16，32位机器最大32，如果大于16时在16位机器中会出问题)
//3、位段中的成员在内存中从左向右分配，还是从右向左分配标准尚未定义
//4、当一个结构包含两个位段，第二个位段成员比较大，无法容纳于第一个位段剩余的位时，
//   是舍弃剩余的位还是利用剩余的位这是不确定的
























