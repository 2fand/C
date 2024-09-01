#define _CRT_SECURE_NO_WARNINGS 1// <------ 所有程序的宏
//#define A(a,b) printf("%d",(a)+(b)); <------ “初用宏”中的宏
//#define A(x,y) (x,y) <------ “有表达式的宏”中的宏
//#define aaa(a) (a,a,a); <------ “能重复3次表达式的宏‘aaa(a)’”中的宏
//#define q ; <------ “宏的替换”1中的宏
//#define p ); <------ “宏的替换”2中的宏
//#define q ; <------ “宏的替换”2中的宏
//#define ROW 6 <------ “赛博解压板”中的宏(可以自己改)
//#define COL 6 <------ “赛博解压板”中的宏(可以自己改)
//#define HIGH 66 <------ “牢大坠机”中的宏(可以自己改)
//#define HIGH 10 <------ “反重力”中的宏(可以自己改)
//#define HIGH 50 <------ “上升与下降”中的宏(可以自己改)
//#define WIDTH 100 <------ “右”中的宏(可以自己改)
//#define WIDTH 10 <------ “左”中的宏(可以自己改)
//#define HIGH 10 <------ “旋转”中的宏(可以自己改)
//#define WIDTH HIGH <------ “旋转”中的宏(可以自己改)
//#define TURNRIGHT 1 <------ “旋转”中的宏(可以自己改)(0代表逆时针，非0代表逆时针)
//#define WIDTH HIGH <------ “旋转”中的宏(可以自己改)
//#define WIDTH HIGH <------ “旋转”中的宏(可以自己改)
//#define WIDTH HIGH <------ “旋转”中的宏(可以自己改)
//#define WIDTH HIGH <------ “旋转”中的宏(可以自己改)
//#define HIGH 10 <------ “我的第一个2D游戏”中的宏(可以自己改)
//#define WIDTH 10 <------ “我的第一个2D游戏”中的宏(可以自己改)
//#define PLAYER 0][0 <------ “我的第一个2D游戏”中的宏(可以自己改)(这里的宏相当于一个数对)
//#define GOAL 9][9 <------ “我的第一个2D游戏”中的宏(可以自己改)(这里的宏相当于一个数对)
//#define WAIT 50 <------ “走马灯文字”中的宏(可以自己改)
//#define T 10000 <------ “走马灯文字”中的宏(可以自己改)
//#define RIGHT 1 <------ “走马灯文字”中的宏(可以自己改)(0往左，非0往右)
//#define PRINT(A) printf(#A"\n") <------ “#”中的宏
//#define CAT(A, B) A##B <------ “##”中的宏
//#define E 0 <------ “##”中的宏
//#define OF 67 <------ “##”中的宏
//#define DE(A) 1.2 <------ “##”中的宏
//#define D 666 <------ “##”中的宏
//#define E(A) 678 <------ “##”中的宏
#include <stdio.h>//““ ’”里的东西是重点
#include <string.h>//“/-”“-/” <-- 程序里本来就有的注释
#include <stdlib.h>
#include <Windows.h>
#include <random>
#include <time.h>
#include <assert.h>
#include <errno.h>
#include <ctype.h>
#include <stddef.h>
/*
int main()
{
    printf("整型的比特数↓↓长整型的比特数↓↓64位长整型数据类型的比特数↓↓\n");
    printf("            %d              %ld                          %lld",sizeof(int)*8,sizeof(long)*8,sizeof(long long)*8);
    return 0；
}
*/
/*
int main()
{
    int a=0;
    int b=0;
    int c=0;
    int d=0;
    scanf("%d %d",&a,&b);
    scanf("%d %d",&c,&d);
    printf("%d\n%d",a+b,c-d);
    return 0;
}
*///一加一减^
/*
int main()
{
    char a="a";
    printf("你最喜欢哪一个字符?\n");
    scanf("%c",&a);
    printf("\n好的,我已经知道你喜欢的字符是“%c”了",a);
    return 0;
}
*///char类型的输入和输出^
/*
int main()
{
    long long a=0;
    long long b=0;
    scanf("%lld %lld",&a,&b);
    printf("\n%lld,%lld",a,b);//<--!!!
    b=b+a;
    a=b-a;
    b=b-a;
    printf("\n%lld,%lld",a,b);//<--!!!
    return 0;
}    
*///能交换两个整数的程序^
/*
int main()
{
    int i=0;
    //“十次‘i++’循环”v
    i++;
    printf("%d\n",i);
    i++;
    printf("%d\n",i);
    i++;
    printf("%d\n",i);
    i++;
    printf("%d\n",i);
    i++;
    printf("%d\n",i);
    i++;
    printf("%d\n",i);
    i++;
    printf("%d\n",i);
    i++;
    printf("%d\n",i);
    i++;
    printf("%d\n",i);
    i++;
    printf("%d\n",i);
    //“十次‘i++’循环”^
    return 0;
}
*///初识能为一个变量加1的两个符号——“++”^
/*
int main()
{
    printf("  ■                        \n");
    printf("  ■■■■■■■■■■■■    ■■■■■■■■■■\n");
    printf(" ■                ■        ■\n");
    printf("■                 ■        ■\n");
    printf("  ■■■■■■■■■       ■        ■\n");
    printf("  ■       ■       ■        ■\n");
    printf("  ■  ■    ■       ■        ■\n");
    printf("  ■   ■   ■       ■■■■■■■■■■\n");
    printf("■■■■■■■■■■■■■■■   ■        ■\n");
    printf("  ■       ■       ■        ■\n");
    printf("  ■   ■   ■       ■        ■\n");
    printf("  ■    ■  ■       ■        ■\n");
    printf(" ■■■■■■■■■■■■     ■        ■\n");
    printf("          ■       ■■■■■■■■■■\n");
    printf("       ■■■        ■        ■\n");
    return 0;
}
*///字符画^
/*
int main()
{
    float ming=156.4;
    float zhang=129.4;
    printf("小明高%f,大张高%f",ming,zhang);
    return 0;
}    
*///初次运用浮点数^
/*int main()
{
    int i=0;
    int x=0;
    for (i=0;i<1000;i++)
    {
        x++;
        printf("%d\n",x);
    }
    return 0;
}
*///初次运用for循环^
/*
int main()
{
    int x=0;
    printf("请输入“4723”这个数字\n");
    scanf("%d",&x);
    if (x==4723)
    {
        printf("OK!");
    }
    else
    {
        printf("NOT OK");
    }
    return 0;
}
*///初次运用if^
/*
int main()
{
    int i=1;
    while (i<11)
    {
        printf("hi! %d\n",i);
        i++;
    }
    return 0;
}
*///初次运用while循环^
/*
int main()
{
    int i=0;
    while (1)
    {
        printf("%d\n",i);
        i++;
    }
    return 0;
}
*///初次运用while (1)无限循环^
/*
int main()
{
    int i=1;
    int a=0;
    printf("(int=OK,<1->=1)\n\n");
    while (1)
    {
        scanf("%d",&a);
        i=i+a;
        printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n%d\n",i);
    }
    return 0;
} 
*///自己来决定加几的程序^
/*
int main()
{
    int x=0;
    int i=0;
    for (i=0;i<101;i++)
    {
        printf("%d²=%lld\n",x,x*x);
        x++;
    }
    return 0;
}
*///100以内的平方表^
/*
int main()
{
    int i=0;
    for (i=0;i>-101;i--)
    {
        printf("%d\n",i);
    }
    return 0;
}
*///初识C语言中的自减符号“--”^
/*
int main()
{
    int a=1;
    float b=1.23;
    char c="1";
    for (a=1;a<10;a++)
    {
        printf("h\n");
    }
    return 0;
}
*///初用断点调试^
/*
int main()
{
    char i=0;
    scanf("%c",&i);
    printf("\n%c%c%c %c %c  %c  %c%c%c\n%c   %c %c %c %c %c %c\n%c   %c%c%c %c%c%c %c%c%c\n%c   %c %c %c %c %c%c \n%c%c%c %c %c %c %c %c %c",i,i,i,i,i,i,i,i,i,i,i,i,i,i,i,i,i,i,i,i,i,i,i,i,i,i,i,i,i,i,i,i,i,i,i,i,i,i,i,i,i,i);
    return 0;
}
*///另一种字符画^
/*
int main()
{
    char i=0;
    printf("请输入一个字符\n");
    scanf("%c",&i);
    printf("%c的ASCII值是%d",i,i);
    return 0;
}
*///关于ASCII码的程序^
/*void main() {printf("Hello,world!");}<--用两行代码来打印出“Hello,world”的程序
-------
#include <stdint.h>
void main() {printf("Hello,world!");}
-------
*/
/*
int main() {
    char i=0;
    printf("ASCII码对照表v\n");
    for (i=0;i!=-128;i++) {printf("%d:%c\n",i,i);}
    return 0;
}
*///关于ASCII码的程序2^
/*
int main() {
    int a=011163;
    int b=0x1273;
    int c=0b0001001001110011;
    int d=4723;
    printf("%d\n%d\n%d\n%d",a,b,c,d);
    return 0;
}
*///二进制，八进制，十进制，十六进制^
/*
int main() {
    float a=1.0;
    int b,c=0;
    scanf("%f",&a);
    int b=a*1000;
    int c=a*10000;
    if (c-b*10>4) {b++;}
    printf("\n%f",b/1000);
    return 0;
}
*///一个能把至少二位的小数转化成一个一位小数的程序^
/*
int main()
{
    0b010101;
    23;
    0654;
    0xACD;
    9.6;
    "1
    "jdfckjsn";
    return 0;
}
*///字面常量^
/*
int main()
{
	const int i = 1;
	printf("%d", i);
	return 0;
}
*///用const修饰的常变量^
/*
int a = 1;
int main()
{
	scanf("%d", &a);
	printf("%d", a << 1);
	return 0;
}
*///初识位移符号“<<”(“>>”也是位移符号，目前还没写过)^
/*
int main()
{
    printf("c\a\a\a\a\a\a\a\a\a\a\a\a\a\a\a\a\a\a\a\a\a\a\a\a\a");
    return 0;
}
*///初识“\a”转义符（但我只能听出一下声响来）^
/*
int main()
{
    int i=0;
    printf("请输入0\n");
    scanf("%d",&i);
    /-
    if (i==0)
        printf("你输入的数为0");
    else
        printf("你输入的数不为0");    
    -///一种写法^
    //-------------------------------------
    if (i==0) printf("你输入的数为0");
    else printf("你输入的数不为0");
    return 0;
    //另一种写法^
}
*///花式if^
/*
int main()
{
    printf("%s","\105");
    return 0;
}
*///初识“\ddd”(“d”是八进制中的一位数字)^
/*
int main()
{
    printf("%s","\x66");
    return 0;
}
*///初识“\xdd”(“d”是十六进制中的一位数字)^
/*
int main()
{
	int i = 0;
	printf("\a\\\t\\\"\"\'\v\v\v\v\v\t\a\a\a\n\v\n\v\\\\\\\\");
	return 0;
}
*///一堆转义符^
/*
int main()
{
    int i=0;
    scanf("%d",&i);
    if (i==1) printf("你刚才输入的数是一");
    else printf("你刚才输入的数不是一");
    return 0;
}
*///没大括号的if函数^
/*
int main()
{
    char i[]={'a','a','\0'};
    printf("%d\n",strlen(i));
    return 0;
}
*///初识“strlen()”函数和“\0”转义符^
/*
int main()
{
	system("color 42");
	printf("color 42");
	return 0;
}
*///初识“system()”函数^
/*
int main()
{
    long long i=0;
    char j[]="\0";
    scanf("%lld.%s",&i,&j);
    printf("%lld",strlen(j));
    return 0;
}
*///一个能输出你输入的小数的位数的程序^
/*
int main()
{
    int a,b=0;
    scanf("%d %d",&a,&b);
    if (a==1 && b==1) {printf("你刚才输入的两个数都是1");}
    else {printf("你刚才输入的两个数至少有一个不是1");}
    return 0;
}
*///初识“&&”与运算^
/*
int main()
{
    int a,b=0;
    scanf("%d %d",&a,&b);
    printf("%d",a||b);
    return 0;
}
*///初识“||”或运算^
/*
int main()
{
    int a=0;
    scanf("%d",&a);
    printf("%d",!a);
    return 0;
}
*///初识“!”非运算^
/*
int main()
{
    int i=0;
    int b[10]={1,2,24352,342,43,434,42323,8,9,0};
    printf("{");
    for (i=0;i<10;i++) {
        if (i==9) {printf("%d}",b[9]);}
        else {printf("%d,",b[i]);}
    }
    return 0;
}
*///打印一个只有十个整数的数组^
/*
int sum2(int a)
{
    a-=2;
    return a;
}
int main()
{
    int i=0;
    printf("%d",sum2(i));
    return 0;
}
*///初识函数^
/*
int a,b=0;
int Add10(int i) {
    i+=10;
    return i;
}
int Sum5Add10(int i,int ii) {
    i-=5;
    ii=Add10(ii);
    return i+ii;
}
int main() {
    a=Add10(a);
    b=Sum5Add10(a,b);
    printf("%d,%d",a,b);
    return 0;
}
*///多重函数嵌套^
/*
int main() {
    int a,b=0;
    printf("被除数是");
    scanf("%d",&a);
    printf("\n除数是");
    scanf("%d",&b);
    if (!b) {printf("\n\a由于除数为0,所以无法给出被除数除以除数的商和余数\n");}
    else {printf("\n若被除数为%d,除数为%d,则商为%d,余数为%d\n",a,b,a/b,a%b);}
    return 0;
}
*///初识取模运算符“%”和取整的运算方法^
/*
int main() {
    int a,i=0;
    a=i++ + ++i;
    printf("%d",a);
    return 0;
}
*///初识“i++ + ++i”^
/*
int main() {
    int a[9]={0};
    scanf("{%d,%d,%d,%d,%d,%d,%d,%d,%d}",&a[0],&a[1],&a[2],&a[3],&a[4],&a[5],&a[6],&a[7],&a[8]);
    printf("%d %d %d\n%d %d %d\n%d %d %d\n",a[0],a[1],a[2],a[3],a[4],a[5],a[6],a[7],a[8]);
    return 0;
}
*///用数组输入一个数字方阵（如果输入不正确，就输出全是“0”的数字方阵）^
/*
#include <stdio.h>
int main() {
    int i=0;
    int a[10]={1};
    for (i=0;i<10;i+=2) {
        a[i+2]=a[i];
    }
    printf("{%d,%d,%d,%d,%d,%d,%d,%d,%d,%d}",a[0],a[1],a[2],a[3],a[4],a[5],a[6],a[7],a[8],a[9]);
    return 0;
}
*///“10”数组输入^
/*
int main() {
    while (1) {
        printf(".");
    }
    return 0;
}
*///输出无限的点群^
/*
int main() {
    int i=0;
    for (i=0;1;printf("o")) {
        printf("0");
    }
    return 0;
}
*///输出无限的“0o”群^
/*
enum Num {
    A=1000
};
int main() {
    enum Num i=A;
    Sleep(i);
    printf("%d",i);
    return 0;
}
*///初识等待函数“Sleep()”并第一次用枚举常量的程序^
/*
int main() {
    char i[]="\0";
    printf("****************\n*输入1即可输出1*\n****************\n\n");
    while (i[0]!=49 || strlen(i)!=1) {scanf("%s",&i);}
    printf("\n***\n*1*\n***");
    return 0;
}
*///初用等待输入1就执行的代码^
/*
enum A {O=1};
int main() {
    typedef unsigned int q;
    q i=0;
    scanf("%d",&i);
    enum A a=O;
    printf("%d",a!=i ? 0 : 1);
    return 0;
}
*///“只要输入1就输出1”^
/* 
enum A {
    a,
    b,
    c
};
int main() {
    int i=0;
    enum A x=a;
    x=(i++,++i,i++,i=i*2);
    printf("i=%d,x=%d",i,x);
    return 0;
}
*///初识逗号表达式^
/*
int main()
{
    int i,ii=1;
    for (i=1;i<6;i++) {
        for (ii=0;ii<i;ii++) {
            printf("*");
            if (i-1==ii) {printf("\n");}
        }
    }
    return 0;
}
*///“没装修过的滑梯”^
/*
int main()
{
    int i,ii=1;
    for (i=1;i<6;i++) {
        for (ii=0;ii<i;ii++) {
            if (i-1==ii) {printf("\\\n");}
            else {printf("*");}
        }
    }
    return 0;
}
*///“装修过的滑梯”^
/*
int main() {
    printf("\x68\x65\x6C\x6C\x6F\x2C\x77\x6F\x72\x6C\x64\x21");
    return 0;    
}
*///新型打印“hello,world!”的方式^
/*
int main() {
    int i=0;
    for (i=0;i<5;i++) {
        if (i==0 || i==4) {printf("*****\n");}
        else {printf("*   *\n");}
    }
    return 0;    
}
*///能打印出用“*”组成的5*5的“□”的程序^
/*
int main() {
    long long i[2]={0};
    int ii=0;
    for (ii=0;ii<2;ii++) {scanf("%lld",&i[ii]);}
    printf("%lld%lld",i[0],i[1]);
    return 0;    
}
*///输出两个输入的数合起来的数(如果某个输入不是数，就把这个输入设为0)^
/*
int main() {
    A(1,2);
    return 0;    
}
*///初用宏^
/*
int main() {
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    ; 
    ;
    return 0;    
}
*///“纯分号”^
/*
int main() {
    int i=0;
    A(i++,i++);
    printf("%d",i);
    return 0;    
}
*///有表达式的宏^
/*
int main() {
    char a=getchar();
    printf("%c",a);
    return 0;    
}
*///初识“getchar()”函数^
/*
int main() {
    int a=0;
    printf("请输入你的年龄 --> ");
    scanf("%d",&a);
    printf("%s",a>=18 ? "你是成年人" : a==1 || a==0 ? "你是婴儿" : a<0 ? "你还没出生" : "你是未成年人");
    return 0;    
}
*///能让你检测出是成年人、未成年人、婴儿、“还没有出生”这四个中的其中一个的程序^
/*
int main() {
    int a,i,ii=0;
    scanf("%d",&a);
    printf("\n");
    for (i=0;i<a;i++) {for (ii=00;ii<a;ii++) {
        if (ii==a-1) {printf("■\n");}
        else {printf("■");}
    }}
    return 0;    
}
*///打印一个边长为你输入的值的正方形(如果某个输入不是数，这个程序就不打印)^
/*
int main() {
    auto int a=1;
    register int b=2;
    printf("%d,%d",a,b);
    return 0;    
}
*///初识并初用“auto”和“register”这两个C语言中的关键字^
/*
int main() {
    goto a;
    b:
    printf("1\n");
    goto c;
    a:
    printf("2\n");
    goto b;
    c:
    return 0;    
}
*///初识并初用C语言里的“goto”关键字^
/*
int main() {
    do
    {
        printf("do while循环\n");
    } while (0);
    /-
    while (0) {
        printf("while循环\n");
    }
    -/
    return 0;    
}
*///初识并初用了C语言中的“do while”循环，并与“while”循环做了对比^
/*
int main() {
    goto b;
    a:
    printf("goto无限循环\n");
    b:
    goto a;
    return 0;    
}
*///“goto无限循环”^
/*
int main() {
    int a=0;
    printf("%d",sizeof a);
    return 0;    
}
*///另一种“sizeof”的写法^
/*
int main() {
    int a=0;
    a+=2;
    printf("a=%d\n",a);
    a-=2;
    printf("a=%d",a);
    return 0;    
}
*///初识并初用“+=”和“-=”^
/*
int main() {
	int a=123;
	printf("%X", &a);
	return 0;
}
*///输出“&a”的地址的后8位^
/*
int main() {
    printf("你的操作系统是%d位的",sizeof(int*)*8);
    return 0;    
}
*///能检测出你的操作系统是几位的程序^
/*
int main() {
    int a=123;
    printf("&a=%p",&a);
    return 0;    
}
*///输出“&a”的地址(既最正规，又最完整)^
/*
int main() {
    printf("%d",(int)1.1%1);
    return 0;    
}
*///强制类型转换^
/*
int main() {
    int a=123;
    a*=3;
    printf("%d\n",a);
    a/=3;
    printf("%d\n",a);
    a%=3;
    printf("%d\n",a);
    return 0;    
}
*///初识并初用“*=”“/=”和“%=”^
/*
int main() {
    int a=16;
    a>>=3;
    printf("%d\n",a);
    a<<=3;
    printf("%d\n",a);
    return 0;    
}
*///初识并初用“>>=”和“<<=”^
/*
int main() {
    int a=123;
    printf("%d\n",*&a);
    return 0;    
}
*///“间接性引用”^
/*
int main() {
    int* p=p;
    return 0;    
}
*///“二级指针”^
/*
int main() {
    int a,i=0;
    scanf("%d",&a);
    printf("\n");
    for (i=0;i<a;i++) {printf(" @\n");}    
    return 0;
}
*///输出一个长为你输入的数值(如果输入的东西不是一个数，那么输入的数值就是0)的由“@”构成的竖着的直线^
/*
int main() {
    int********************************************************************************************************************************************************************************************************************************************************************************************************************************************************************************************************************************************************************************************************************************************************************************************************************************************************************************************************************* p=&p;   
    return 0;
}
*///“许多级指针”^
/*
int main() {
    long long a[10]={0};
    long long i,min=0;
    for (i=0;i<10;i++) {scanf("%lld",&a[i]);}
    min=a[0];
    for (i=0;i<10;i++) {if (a[i]<min) {min=a[i];}}
    printf("min=%lld",min);
    return 0;
}
*///“求十个数中的最小值”(如果其中有不是数的东西,那么就把这个东西设为0,并立即输出最小值)^
/*
struct A{int d;};
int main() {
    struct A s={123};
    printf("%d",s.d);
}
*///初识并初用结构体^
/*
struct A{int i;};
int main() {
    struct A s={123222};
    struct A * p=&s;
    printf("%d",(*p).i);
}
*///“结构体里的成员变量的间接引用”^
/*
struct A{int i;};
int main() {
    struct A s={123222};
    struct A * p=&s;
    printf("%d",p->i);
}
*///初识并初用“->”^
/*
struct A{
    char name[20];
    int id;
};
int main() {
    struct A s={"this is a name",1234567};
    struct A * p=&s;
    printf("name=%s,id=%d",p->name,p->id);
}
*///初运用结构体里的多个成员变量^
/*
int main() {
    printf("%d",~2);
    return 0;
}
*///“按位非运算符‘~’”^
/*
int main() {
    printf("%d",3|13);
    return 0;
}
*///“按位或运算符‘|’”^
/*
int main() {
    printf("%d",3&13);
    return 0;
}
*///“按位与运算符‘&’”^
/*
int main() {
    printf("%d",3^13);
    return 0;
}
*///“按位异或运算符‘^’”^
/*
int main() {
    int i=3;
    i&=13;
    printf("%d",i);
    return 0;
}
*///初识并初用“&=”^
/*
int main() {
    int i=3;
    i|=13;
    printf("%d",i);
    return 0;
}
*///初识并初用“|=”^
/*
int main() {
    while (1) {
        break;
        printf("C语言关键字break");
    }
    return 0;
}
*///初识并初用C语言关键字“break”^
/*
int main() {
    int i = 0;
    for (i = 0; i < 10; i++) { 
        if (i == 0) { continue; }
        printf("C语言关键字continue   效果-> *%d*\n",i);
    }
    return 0;
}
*///初识并初用C语言关键字“continue”^
/*
int main() {
    int i=0;
    for (i=0;i<10;i++) {printf("%d ",i);}
    printf("\n\n");
    for (i=9;i>-1;i--) {printf("%d ",i);}
    return 0;
}
*///“for循环的顺序和逆序”^
/*
int a=12345;
int main() {
    int a=321;
    printf("a=%d",a);
}
*///“局部变量优先”^
/*
int main() {
    {printf("无意义的大括号");}
    return 0;
}
*///“无意义的大括号”^
/*
int main() {
    {{{{{{{{{{{{{{{{{{{{{{{{{{{{{{{{{{{{{{{{{{{{{{{{{{{{{{{{{{{{{{{{{{{{{{{{{{{{{{{{{{{{{{{{{{{{{{{{{{{{{{{{{{{{{{{{{printf("更多无意义的大括号");}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}
    return 0;
}
*///“更多无意义的大括号”^
/*
int main() {
    int i,ia=1;
    for (ia=1;ia<6;ia++) {for (i=ia;i<ia+5;i++) {printf("%d%s",i,ia+4==i ? "\n\n" : "  ");}}
    return 0;
}
*///打印25个特殊的数字(每一个数字都与它右上方或左下方的数字相等(除了没打印出来的部分))^
/*
int main() {
    int a=0;
    scanf("%d",&a);
    switch (a) {
        case 0:
        printf("你刚才输入的数是“0”");
        break;
        case 1:
        printf("你刚才输入的数是“1”");
        break;
        case 2:
        printf("你刚才输入的数是“2”");
    }
}
*///初识并初用C语言关键字“switch”^
/*
int main() {
    int a=0;
    scanf("%d",&a);
    if (2==a) {printf("你刚才输入的数是“2”");}
    else {printf("你刚才输入的数不是“2”");}
}
*///“别样的条件”1^
/*
int main() {
    int a=0;
    scanf("%d",&a);
    if (2!=a) {printf("你刚才输入的数不是“2”");}
    else {printf("你刚才输入的数是“2”");}
}
*///“别样的条件”2^
/*
int main() {
    int a=0;
    scanf("%d",&a);
    if (a) {printf("你刚才输入的数不是“0”");}
    else {printf("你刚才输入的数是“0”");}
}
*///“别样的条件”3^
/*
int main() {
    int a=0;
    scanf("%d",&a);
    if (!a) {printf("你刚才输入的数是“0”");}
    else {printf("你刚才输入的数不是“0”");}
}
*///“别样的条件”4^
/*
int main() {
    int a=0;
    scanf("%d",&a);
    switch (a) {
        case 1:
        case 2:
        printf("你刚才输入的数在1~2之间");
        break;
        case 3:
        case 4:
        printf("你刚才输入的数在3~4之间");
        break;
        default:
        printf("你刚才输入的的数不在1~4之间");
        break;
    }
}
*///“case”的几~几检测^
/*
int main() {
    int ii,ia=9;
    for (ia=9;ia>4;ia--) {for (ii=ia;ii>ia-5;ii--) {printf("%d%s",ii,ia-4==ii ? "\n\n" : "  ");}}
    return 0;
}
*///“也特殊的表格”(逆向版)^
/*
int main() {
    int arr[20] = { 0,1 };
    int ii = 2;
    for (ii = 2; ii < 20; ii++) { arr[ii] = arr[ii - 1] + arr[ii - 2]; }
    printf("有20个数字的斐波那契数列:");
    for (ii = 0; ii < 20; ii++) { printf("%d%c", arr[ii],ii==19 ? '\n' : ','); }
    return 0;
}
*///打印有20个数字的斐波那契数列^
/*
int main() {
    int ia = 0;
    aaa(ia++)
    printf("%d\n\n",ia);
    aaa(ia = 2)
    aaa(ia *= ia)
    printf("%d\n", ia);
    return 0;
}
*///“有能重复3次表达式的宏‘aaa(a)’”^
/*
int main() {
    printf("Hello,world!\n")q
    printf("3.141592653589\n")q
    return 0;
}
*///“宏的替换”1^
/*
int main() {
    printf("Hello,world!\n"p
    printf("3.141592653589\n"p
    q
    q
    q
    q
    q
    q
    q
    return 0;
}
*///“宏的替换”2^
/*
int main() {
    printf("%d", _CRT_SECURE_NO_WARNINGS + _CRT_SECURE_NO_WARNINGS);
    return 0;
}
*///“_CRT_SECURE_NO_WARNINGS”^
/*
int main() {
    int i = 0;
    int ia = 1;
    for (ia = 1; ia < 41; ia++) {
        i += ia;
        printf("%d%c", i, !(ia % 5) ? '\n' : ' ');
    }
    return 0;
}
*///“规范的三角数”^
/*
int main() {
	int i = 1;
	int ia = 0;
	int ib = 0;
	int ic = 0;
	printf("欢迎来玩猜输赢游戏，输入零即可开始，非零即可退出(需要两个人来玩这游戏)\n");
	scanf("%d",&i);
	if (!i) {
		printf("请P1输入“赢”的位置(不要被P2看到)(非零在第一位，零在第二位)\n");
		scanf("%d",&ia);
		system("cls");
		printf("? ?\n\n请P2输入你猜测的“赢”的位置(如果猜测正确，则P2赢，否则P1赢)\n");
		scanf("%d", &ib);
		system("cls");
		printf("P2已猜测完成，请P1和P2来等待结果出现\n\n");
		for (ic = 10; ic > -1; ic--) {
			switch (ic) {
				case 1:
				system("color 0C");
				break;
				case 2:
				system("color 06");
				break;
				case 3:
				system("color 0A");
				break;
				default:
				system("color 0F");
				break;
			}
			printf("%d\n", ic);
			Sleep(1000);
		}
		system("cls");
		if ((ia || ib) && (!(ia && ib))) { system("color 40"); }
		else { system("color A0"); }
		printf("结果已揭晓!请见右面!(P2刚才输入的是%d) > %s\n",ib,ia ? "输 赢" : "赢 输\n");
		Sleep(1000);
		printf("现在，赢家是P%d!", (ia || ib) && (!(ia && ib)) ? 1 : 2);
		Sleep(2500);
	}
	system("cls");
	system("color 0F");
	return 0;
}
*///“猜输赢游戏”^
/*
int main() {
	int i = 0;
	while ((i=getchar()) != EOF) { putchar(i); }
	return 0;
}
*///“复述机”^
/*
int main() {
	int i = 0;
	int ia = 0;
	scanf("%d %d", &i, &ia);
	printf("%s", (i || ia) && (!(i && ia)) ? "True" : "False");
	return 0;
}
*///“异或门”(XOR)^
/*
int main() {
	int i = 0;
	int ia = 0;
	scanf("%d %d", &i, &ia);
	printf("%s", !((i || ia) && (!(i && ia))) ? "True" : "False");
	return 0;
}
*///“同或门”(XNOR)^
/*
int main() {
	while (1) {
		system("color 03");
		Sleep(1000);
		system("color 14");
		Sleep(1000);
		system("color 25");
		Sleep(1000);
		system("color 36");
		Sleep(1000);
		system("color 47");
		Sleep(1000);
		system("color 58");
		Sleep(1000);
		system("color 69");
		Sleep(1000);
		system("color 7A");
		Sleep(1000);
		system("color 8B");
		Sleep(1000);
		system("color 9C");
		Sleep(1000);
		system("color AD");
		Sleep(1000);
		system("color BE");
		Sleep(1000);
		system("color CF");
		Sleep(1000);
		system("color D1");
		Sleep(1000);
		system("color E2");
		Sleep(1000);
		system("color F3");
		Sleep(1000);
	}
	return 0;
}
*///“炫彩显示屏”^
/*
int main() {
	printf("hello,good bye!");
	Sleep(3000);
	system("cls");
	return 0;
}
*///“cls”清屏^
/*
int main() {
	system("help");
	return 0;
}
*///“help”帮助^
/*
int main() {
	int i = 0;
	int ii = 0;
	int ia = 0;
	long long ll = 1;
	scanf("%d^%d", &i, &ii);
	ia = ii;
	if (ii < 0 || i < 0) { printf("不支持负数运算"); }
	else { 
		if (ii) {
			for (ii = ii; ii > 0; ii--) { ll *= i; }
			printf("%d^%d=%lld", i, ia, ll);
		}
	}
	return 0;
}
*///“正整数的几的几次方运算”^
/*
int main() {
	int i = 0;
	int ia = 0;
	int ib = 0;
	scanf("%d",&i);
	for (ia = 0; ia < i; ia++) {
		printf("%d", i);
		for (ib = 0; ib < i; ib++) { 
			if (i - 1 != ia) { printf("*"); }		
		}
	}
	return 0;
}
*///“每个你输入的数的距离=你输入的数的数量个的‘*’”^
/*
int main() {
	char arr[6] = { '0','0', '0', '0', '0', '\0' };
	int i = 0;
	for (i = 0; i < 5; i++) { arr[i] = getchar(); }
	printf("\n%c%c%c%c%c", arr[3], arr[0], arr[4], arr[1], arr[2]);
	return 0;
}
*///“简单五字符加密器”^
/*
int main() {
	long long ll = 0;
	int i = 0;
	int ia = 0;
	printf("请输入你想要进行“3x+1”的数 > ");
	scanf("%lld",&ll);
	printf("请输入你想要进行“3x+1”的数的输入次数 > ");
	scanf("%d", &i);
	for (ia = 0 ; ia < i ; ia++) {
		printf("%lld ",ll);
		if (ll % 2) { ll = 3 * ll + 1; }
		else { ll /= 2; }
	}
	return 0;
}
*///“3x+1”^
/*
int main() {
	int arr[5] = { 0 };
	int i = 0;
	int ia = 0;
	for (i = 0; i < 5; i++) { scanf("%d", &arr[i]); }
	for (i = 1; i < 5; i++) {
		if (arr[0] != arr[i]) {
			ia = 1;
			break;
	} }
	printf("你刚才输入的五个数%s",ia ? "有点不一样" : "都是一个样");
	return 0;
}
*///“测五个数是否一样的程序”^
/*
int main() {
	printf("%cs %cc %c.1f", '%', '%', '%');
	return 0;
}
*///“打印‘%s’‘%c’和‘%.1f’的程序”^
/*
int main() {
	int i = 0;
	scanf("%d", &i);
	if (i < 1) { printf("你刚才输入的数小于1"); }
	else if (i > 1) { printf("你刚才输入的数大于1"); }
	else { printf("你刚才输入的数是1"); }
	return 0;
}
*///初识并初用“else if”^
/*
int main() {
	int i = 0;
	int ia = 0;
	int ib = 0;
	scanf("%d", &i);
	for (ia = 0; ia < i; ia++) { for (ib = 0; ib < i; ib++) {
		printf("%c%c", ia <= ib ? '*' : ' ', i - 1 == ib ? '\n' : '\0');
		
	} }
	return 0;
}
*///“打印高为你输入的数的由‘*’构成的‘◥’”^
/*
int main() {
	int i = 0;
	int ia = 0;
	scanf("%d", &i);
	for (i = i; i > 0; (i-- ,ia++)) {
		printf("%c", (ia % 4) ? '*' : !ia ? '\000' : ' ');
	}
	return 0;
}
*///打印由“*”构成的，长度为你输入的数的虚线^
/*
int main() {
	char arr[20] = { '\000' };
	scanf("%s", arr);
	printf("\narr(\"%s\")与“1234123”%s相同\n", arr, !(strcmp(arr, "1234123")) ? "\000" : "不");
	return 0;
}
*///“初识strcmp函数并初次运用”^
/*
int main() {
	printf("9的开方 = %d",(int)(sqrt(9)));
	return 0;
}
*///初识并初用开方函数——“sqrt函数”^
/*
typedef long long ll;
int main() {
	ll lla = 0;
	ll llb = 0;
	ll lli = 0;
	scanf("%lld %lld",&lla,&llb);
	ll llarr[2] = { lla,llb };
	while (lla % llb) {
		(lli = lla % llb, lla = llb, llb = lli);
	}
	printf("\n%lld和%lld的最大公因数为%lld\n", llarr[0], llarr[1], llb);
	return 0;
}
*///“求你输入的两个数的最大公因数的程序”^
/*
typedef long long ll;
int main() {
	ll lla = 0;
	ll llb = 0;
	ll lli = 0;
	scanf("%lld %lld",&lla,&llb);
	ll llab = lla * llb;
	ll llarr[2] = { lla,llb };
	while (lla % llb) {
		(lli = lla % llb, lla = llb, llb = lli);
	}
	printf("\n%lld和%lld的最小公倍数为%lld\n", llarr[0], llarr[1], llab / llb);
	return 0;
}
*///“求你输入的两个数的最小公倍数的程序”^
/*
int main() {
	int arr[3][3] = { {0,1,2},{3,4,5},{6,7,8} };
	printf("%d",arr[2][0]);
	return 0;
}
*///“二维数组”^
/*
int main() {
	int i = 1;
	srand(time(NULL));
	for (i = 1; i < 101;i++) {
		Sleep(10);
		printf("%d%c", rand(),!(i % 10) ? '\n' : ' ');
	}
	return 0;
}
*///随机数生成器^
/*
int main() {
	int i = 0;
	int ia = 0;
	srand(time(NULL));
	for (ia = 0; ia < rand() % 10000 + 1; ia++) {
		for (i = 0; i < rand() % 10000 + 1; i++) {
			printf("%c", rand() % 95 + 32);
		}
		printf("\n");
	}
	return 0;
}
*///随机文本生成器^
/*
int main() {
	int i = 0;
	int ia = 0;
	srand(time(NULL));
	for (ia = 0; ia < rand() % 10000 + 1; ia++) {
		for (i = 0; i < rand() % 10000 + 1; i++) {
			printf("%c", rand() % 128);
		}
		printf("\n");
	}
	return 0;
}
*///乱码生成器^
/*
int main() {
	int arr[3][3][3] = { {{1,2,3},{4,5,6},{7,8,9}},{{21,121,1444},{54,65,441},{223,13213,332}},{{23,3435,55},{43434,999,854},{-441,18,666}} };
	printf("%d",arr[1][2][1]);
	return 0;
}
*///“三维数组”^
/*
int main() {
	long long ll = 0;
	long long lla = 2;
	printf("请输入一个数 -> ");
	scanf("%lld",&ll);
	for (lla = 2; lla <= sqrt(ll); lla++) {
		if (!(ll % lla)) {
			break;
		}
	}
	printf("\n你刚才输入的数%s是质数\n", lla <= sqrt(ll) || 1 == ll ? "不" : "\000");
	return 0;
}
*///检测你输入的数是否为质数的程序^
/*
int main() {
	system("shutdown -r -c \"※/你的电脑将在一分钟后重启\\※\" ");
	return 0;
}
*///重启程序^
/*
int main() {
	system("shutdown -l");
	return 0;
}
*///立刻注销程序^
/*
int main() {
	system("shutdown -s");
	return 0;
}
*///关机程序^
/*
int main() {
	char arr[] = "hello,world!\n";
	char arr1[20] = { 0 };
	strcpy(arr1, arr);
	printf("%s", arr1);
	return 0;
}
*///“初识并初用strcpy函数”^
/*
int main() {
	char arr[] = "cello,world!\n";
	memset(arr, 'H', 1);
	printf("%s", arr);
	return 0;
}
*///“初识并初用memset函数”^
/*
int main() {
	int arr[10] = { 0 };
	int i = 0;
	for (i = 0; i < 10; i++) {
		scanf("%1d", &arr[i]);
	}
	long long iadd = arr[0];
	for (i = 1; i < 10; i++) {
		iadd += arr[i];
	}
	printf("%lld", iadd);
	return 0;
}
*///求你输入的十位数中的各个数位之和的程序^
/*
int main() {
	char arr[] = "\0";
	scanf("%s", arr);
	int i = strlen(arr);
	int ia = 1;
	for (ia = 0; ia < i; ia++) {
		Sleep(618);
		system("cls");
		arr[ia] = (char)' ';
		printf("%s\n", arr);
	}
	return 0;
}
*///能使你输入的字符串逐渐消失的程序^
/*
int main() {
	printf("%d\n", '0'+'9');
	return 0;
}
*///“字符与字符相加”^
/*
int main() {
	printf("%d\n", 31+')'+';'+26+'5'+':'+9);
	return 0;
}
*///“字符与数字相加”^
/*
int main() {
	int i = 0;
	char arr[] = "th";
	scanf("%d", &i);
	switch (i % 10) {
	case 1:
		strcpy(arr, "st");
		break;
	case 2:
		strcpy(arr, "nd");
		break;
	case 3:
		strcpy(arr, "rd");
		break;
	default:
		break;
	}
	system("cls");
	printf("%d%s\n", i, i>0 ? i>=10 && i<=20 ? "th" : arr : "\0");
	return 0;
}
*///数字序数词转换程序^
/*
int main() {
	system("shutdown -s");
	Sleep(50000);
	system("shutdown -a");
	return 0;
}
*///“看似关机，实则不关机”^
/*
int main() {
	char arr[20] = "Hello,";
	strcat(arr, "world!\n");
	printf("%s", arr);
	return 0;
}
*///“初识并初用strcat函数1^
/*
int main() {
	char arr[20] = "Hello,world!\n";
	strcat(arr, "\a");
	printf("%s", arr);
	return 0;
}
*///“初识并初用strcat函数2^
/*
int main() {
	char arr[30] = "Hello,world!   ";
	strncat(arr, "\ahello!..........", 6);
	printf("%s", arr);
	return 0;
}
*///“初识并初用strncat函数1^
/*
int main() {
	char arr[30] = "Hello,";
	strncat(arr, "world!\njdjjdghyhthyy", 7);
	printf("%s", arr);
	return 0;
}
*///“初识并初用strncat函数2^
/*
int i = 10;
int main() {
	printf("%d ", i--);
	if (i) { main(); }
	return 0;
}
*///“简单的递归”^
/*
int f1() {
	return 1;
}
int main() {
	printf("%d", f1());
}
*///“简单的链式访问”^
/*
int main() {
	printf("%d", printf("%d", printf("%d", printf("%d", 11))));
	return 0;
}
*///“巧妙的链式访问”1^
/*
int main() {
	int i = 0;
	int ia = 0;
	int ib = 0;
	int ic = 0;
	printf("%d\n", printf("\n%d", scanf("%d %d %d %d", &i, &ia, &ib, &ic) * 11));
	return 0;
}
*///“巧妙的链式访问”2^
/*
int main() {
	int i = 0;
	int ia = scanf("%d %d %d %d", &i, &i, &i, &i);
	int ib = scanf("%d %d %d", &i, &i, &i);
	int ic = scanf("%d %d", &i, &i);
	int id = scanf("%d", &i);
	printf("%d%d%d%d\n", ia, ib, ic, id);
	return 0;
}
*///“巧妙的链式访问”3^
/*
int main() {
	long long i = 0;
	scanf("%lld", &i);
	system("cls");
	printf("的字符数量：%d\n", printf("%lld", i));
}
*///输出一个数字的字符数量的程序^
/*
int main() {
	int i = 0;
	printf("%lf\n", cos(i));
	return 0;
}
*///“cos函数”^
/*
int main() {
	int i = 180;
	printf("%lf\n", sin(i));
	return 0;
}
*///“sin函数”^
/*
int main() {
	int i = 45;
	printf("%lf\n", tan(i));
	return 0;
}
*///“tan函数”^
/*
int main() {
	printf("%lf\n", pow(1,233));
	return 0;
}
*///“pow函数”^
/*
int main() {
	double i = 0;
	double ia = 0;
	printf("请输入一个除法算式 -> ");
	scanf("%lf/%lf", &i, &ia);
	printf("\n\n");
	if (ia) {
		printf("%lf/%lf=%lf", i, ia, i / ia);
	}
	else {
		printf("错误，无法计算这个除法算式的结果\n");
	}
	return 0;
}
*///除法计算器^
/*
int main() {
	double i = 0;
	double ia = 0;
	printf("请输入两个值 -> ");
	scanf("%lf %lf", &i, &ia);
	printf("%lf和%lf的最大值为%lf", i, ia ,fmax(i, ia));
	return 0;
}
*///“求最大值的函数”^
/*
int numlen(long long i) {
	int ilen = printf("%lld", i);
	system("cls");
	return ilen;
}
int main() {
	printf("%d", numlen(12345));
	return 0;
}
*///“求一个数的字符数量的函数”^
/*
int main() {
	double d = 0.0;
	double da = 0.0;
	printf("请输入两个值 -> ");
	scanf("%lf %lf", &d, &da);
	printf("\n\n在%lf和%lf中，%lf最小", d, da, fmin(d, da));
	return 0;
}
*///“求最小值的函数”^
/*
int main() {
	int arr[10] = { 1,1,2,3,5,8,13,21,34,55 };
	printf("%d", *(arr + 5) == arr[5]);
	return 0;
}
*///“奇妙的等式”^
/*
void printff(unsigned int i) {
	while (i) {
		printf("%u", i % 10);
		i /= 10;
	}
}
int main() {
	unsigned int i = 0;
	scanf("%u", &i);
	printf("\n\n");
	printff(i);
	return 0;
}
*///数字倒序器^
/*
int main() {
	char str[100] = "";
	printf("至少要多少时间才能读完清华大学？ -> ");
	scanf("%s", str);
	printf("\n%s\n", strcmp(str, "一秒钟") ? "\a啊哦，你答错了，正确的答案是“一秒钟”" : "恭喜你，你答对了");
	return 0;
}
*///“脑筋急转弯”^
/*
int main() {
	int arr[10] = { 1,2,3,4,5,6,7,8,9,0 };
	int* p = arr;
	printf("%d", *(p += 5, p));
	return 0;
}
*///“数组与指针”^
/*
void Strcpy(char* v, const char* c) {
	long long ll = 0;
	for (ll = 0; '\0' != c[ll]; ll++) {
		v[ll] = c[ll];
	}
	v[ll] = '\0';
}
int main() {
	char str[10] = "";
	Strcpy(str, "abcdef");
	printf("%s", str);
	return 0;
}
*///“我自创的Strcpy函数”^
/*
int main() {
	int arr[20] = { 1 };
	int i = 1;
	for (; i!=20; (arr[i]++, i++)) {
		arr[i] = arr[i - 1];
	}
	int* p = arr;
	int* pa = arr;
	pa += 3;
	for (; 20 != *pa; (pa++, p++)) {
		printf("%d %d ", *p, *pa);
	}
	return 0;
}
*///“+3-2”^
/*
int main() {
	system("start https://www.csdn.net/");
	return 0;
}
*///“start命令”^
/*
int main() {
	int i = 0;
	char str[10000] = "";
	char stra[13] = "https://www.";
	char strb[10000] = "start ";
	printf("可以搜索或者输入网址(在Bing里搜索) -> ");
	scanf("%s", str);
	for (i = 0; i < 8; i++) {
		if (str[i] != stra[i]) {
			break;
		}
	}
	if (8 != i) {
		for (i = 0; i < 4; i++) {
			if (str[i] != stra[i + 8]) {
				break;
			}
		}
		strcat(strb, "https://");
		if (4 != i) {
			strcat(strb, "cn.bing.com/search?q=");
		}
	}
	strcat(strb, str);
	system(strb);
	return 0;
}
*///浏览器^
/*
int main() {
	char str[13] = "hello,world!";
	char* p = strchr(str, 'l');
	char* pa = str;
	int count = 0;
	for (; p != pa; pa++) {
		if (NULL==p) {
			break;
		}
		count++;
	}
	if (NULL == p) {
		printf("ERROR");
	}
	else {
		printf("%d", count);
	}
	printf("\n");
	return 0;
}
*///求一个字符串中的某个字符第一次出现在哪里的程序^
/*
int main() {
	char str[13] = "hello,world!";
	char* p = strrchr(str, 'l');
	char* pa = str;
	int count = 0;
	for (; p != pa; pa++) {
		if (NULL==p) {
			break;
		}
		count++;
	}
	if (NULL == p) {
		printf("ERROR");
	}
	else {
		printf("%d", count);
	}
	printf("\n");
	return 0;
}
*///求一个字符串中的某个字符最后一次出现在哪里的程序^
/*
void reset(char str[ROW][COL+1]) {
	system("cls");
	int i = 0;
	int ij = 0;
	for (i = 0; i < ROW; i++) {
		for (ij = 0; ij < COL; ij++) {
			str[i][ij] = '@';
		}
	}
	for (i = 0; i < ROW; i++) {
		for (ij = 0; ij < COL; ij++) {
			printf("@%c", COL - 1 == ij ? '\n' : ' ');
		}
	}
}
void print_table(char str[ROW][COL+1]) {
	system("cls");
	int il = 0;
	int in = 0;
	for (il = 0; il < ROW; il++) {
		for (in = 0; in < COL; in++) {
			printf("%c%c", str[il][in], COL - 1 == in ? '\n' : ' ');
		}
	}
}
int main() {
	char str[ROW][COL+1];
	int ik = 0;
	int im = 0;
	char ch = 0;//辅助
	while (1) {
		reset(str);
		for (ik = 0; ik < ROW; ik++) {
			for (im = 0; im < COL; im++) {
				scanf("%c", &ch);
				str[ik][im] = '.';
				print_table(str);
			}
		}
		scanf("%c",&ch);
	}
	return 0;
}
*///“赛博解压板”^
/*
int main() {
	system("tree");
	return 0;
}
*///“tree”^
/*
int main() {
	int i = 0;
	int ia = 0;
	for (i = 0; i < HIGH; i++) {
		for (ia = 0; ia < i; ia++) {
			printf("\n");
		}
		printf("牢大的直升机");
		for (ia = 0; ia < HIGH - i; ia++) {
			printf("\n");
		}
		printf("------------");
		Sleep(100);
		system("cls");
	}
	return 0;
}
*///“牢大坠机”
/*
int main() {
	int i = 0;
	int ia = 0;
	for (i = 0; i < HIGH; i++) {
		printf("---------------------");
		for (ia = 0; ia < HIGH - i; ia++) {
			printf("\n");
		}
		printf("    */ 反重力 \\*    ");
		for (ia = 0; ia < i; ia++) {
			printf("\n");
		}
		Sleep(100);
		system("cls");
	}
	return 0;
}
*///“反重力”^
/*
void up() {
	int i = 0;
	int ia = 0;
	for (i = 0; i < HIGH; i++) {
		printf("\n");
		for (ia = 0; ia < HIGH - i; ia++) {
			printf("\n");
		}
		printf("***************\n**   上升    **\n***************");
		for (ia = 0; ia < i; ia++) {
			printf("\n");
		}
		printf("\n");
		Sleep(10);
		system("cls");
	}
}
void down() {
	int i = 0;
	int ia = 0;
	for (i = 0; i < HIGH; i++) {
		printf("\n");
		for (ia = 0; ia < i; ia++) {
			printf("\n");
		}
		printf("***************\n**   下降    **\n***************");
		for (ia = 0; ia < HIGH - i; ia++) {
			printf("\n");
		}
		printf("\n");
		Sleep(10);
		system("cls");
	}
}
int main() {
	int ib = 0;
	for (;1; ib++) {
		if (ib % 2) {
			down();
		}
		else {
			up();
		}
		Sleep(10);
	}
	return 0;
}
*///“上升与下降”^
/*
int main() {
	char str[WIDTH + 1] = "";
	char* p = str;
	int i = 0;
	for (; i<WIDTH; (p++,i++)) {
		*p = ' ';
	}
	for (p=str; '\0' != *p; p++) {
		*p = '&';
		printf("%s|\n", str);
		*p = ' ';
		Sleep(10);
		system("cls");
	}
	return 0;
}
*///“右”^
/*
int main() {
	char str[WIDTH + 1] = "";
	char* p = str;
	int i = 0;
	for (; i < WIDTH; (p++, i++)) {
		*p = ' ';
	}
	for (p--; i; (p--, i--)) {
		*p = '*';//这里的文字可改
		printf("%s\n", str);
		*p = ' ';
		Sleep(10);
		system("cls");
	}
}
*///“左”^
/*
void up() {
	int i = 0;
	int ia = 0;
	for (i = 0; i < HIGH; i++) {
		for ((printf("\n"), ia = 0); ia < HIGH - i; ia++) {
			printf("\n");
		}
		for (ia = 1; ia < WIDTH && !(TURNRIGHT); ia++) {
			printf(" ");
		}
		printf("*");//这里的文字可改
		for (ia = -1; ia < i; ia++) {
			printf("\n");
		}
		Sleep(10);
		system("cls");
	}
}
void down() {
	int i = 0;
	int ia = 0;
	for (i = 0; i < HIGH; i++) {
		for ((printf("\n"), ia = 0); ia < i; ia++) {
			printf("\n");
		}
		for (ia = 1; ia < WIDTH && TURNRIGHT; ia++) {
			printf(" ");
		}
		printf("*");//这里的文字可改
		for (ia = -1; ia < HIGH - i; ia++) {
			printf("\n");
		}
		Sleep(10);
		system("cls");
	}
}
void right() {
	char str[WIDTH + 1] = "";
	char* p = str;
	int i = 0;
	for (; i < WIDTH; (p++, i++)) {
		*p = ' ';
	}
	for (p = str; '\0' != *p; p++) {
		*p = '*';//这里的文字可改
		for (i = 0; i < WIDTH && !(TURNRIGHT); i++) {
			printf("\n");
		}
		printf("%s\n", str);
		*p = ' ';
		Sleep(10);
		system("cls");
	}
}

void left() {
	char str[WIDTH + 1] = "";
	char* p = str;
	int i = 0;
	int itu = 0;
	for (; i < WIDTH; (p++, i++)) {
		*p = ' ';
	}
	for (p--; i; (p--, i--)) {
		*p = '*';//这里的文字可改
		for (itu = 0; itu < WIDTH && TURNRIGHT; itu++) {
			printf("\n");
		}
		printf("%s\n", str);
		*p = ' ';
		Sleep(10);
		system("cls");
	}
}
int main() {
	while (1) {
		if (TURNRIGHT) {
			right();
			down();
			left();
		}
		else {
			left();
			down();
			right();
		}
		up();
	}
	return 0;
}
*///“旋转”^
/*
int main() {
	long long ll = 0;
	printf("请输入要转换的秒数 -> ");
	scanf("%lld", &ll);
	printf("%lld秒 = %lld时%lld分%lld秒", ll, ll / 3600, ll / 60 % 60, ll % 60);
	
	return 0;
}
*///秒与时间转换器^
/*
int main() {
	int i = 0;
	int ia = 0;
	int ib = 0;
	printf("请输入一个时间((你输入的数字)时(你输入的数字)分(你输入的数字)秒) -> ");
	scanf("%d时%d分%d秒", &i, &ia, &ib);
	if (ia > 59 || ib > 59) {
		printf("ERROR");
	}
	else {
		printf("%d时%d分%d秒 = %d秒", i, ia, ib, i * 3600 + ia * 60 + ib);
	}
	return 0;
}
*///时间与秒转换器^
/*
void print_table(int arr[HIGH][WIDTH]) {
	system("cls");
	int i = 0;
	int ia = 0;
	for (i = 0; i < HIGH; i++) {
		for (ia = 0; ia < WIDTH; ia++) {
			printf("%d%c", arr[i][ia], WIDTH - 1 == ia ? '\n' : ' ');
		}
	}
}
int main() {
	printf("欢迎你来玩这个游戏，在这个游戏里“0”是空地，“1”是你，而“8”是终点，在这之中，你只需要到达终点，就可以赢了\n");
	Sleep(2800);
	int arr[HIGH][WIDTH] = { 0 };
	if (&arr[PLAYER] == &arr[GOAL]) {
		goto a;
	}
	arr[PLAYER] = 1;
	arr[GOAL] = 8;
	char ch = 0;
	int* p = &arr[PLAYER];
	int i = 0;
	do {
		print_table(arr);
		ch = getchar();
		while ('\n' != getchar()) {
			;
		}
		*p = 0;
		switch (ch) {
		case 'w':
			for (i = 0; i < WIDTH; i++) {
				if (p == &arr[0][i]) {
					break;
				}
			}
			if (WIDTH == i) {
				p -= WIDTH;
			}
			break;
		case 'a':
			for (i = 0; i < HIGH; i++) {
				if (p == &arr[i][0]) {
					break;
				}
			}
			if (HIGH == i) {
				p--;
			}
			break;
		case 's':
			for (i = 0; i < WIDTH; i++) {
				if (p == &arr[HIGH - 1][i]) {
					break;
				}
			}
			if (WIDTH == i) {
				p += WIDTH;
			}
			break;
		case 'd':
			for (i = 0; i < HIGH; i++) {
				if (p == &arr[i][WIDTH - 1]) {
					break;
				}
			}
			if (HIGH == i) {
				p++;
			}
			break;
		default:
			break;
		}
		*p = 1;
	} while (8==arr[GOAL]);
	a:
	system("cls");
	printf("恭喜你，你赢了");
	return 0;
}
*///我的第一个2D游戏^
/*
int main() {
	int i = 0;
	if (1 || (printf("hello,world!\n"), ++i)) {
		printf("%d\n", i);
	}
}
*///“逻辑运算中的短路效应”1^
/*
int main() {
	int i = 0;
	1 || (i = 9);
	printf("%d", i);
}
*///“逻辑运算中的短路效应”2^
/*
int main() {
	int i = 0;
	scanf("%d", &i);
	(i || (i = 3, 0), (2 == i) && (i = 1, 0));
	printf("%d", i);
	return 0;
}
*///“0为3，2为1”(选自我的CSDN博客)^
/*
unsigned int fact(unsigned int u) {
	unsigned int uret = 0;
	uret = u;
	return u || (u = 1, uret = 1), (u * (u > 1 && (uret = fact(u - 1)), uret));
}
int main() {
	unsigned int u = 0;
	scanf("%u", &u);
	printf("%u", fact(u));
	return 0;
}
*///只用逻辑运算中的短路效应的计算阶乘的哈四年函数和程序^
/*
int main() {
	int arr[4][4] = { 0 };
	int i = 0;
	long long ll = 0;
	for (srand((unsigned int)time(NULL)),i = 0; i < 4; i++) {
		for (ll = 0; ll < 4; ll++) {
			arr[i][ll] = rand();
		}
	}
	for (ll=arr[1][0],i = 1; i < 4; i++) {
		ll += arr[1][i];
	}
	for (i = 0; i < 16; i++) {
		printf("%d%c", arr[0][i],!((i+1)%4) ? '\n' : ' ');
	}
	printf("\n第二行的数字的和是%lld\n", ll);
	return 0;
}
*///求一个4*4的二维数组的第二行的数字总和的程序^
/*
int simonsays(char* str) {
	int ia = 0;
	int iflag = 1;
	printf("西蒙说");
	Sleep(1000);
	for (system("cls"), ia = 0; '\0' != str[ia]; ia++) {
		printf("%c", str[ia]);
		Sleep(500);
		system("cls");
		Sleep(100);
	}
	for (ia = 0; '\0' != str[ia]; ia++) {
		if (str[ia] != (getchar())) {
			iflag = 0;
			break;
		}
	}
	return ('\n' != getchar() && (iflag = 0)), iflag;
}
int main() {
	printf("欢迎你来玩这个西蒙说游戏，在这个游戏中，你需要在看见“西蒙说”这三个字之后，就要开始记后面的字母了，这些字母有“R”“B”“Y”和“G”，而当要记的字母全部出现之后，就要把刚才记过的字母一次性输入进去，如果输入进去的字母与刚才显示的字母一模一样，那就继续玩下去，反之，就结束这一轮的游戏，这就是这个西蒙说游戏的规则");
	Sleep(7000);
	char str[99999] = "";
	char stra[5] = "RBYG";
	int i = 0;
	int is = 1;
	for (system("cls"), srand(time(NULL)), i = 0; is; system("cls"), i++) {
		str[i] = stra[rand() % 4];
		is = simonsays(str);
	}
	system("cls");
	printf("游戏已结束\n");
	return 0;
}
*///C语言西蒙说游戏程序^
/*
int main() {
	int arr[4][4] = { 0 };
	int i = 0;
	long long ll = 0;
	for (srand((unsigned int)time(NULL)), i = 0; i < 4; i++) {
		for (ll = 0; ll < 4; ll++) {
			arr[i][ll] = rand();
		}
	}
	for (ll = arr[0][2], i = 1; i < 4; i++) {
		ll += arr[i][2];
	}
	for (i = 0; i < 16; i++) {
		printf("%d%c", arr[0][i], !((i + 1) % 4) ? '\n' : ' ');
	}
	printf("\n第三列的数字的和是%lld\n", ll);
	return 0;
}
*///求一个4*4的二维数组的第三列的数字总和的程序^
/*
void reprint(int* arr,int sz) {
	int* p = arr + sz - 1;
	for (; p >= arr; p--) {
		printf("%d ", *p);
	}
}
int main() {
	int arr[9] = { 1,2,3,4,5,6,7,8,9 };
	int sz = sizeof arr / sizeof arr[0];
	int i = 0;
	reprint(arr, sz);
	return 0;
}
*///“逆序输出数组”(选自我的CSDN博客)^
/*
void reprint(int* arr,int sz) {
	int* p = arr + sz - 1;
	for (; p >= arr; p--) {
		printf("%d ", *p);
	}
}
int main() {
	int arr[9] = { 1,2,3,4,5,6,7,8,9 };
	int sz = sizeof arr / sizeof arr[0];
	int i = 0;
	reprint(arr, sz);
	return 0;
}
*///“数组初始化”(大部分选自我的CSDN博客)^
/*
int main() {
	char str[T+1] = "";
	char stra[T+1] = "";
	int i = 0;
	scanf("%s", str);
	while (1) {
		system("cls");
		printf("%s", str);
		if (RIGHT) {
			for (i = 0; i < strlen(str); i++) {
				stra[i + 1] = str[i];
			}
			stra[0] = stra[i];
			stra[i] = '\0';
		}
		else {
			stra[strlen(str) - 1] = str[0];
			for (i = 1; i < strlen(str); i++) {
				stra[i - 1] = str[i];
			}
		}
		strcpy(str, stra);
		Sleep(WAIT);
	}
	return 0;
}
*///“走马灯文字”(选自我的CSDN博客)^
/*
int main() {
	printf("/%4d|%-4d\\", 12, 21);
	return 0;
}
*///“%4d”和“%-4d”^
/*
void caeser(char* str, int ik) {
	int im = 0;
	int ima = 0;
	int i = 0;
	printf("偏移量为多少?(整数) -> ");
	scanf("%d", &im);
	im %= 95, ik && (im = -im), ima = im;
	for (; i < strlen(str); i++) {
		for (ima = im; ima;) {
			ima > 0 && str[i]++, ima > 0 || str[i]--;
			127 == str[i] && (str[i] = ' '), 31 == str[i] && (str[i] = '~');
			ima > 0 && ima--, ima < 0 && ima++;
		}
	}
}
int main() {
	int ik = 0;
	char str[99999] = "";
	while (1) {
		char ck[] = "加";
		printf("你要加密还是解密?(0加密，非0解密) -> ");
		scanf("%d", &ik);
		if (ik) {
			strcpy(ck, "解");
		}
		printf("请输入你要凯撒密码%s密的文本(不能有不可以显示的字符) -> ", ck);
		char* pc = str;
		do {
			scanf("%s", str);
			pc = str;
			for (; *pc > 31 && *pc < 127; pc++) {
				;
			}
			if ('\0' != *pc) {
				printf("输入错误，请重新输入 -> ");
			}
		} while ('\0' != *pc);
		caeser(str, ik);
		printf("%s密之后的文本 -> %s\n------------------------------------------------\n", ck, str);
	}
	return 0;
}
*///升级版凯撒密码加密解密器(选自我的CSDN博客)^
/*
int main() {
	printf("%010d",114514);
	return 0;
}
*///“%010d”^
/*
void supersar(char* str, char* strs,int ipass) {
	int inl = 0;
	int inr = 0;
	int ia = 0;
	int iak = 0;
	int keyarr[99999] = { 0 };
	char strno[] = "要";
	ipass && strcpy(strno,"有");
	printf("左边的干扰字符%s多少长度?(正整数) -> ",strno);
	do {
		scanf("%d", &inl);
		inl < 0 && printf("输入错误，请重新输入一遍(正整数) -> ");
	} while (inl < 0);
	printf("右边的干扰字符%s多少长度?(正整数) -> ",strno);
	do {
		scanf("%d", &inr);
		inr < 0 && printf("输入错误，请重新输入一遍(正整数) -> ");
	} while (inr < 0);
	if (!ipass) {
		for (; ia < 10000; ia++) {
			keyarr[ia] = 96;
		}
		for (ia = 0; ia < inl; ia++) {
			strs[ia] = rand() % 95 + 32;
		}
		for (; ia < inl + strlen(str); ia++) {
			keyarr[ia - inl] = rand() % 95;
			strs[ia] = str[ia - inl];
			for (iak = keyarr[ia - inl]; iak > 0; iak--) {
				strs[ia]++;
				127 == strs[ia] && (strs[ia] = ' ');
			}
		}
		for (ia = 0; ia < inr; ia++) {
			strs[inl + ia + strlen(str)] = rand() % 95 + 32;
		}
		for (printf("密钥:"),ia = 1; 96 != keyarr[ia]; ia++) {
			printf("%d ",keyarr[ia-1]);
		}
		printf("\n密钥个数:%d\n", ia-1);
	}
	else {
		int in = 0;
		printf("密钥有多少个数字? -> ");
		scanf("%d", &in);
		printf("密钥组为多少? -> ");
		for (ia = 0; ia < in; ia++) {
			scanf("%d", &keyarr[ia]);
		}
		for (ia = inl; ia < strlen(str) - !(1 == strlen(str))*2 - inr; ia++) {
			iak = keyarr[ia - inl];
			strs[ia - inl] = str[ia];
			for (; iak > 0; iak--) {
				strs[ia - inl]--;
				31 == strs[ia - inl] && (strs[ia - inl] = '~');
			}
		}
	}
}
int main() {
	char str[99999] = "";
	int i = 0;
	srand((unsigned int)time(NULL));
	while (1) {
		char strp[] = "加";
		printf("你要用超撒密码加密还是解密?(0加密，非0解密) -> ");
		scanf("%d", &i);
		i && strcpy(strp, "解");
		printf("请输入你要用超撒密码%s密的字符串(不能有不显示的字符) -> ", strp);
		char* pc = str;
		while ('\n' != getchar()) {
			;
		}
		while (*pc = getchar(), '\n' != *pc) {
			if (!(*pc > 31 && *pc++ < 127)) {
				printf("输入错误，请重新输入 -> ");
				while ('\n' != getchar()) {
					;
				}
			}
		}
		char strs[99999] = "";
		supersar(str, strs, i);
		printf("%s密之后的字符串 -> %s\n------------------------------------------\n", strp, strs);
	}
	return 0;
}
*///“超撒加密(我的原创加密技术)”(选自我的CSDN博客)^
/*
int main() {
	printf("%f", 1.234567f);
	return 0;
}
*///“1.234567f”^
/*
void supersar(char* str, char* strs, int ipass) {
	int inl = 0;
	int inr = 0;
	int ia = 0;
	int iak = 0;
	int keyarr[99999] = { 0 };
	char strno[] = "要";
	char keystr[99999] = "";
	ipass && strcpy(strno, "有");
	printf("左边的干扰字符%s多少长度?(正整数) -> ", strno);
	do {
		scanf("%d", &inl);
		inl < 0 && printf("输入错误，请重新输入一遍(正整数) -> ");
	} while (inl < 0);
	printf("右边的干扰字符%s多少长度?(正整数) -> ", strno);
	do {
		scanf("%d", &inr);
		inr < 0 && printf("输入错误，请重新输入一遍(正整数) -> ");
	} while (inr < 0);
	if (!ipass) {
		//初始化
		for (; ia < 10000; ia++) {
			keyarr[ia] = 96;
		}
		//前干扰字符
		for (ia = 0; ia < inl; ia++) {
			strs[ia] = rand() % 95 + 32;
		}
		//超撒加密
		for (; ia < inl + strlen(str); ia++) {
			keyarr[ia - inl] = rand() % 95;
			strs[ia] = str[ia - inl];
			for (iak = keyarr[ia - inl]; iak > 0; iak--) {
				127 == ++strs[ia] && (strs[ia] = ' ');
			}
		}
		//后干扰字符
		for (ia = 0; ia < inr; ia++) {
			strs[inl + ia + strlen(str)] = rand() % 95 + 32;
		}
		//输出密钥
		for (printf("密钥:"), ia = 0; 96 != keyarr[ia]; ia++) {
			printf("%c", keyarr[ia] + 32);
		}
		printf("\n");
	}
	else {
		char* pc = keystr;
		//密钥询问
		printf("密钥为多少? -> ");
		while ('\n' != getchar()) {
			;
		}
		while (*pc=getchar(), '\n' != *pc++) {
			;
		}
		//超撒解密
		for (*pc = '\0', ia = inl; ia < strlen(str) - inr; ia++) {
			iak = keystr[ia - inl] - 32;
			strs[ia - inl] = str[ia];
			for (; iak > 0; iak--) {
				strs[ia - inl]--;
				31 == strs[ia - inl] && (strs[ia - inl] = '~');
			}
		}
	}
}
int main() {
	char str[99999] = "";
	int i = 0;
	srand((unsigned int)time(NULL));
	while (1) {
		char strp[] = "加";
		printf("你要用超撒密码加密还是解密?(0加密，非0解密) -> ");
		scanf("%d", &i);
		printf("请输入你要用超撒密码%s密的字符串(不能有控制字符) -> ", (i && strcpy(strp, "解"), strp));
		char* pc = str;
		while ('\n' != getchar()) {
			;
		}
		while (*pc = getchar(), '\n' != *pc) {
			if (!(*pc > 31 && *pc++ < 127)) {
				printf("输入错误，请重新输入 -> ");
				while ('\n' != getchar()) {
					;
				}
				while (pc != str) {
					*pc-- = '\0';
				}
			}
		}
		*pc = '\0';
		char strs[99999] = "";
		supersar(str, strs, i);
		printf("%s密之后的字符串 -> %s\n------------------------------------------\n", strp, strs);
	}
	return 0;
}
*///超撒加密2.0(选自我的CSDN博客)^
/*
int main() {
    int arr[10] = { 0,1,2,3,4,5,6,7,8,9 };
    int i = 0;
    for (i = 0; i < 10; i++) {
        printf("%d ", i[arr]);
    }
    return 0;
}
*///“i[arr]”^
/*
int main() {
    system("title 命令提示符");
    char str[99999] = "";
    while (1) {
        char* pc = str;
        while (*pc = getchar(), '\n' != *pc) {
            pc++;
        }
        *pc = '\0';
        system(str);
        printf("\n");
    }
    return 0;
}
*///模拟命令提示符(选自我的CSDN博客)^
/*
int main() {
	int i = 0;
	printf("把i设为几? -> ");
	scanf("%d", &i);
	assert(i);
	return 0;
}
*///“assert断言”^
/*
int main() {
	int i = 114514;
	printf("%d\n", (&i)<:0:>);
	return 0;
}
*///“(&i)<:0:>”(选自我的CSDN博客)^
/*
int main() {
	int i = 114514;
	printf("%d\n", 0[&i]);
	return 0;
}
*///“0[&i]”(选自我的CSDN博客)^
/*
/*
void printmaze(char strmaze[9][9]) {
	int ia = 0;
	int ib = 0;
	for (ia = 0; ia < 9; ia++) {
		for (ib = 0; ib < 9; ib++) {
			printf("%c", strmaze[ia][ib]);
		}
		printf("|\n");
	}
	printf("---------@\n");
}
int main() {
	int i = 0;
	char ch = 0;
	char strmaze[9][9] = {
		"P *      ",
		"*  *  *  ",
		" *     **",
		"*   *    ",
		"  *  * * ",
		" * * *   ",
		"  * * ** ",
		" *   * **",
		"   *    G"
	};
	char* cp = &strmaze[0][0];
	printf("欢迎你来玩这个迷宫游戏，在这个迷宫中，“P”是你，“G”是终点，而“*”是墙，空格是你可以走的地方，“w”往上，“a”往左，“s”往下，“d”往右，而你只要走到终点就可以了，这就是这个迷宫游戏的规则");
	Sleep(4500);
	system("cls");
	while ('G' == strmaze[8][8]) {
		printmaze(strmaze);
		scanf("%c", &ch);
		while ('\n' != getchar()) {
			;
		}
		*cp = ' ';
		switch (ch) {
		case 'w':
			for (i = 0; i < 9; i++) {
				if (cp == &strmaze[0][i]) {
					break;
				}
			}
			(9 == i && '*' != *(cp - 9)) && (cp -= 9);
			break;
		case 'a':
			for (i = 0; i < 9; i++) {
				if (cp == &strmaze[i][0]) {
					break;
				}
			}
			(9 == i && '*' != *(cp - 1)) && cp--;
			break;
		case 's':
			for (i = 0; i < 9; i++) {
				if (cp == &strmaze[8][i]) {
					break;
				}
			}
			(9 == i && '*' != *(cp + 9)) && (cp += 9);
			break;
		case 'd':
			for (i = 0; i < 9; i++) {
				if (cp == &strmaze[i][8]) {
					break;
				}
			}
			(9 == i && '*' != *(cp + 1)) && cp++;
			break;
		default:
			break;
		}
		*cp = 'P';
		system("cls");
	}
	system("color 0A");
	printf("恭喜你，你赢了\n");
	return 0;
}
*///“迷宫游戏”(选自我的CSDN博客)^
/*
int main() {
	int i = 0;
	srand((unsigned int)time(NULL));
	char ch = 0;
	while (1) {
		printf("%d", rand());
		scanf("%c", &ch);
		system("cls");
	}
	return 0;
}
*///随机数生成器^
/*
int main() {
	int ihea = 0;
	int ifoo = 0;
	int ichi = 0;
	printf("请输入头的数量 -> ");
	scanf("%d", &ihea);
	printf("请输入脚的数量 -> ");
	scanf("%d", &ifoo);
	for (; -1 != ihea; ichi++, ihea--) {
		if (ichi * 2 + ihea * 4 == ifoo) {
			break;
		}
	}
	-1 != ihea && printf("鸡有%d只，兔有%d只\n", ichi, ihea), -1 != ihea || printf("无解\n");
	return 0;
}
*///“鸡兔同笼求解器”(选自我的CSDN博客)^
/*
int main() {
	int arr[10] = { 1,2,3,4,5,6,7,8,9,0 };
	const int* pi = arr;
	pi += 5;//OK
	//*pi += 5;//err
	printf("%d\n", *pi);
	return 0;
}
*///“const int* pi”^
/*
void printmaze(char strmaze[9][9]) {
	int ia = 0;
	int ib = 0;
	for (ia = 0; ia < 9; ia++) {
		for (ib = 0; ib < 9; ib++) {
			printf("%c", strmaze[ia][ib]);
		}
		printf("|\n");
	}
	printf("---------@\n");
}
int main() {
	int i = 0;
	char ch = 0;
	char strmaze[9][9] = {
		"P       *",
		"****  *  ",
		" *  *   *",
		"  *  *** ",
		"**   *   ",
		" *  *    ",
		" * ** ***",
		" * *  *  ",
		"**  *  *G"
	};
	char* cp = &strmaze[0][0];
	printf("欢迎你来玩这个迷宫游戏，在这个迷宫中，“P”是你，“G”是终点，而“*”是墙，空格是你可以走的地方，“w”往上，“a”往左，“s”往下，“d”往右，并且，这个迷宫边界互通，而你只要走到终点就可以了，这就是这个迷宫游戏的规则");
	Sleep(4500);
	system("cls");
	while ('G' == strmaze[8][8]) {
		printmaze(strmaze);
		scanf("%c", &ch);
		while ('\n' != getchar()) {
			;
		}
		*cp = ' ';
		switch (ch) {
		case 'w':
			for (i = 0; i < 9; i++) {
				if (cp == &strmaze[0][i]) {
					break;
				}
			}
			(9 == i && '*' != *(cp - 9)) && (cp -= 9);
			(9 != i && '*' != *(cp + 72)) && (cp += 72);
			break;
		case 'a':
			for (i = 0; i < 9; i++) {
				if (cp == &strmaze[i][0]) {
					break;
				}
			}
			(9 == i && '*' != *(cp - 1)) && cp--;
			(9 != i && '*' != *(cp + 8)) && (cp += 8);
			break;
		case 's':
			for (i = 0; i < 9; i++) {
				if (cp == &strmaze[8][i]) {
					break;
				}
			}
			(9 == i && '*' != *(cp + 9)) && (cp += 9);
			(9 != i && '*' != *(cp - 72)) && (cp -= 72);
			break;
		case 'd':
			for (i = 0; i < 9; i++) {
				if (cp == &strmaze[i][8]) {
					break;
				}
			}
			(9 == i && '*' != *(cp + 1)) && (cp++);
			(9 != i && '*' != *(cp - 8)) && (cp -= 8);
			break;
		default:
			break;
		}
		*cp = 'P';
		system("cls");
	}
	system("color 0A");
	printf("恭喜你，你赢了\n");
	return 0;
}
*///“边界互通迷宫”(选自我的CSDN博客)^
/*
int main() {
	printf("\033[33mYellow\033[0m\n");
	return 0;
}
*///“Yellow”^
/*
void printmaze(const char strmaze[9][9], const char* ShAdDr[6]) {
	int ia = 0;
	int ib = 0;
	int ic = 0;
	const char str[4] = "134";
	for (ia = 0; ia < 9; ia++) {
		for (ib = 0; ib < 9; ib++) {
			for (ic = 0; ic < 6; ic++) {
				if (&strmaze[ia][ib] == ShAdDr[ic] && 'P' != *ShAdDr[ic]) {
					break;
				}
			}
			printf("\033[3%cm%c", 'G' == strmaze[ia][ib] ? '2' : 6 == ic ? '7' : str[ic % 3], strmaze[ia][ib]);
		}
		printf("\033[0m|\n");
	}
	printf("---------@\n");
}
int main() {
	int i = 0;
	int ie = 0;
	char ch = 0;
	const char strmaze[9][9] = {
		"P*\\      ",
		" *  * * *",
		"  **   * ",
		" *\\* *   ",
		"   **\\**#",
		"#****    ",
		"   *  *  ",
		" *   * **",
		"   *   #G"
	};
	char* cp = &strmaze[0][0];
	char* ShAdDr[6] = { &strmaze[3][2], &strmaze[4][5], &strmaze[0][2], &strmaze[5][0], &strmaze[4][8], &strmaze[8][7] };//ShAdDr -> Switchs And Doors
	char regis[4] = "\\\\\\";
	printf("欢迎你来玩这个迷宫游戏，在这个迷宫中，“P”是你，“G”是终点，而“*”是墙，空格是你可以走的地方，“w”往上，“a”往左，“s”往下，“d”往右，“z”用来打开或者关闭开关，并且，“\\”和“/”都是开关，用来控制门“#”的开和关，而你只要走到终点就可以了，这就是这个迷宫游戏的规则");
	Sleep(6600);
	system("cls");
	while ('G' == strmaze[8][8]) {
		printmaze(strmaze, ShAdDr);
		scanf("%c", &ch);
		while ('\n' != getchar()) {
			;
		}
		*cp = ' ';
		for (ie = 0; ie < 3; ie++) {
			' ' == *ShAdDr[ie] && (*ShAdDr[ie] = regis[ie]);
		}
		switch (ch) {
		case 'w':
			for (i = 0; i < 9; i++) {
				if (cp == &strmaze[0][i]) {
					break;
				}
			}
			(9 == i && ('*' != *(cp - 9) && '#' != *(cp - 9))) && (cp -= 9);
			break;
		case 'a':
			for (i = 0; i < 9; i++) {
				if (cp == &strmaze[i][0]) {
					break;
				}
			}
			(9 == i && ('*' != *(cp - 1) && '#' != *(cp - 1))) && cp--;
			break;
		case 's':
			for (i = 0; i < 9; i++) {
				if (cp == &strmaze[8][i]) {
					break;
				}
			}
			(9 == i && ('*' != *(cp + 9) && '#' != *(cp + 9))) && (cp += 9);
			break;
		case 'd':
			for (i = 0; i < 9; i++) {
				if (cp == &strmaze[i][8]) {
					break;
				}
			}
			(9 == i && ('*' != *(cp + 1) && '#' != *(cp + 1))) && (cp++);
			break;
		case 'z':
			for (ie = 0; ie < 3; ie++) {
				if (ShAdDr[ie] == cp) {
					if ('\\' == regis[ie]) {
						regis[ie] = '/';
					}
					else {
						regis[ie] = '\\';
					}
					if ('\\' == *ShAdDr[ie]) {
						*ShAdDr[ie] = '/';
					}
					else {
						*ShAdDr[ie] = '\\';
					}
					if (' ' == *(ShAdDr[ie + 3])) {
						*(ShAdDr[ie + 3]) = '#';
					}
					else {
						*(ShAdDr[ie + 3]) = ' ';
					}
				}
			}
			break;
		default:
			break;
		}
		*cp = 'P';
		system("cls");
	}
	system("color 0A");
	printf("恭喜你，你赢了\n");
	return 0;
}
*///“开关迷宫”(选自我的CSDN博客)^
/*
int main() {
	float f = 114514E-6f;
	printf("%f", f);
}
*///“114514E-6f”^
/*
void printmaze(const char strmaze[9][9]) {
	int ia = 0;
	int ib = 0;
	for (ia = 0; ia < 9; ia++) {
		for (ib = 0; ib < 9; ib++) {
			printf("\033[%sm%c", 'G' == strmaze[ia][ib] ? "32" : '^' == strmaze[ia][ib] ? "33" : "0", strmaze[ia][ib]);
		}
		printf("\033[0m|\n");
	}
	printf("---------@\n");
}
int main() {
	int i = 0;
	char ch = 0;
	char strmaze[9][9] = {
		" *  ^^ ^ ",
		"*P*^ ^  ^",
		"^*^    ^ ",
		" ^ ^^^ ^ ",
		"      ^  ",
		"   ^ ^^ ^",
		"^^ ^    ^",
		"    ^  G ",
		" ^  ^  * "
	};
	char* cp = &strmaze[1][1];
	char* const carrp[32] = { &strmaze[0][4],&strmaze[0][5],&strmaze[0][7],&strmaze[1][3],&strmaze[1][5],&strmaze[1][8],&strmaze[2][0],&strmaze[2][7],&strmaze[3][3],&strmaze[3][4],&strmaze[3][7], &strmaze[4][6],&strmaze[6][0],&strmaze[3][1],&strmaze[5][6],&strmaze[6][3],&strmaze[7][4],&strmaze[2][2],&strmaze[3][5],&strmaze[6][1],&strmaze[6][8],&strmaze[5][8],&strmaze[5][5],&strmaze[5][3],&strmaze[8][4],&strmaze[8][1],&strmaze[0][1],&strmaze[1][0],&strmaze[1][2],&strmaze[2][1],&strmaze[8][7],&strmaze[1][1] };
	printf("欢迎你来玩这个迷宫游戏，在这个迷宫中，“P”是你，“G”是终点，而“*”是你可以走的地方，空格是虚空，你不能走，“w”往上，“a”往左，“s”往下，“d”往右，并且，这个迷宫边界互通，而且只要在传送点“^”上输入“z”，就可以传送到这个传送点的另一端，而你只要走到终点就可以了，这就是这个迷宫游戏的规则");
	Sleep(8800);
	system("cls");
	while ('G' == strmaze[7][7]) {
		printmaze(strmaze);
		scanf("%c", &ch);
		while ('\n' != getchar()) {
			;
		}
		*cp = ' ';
		for (i = 0; i < 26; i++) {
			' ' == *carrp[i] && (*carrp[i] = '^');
		}
		for (; i < 32; i++) {
			' ' == *carrp[i] && (*carrp[i] = '*');
		}
		switch (ch) {
		case 'w':
			for (i = 0; i < 9; i++) {
				if (cp == &strmaze[0][i]) {
					break;
				}
			}
			(9 == i && ' ' != *(cp - 9)) && (cp -= 9);
			(9 != i && ' ' != *(cp + 72)) && (cp += 72);
			break;
		case 'a':
			for (i = 0; i < 9; i++) {
				if (cp == &strmaze[i][0]) {
					break;
				}
			}
			(9 == i && ' ' != *(cp - 1)) && cp--;
			(9 != i && ' ' != *(cp + 8)) && (cp += 8);
			break;
		case 's':
			for (i = 0; i < 9; i++) {
				if (cp == &strmaze[8][i]) {
					break;
				}
			}
			(9 == i && ' ' != *(cp + 9)) && (cp += 9);
			(9 != i && ' ' != *(cp - 72)) && (cp -= 72);
			break;
		case 'd':
			for (i = 0; i < 9; i++) {
				if (cp == &strmaze[i][8]) {
					break;
				}
			}
			(9 == i && ' ' != *(cp + 1)) && (cp++);
			(9 != i && ' ' != *(cp - 8)) && (cp -= 8);
			break;
		case 'z':
			for (i = 0; i < 26; i++) {
				if (carrp[i] == cp) {
					i < 13 && (cp = carrp[i + 13]), i < 13 || (cp = carrp[i - 13]);
					break;
				}
			}
			break;
		default:
			break;
		}
		*cp = 'P';
		system("cls");
	}
	system("color 0A");
	printf("恭喜你，你赢了\n");
	return 0;
}
*///“边界互通传送迷宫”(选自我的CSDN博客)^
/*
int main() {
	printf("\033[1;36mCYAN\n\033[0m");
	return 0;
}
*///“CYAN”^
/*
void printmaze(const char strmaze[9][9]) {
	int ia = 0;
	int ib = 0;
	for (ia = 0; ia < 9; ia++) {
		for (ib = 0; ib < 9; ib++) {
			printf("\033[%sm%c", 'G' == strmaze[ia][ib] ? "32" : "0", strmaze[ia][ib]);
		}
		printf("\033[0m|\n");
	}
	printf("---------@\n");
}
int main() {
	srand((unsigned int)time(NULL));
	int i = 0;
	int ia = 0;
	char ch = 0;
	char strmaze[9][9] = {
		"P*   *   ",
		" * * * * ",
		"   *   * ",
		"******** ",
		"   *   * ",
		" *   *   ",
		" ********",
		" *   *   ",
		"   *   *G"
	};
	char* cp = &strmaze[0][0];
	printf("欢迎你来玩这个「折磨人の迷宫」，在这个迷宫中，“P”是你，“G”是终点，而“*”是墙，空格是你可以走的地方，“w”往上，“a”往左，“s”往下，“d”往右，而你只要走到终点就可以了，这就是这个「折磨人の迷宫」的规则");
	Sleep(6300);
	system("cls");
	while (20 == ia ? 'G' == strmaze[8][8] : 1) {
		printmaze(strmaze);
		scanf("%c", &ch);
		while ('\n' != getchar()) {
			;
		}
		*cp = ' ';
		if (!(ia % 2) && &strmaze[7][8] == cp && 20 != ia) {
			ia++;
			strmaze[8][8] = ' ';
			strmaze[0][0] = 'G';
		}
		if ((ia % 2) && &strmaze[1][0] == cp) {
			ia++;
			strmaze[8][8] = 'G';
			strmaze[0][0] = ' ';
		}
		switch (ch) {
		case 'w':
			for (i = 0; i < 9; i++) {
				if (cp == &strmaze[0][i]) {
					break;
				}
			}
			(9 == i && '*' != *(cp - 9)) && (cp -= 9);
			break;
		case 'a':
			for (i = 0; i < 9; i++) {
				if (cp == &strmaze[i][0]) {
					break;
				}
			}
			(9 == i && '*' != *(cp - 1)) && cp--;
			break;
		case 's':
			for (i = 0; i < 9; i++) {
				if (cp == &strmaze[8][i]) {
					break;
				}
			}
			(9 == i && '*' != *(cp + 9)) && (cp += 9);
			break;
		case 'd':
			for (i = 0; i < 9; i++) {
				if (cp == &strmaze[i][8]) {
					break;
				}
			}
			(9 == i && '*' != *(cp + 1)) && cp++;
			break;
		default:
			break;
		}
		if (rand() < (rand() % 1000)) {
			ia % 2 || (cp = &strmaze[1][0]), ia % 2 && (cp = &strmaze[7][8]);
		}
		*cp = 'P';
		system("cls");
	}
	system("color 0A");
	printf("恭喜你，你赢了\n");
	return 0;
}
*///“「折磨人的迷宫」”(选自我的CSDN博客)^
/*
int main() {
	printf("\033[4;36m下划线\033[0m\n");
	return 0;
}
*///“下划线”^
/*
int main() {
	char strsquare[12][3] = { { "1;1" }, { "3" }, { "2;1" }, { "6" }, { "4;1" }, { "5;1" } };//红黄绿青蓝紫
	char strsquarea[12][3] = { 0 };
	int i = 0;
	int ia = 0;
	for (i = 0; i < 6; i++) {
		strcpy(strsquare[i + 6], strsquare[i]);
	}
	while (1) {
		for (i = 0; i < 6; i++) {
			for (ia = i; ia < i + 6; ia++) {
				printf("\033[4%sm \033[0m", strsquare[ia]);
			}
			printf("\n");
		}
		strcpy(strsquarea[0], strsquare[5]);
		for (i = 0; i < 5; i++) {
			strcpy(strsquarea[i + 1], strsquare[i]);
		}
		for (i = 0; i < 6; i++) {
			strcpy(strsquare[i], strsquarea[i]);
			strcpy(strsquare[i + 6], strsquarea[i]);
		}
		Sleep(10);
		system("cls");
	}
	return 0;
}
*///“彩虹渐变方块”(选自我的CSDN博客)^
/*
int main() {
	printf("\033[36;7mi");
	return 0;
}
*///“反显”^
/*
void printmaze(const char strmaze[9][9], const int id) {
	int ia = 0;
	int ib = 0;
	for (ia = 0; ia < 9; ia++) {
		for (ib = 0; ib < 9; ib++) {
			printf("\033[%sm%c\033[0m", 'G' == strmaze[ia][ib] ? "32" : '*' == strmaze[ia][ib] ? "36" : 'P' == strmaze[ia][ib] ? ((id > 4 && id <= 8) ? "36;1" : id <= 4 ? "36" : "0") : "0", strmaze[ia][ib]);
		}
		printf("\033[0m|\n");
	}
	printf("---------@\n");
	if (id > 8) {
		printf("\033[32m还剩%d回合", id);
	}
	else if (id > 4) {
		printf("\033[33m还剩%d回合", id);
	}
	else {
		printf("\033[31m还剩%d回合", id);
	}
	printf("\n\033[0m");
}
int main() {
	int i = 0;
	int id = 12;
	char ch = 0;
	char strmaze[9][9] = {
		"P  *   * ",
		"*    *   ",
		"  *  **  ",
		" ** *  * ",
		"   *    *",
		"*     * *",
		"  *      ",
		" *   * * ",
		"   *   *G"
	};
	char* cp = &strmaze[0][0];
	printf("欢迎你来玩这个\033[36m冰迷宫\033[0m游戏，在这个迷宫中，“P”是你，“G”是终点，而“*”是墙，空格是\033[36m冰\033[0m，“w”往上滑，“a”往左滑，“s”往下滑，“d”往右滑，而你只要滑到终点就可以了\033[31m(注意，你会在12回合之后被冻死)\033[0m，这就是这个\033[36m冰迷宫\033[0m游戏的规则");
	Sleep(6000);
	system("cls");
	for (; 'G' == strmaze[8][8] && id; id--) {
		printmaze(strmaze, id);
		scanf("%c", &ch);
		while ('\n' != getchar()) {
			;
		}
		*cp = ' ';
		switch (ch) {
		case 'w':
			do {
				for (i = 0; i < 9; i++) {
					if (cp == &strmaze[0][i]) {
						break;
					}
				}
				(9 == i && '*' != *(cp - 9)) && (cp -= 9);
			} while (9 == i && '*' != *(cp - 9));
			break;
		case 'a':
			do {
				for (i = 0; i < 9; i++) {
					if (cp == &strmaze[i][0]) {
						break;
					}
				}
				(9 == i && '*' != *(cp - 1)) && cp--;
			} while (9 == i && '*' != *(cp - 1));
			break;
		case 's':
			do {
				for (i = 0; i < 9; i++) {
					if (cp == &strmaze[8][i]) {
						break;
					}
				}
				(9 == i && '*' != *(cp + 9)) && (cp += 9);
			} while (9 == i && '*' != *(cp + 9));
			break;
		case 'd':
			do {
				for (i = 0; i < 9; i++) {
					if (cp == &strmaze[i][8]) {
						break;
					}
				}
				(9 == i && '*' != *(cp + 1)) && cp++;
			} while (9 == i && '*' != *(cp + 1));
			break;
		default:
			break;
		}
		*cp = 'P';
		system("cls");
	}
	'G' == strmaze[8][8] && system("color 04"), 'G' == strmaze[8][8] || system("color 0A");
	'G' == strmaze[8][8] && printf("你被冻死了\n"), 'G' == strmaze[8][8] || printf("恭喜你，你赢了\n");
	return 0;
}
*///“冰迷宫”(选自我的CSDN博客)^
/*
void printmaze(const char strmaze[9][9]) {
	int ia = 0;
	int ib = 0;
	for (ia = 0; ia < 9; ia++) {
		for (ib = 0; ib < 9; ib++) {
			printf("%c", strmaze[ia][ib]);
		}
		printf("|\n");
	}
	printf("---------@\n");
}
int main() {
	int i = 0;
	char ch = 0;
	char strmaze[9][9] = {
		"P  * *   ",
		"  * * *  ",
		"   * *   ",
		"*       *",
		" *  *  * ",
		"*       *",
		"   * *   ",
		"  * * *  ",
		"   * *   "
	};
	char* cp = &strmaze[0][0];
	system("cls");
	while (1) {
		printmaze(strmaze);
		scanf("%c", &ch);
		while ('\n' != getchar()) {
			;
		}
		*cp = ' ';
		switch (ch) {
			case 'w':
				for (i = 0; i < 9; i++) {
					if (cp == &strmaze[0][i]) {
						break;
					}
				}
				(9 == i && '*' != *(cp - 9)) && (cp -= 9);
				break;
			case 'a':
				for (i = 0; i < 9; i++) {
					if (cp == &strmaze[i][0]) {
						break;
					}
				}
				(9 == i && '*' != *(cp - 1)) && cp--;
				break;
			case 's':
			{
				for (i = 0; i < 9; i++) {
					if (cp == &strmaze[8][i]) {
						break;
					}
				}
				(9 == i && '*' != *(cp + 9)) && (cp += 9);

				break;
			case 'd':
				for (i = 0; i < 9; i++) {
					if (cp == &strmaze[i][8]) {
						break;
					}
				}
				(9 == i && '*' != *(cp + 1)) && cp++;
				break;
			case 'q':
				for (i = 0; i < 9; i++) {
					if (cp == &strmaze[i][0] || cp == &strmaze[0][i]) {
						break;
					}
				}
				(9 == i && '*' != *(cp - 10)) && (cp -= 10);
				break;
			case 'e':
				for (i = 0; i < 9; i++) {
					if (cp == &strmaze[i][8] || cp == &strmaze[0][i]) {
						break;
					}
				}
				(9 == i && '*' != *(cp - 8)) && (cp -= 8);
				break;
			case 'z':
				for (i = 0; i < 9; i++) {
					if (cp == &strmaze[i][0] || cp == &strmaze[8][i]) {
						break;
					}
				}
				(9 == i && '*' != *(cp + 8)) && (cp += 8);
				break;
			case 'c':
				for (i = 0; i < 9; i++) {
					if (cp == &strmaze[i][8] || cp == &strmaze[8][i]) {
						break;
					}
				}
				(9 == i && '*' != *(cp + 10)) && (cp += 10);
				break;
			default:
				break;
			}
		}
		*cp = 'P';
		system("cls");
	}
	return 0;
}
*///“斜向移动”^
/*
int main() {
	int i = 0;
	int ia = 0;
	int ib = 0;
	printf("百分号的长度为多少?(大小 = 百分号的长度 * 百分号的长度) -> ");
	scanf("%d", &i);
	printf("\n");
	if (1 == i) {
		printf("%c\n", '%');//防止“%\n”打印不出来
	}
	else {
		for (ia = 0; ia < i; ia++) {
			if (!ia) {
				printf("0");
				for (ib = 0; ib < i - 2; ib++) {
					printf(" ");
				}
				printf("/\n");
			}
			else if (i - 1 == ia) {
				printf("/");
				for (ib = 0; ib < i - 2; ib++) {
					printf(" ");
				}
				printf("0\n");
			}
			else {
				for (ib = 0; ib < i - 1 - ia; ib++) {
					printf(" ");
				}
				printf("/\n");
			}
		}
	}
	return 0;
}
*///百分号打印器(选自我的CSDN博客)^
/*
int main() {
	int arr[10] = { 1,4,2,6,3,8,10,7,5,9 };
	int isz = sizeof arr / sizeof arr[0];
	int i = 0;
	for (i=isz-1; i > 0; i--) {
		for (int ia = 0;ia < i;ia++) {
			if (arr[ia] > arr[ia + 1]) {
				int itmp = arr[ia];
				arr[ia] = arr[ia + 1];
				arr[ia + 1] = itmp;
			}
		}
	}
	for (i = 0; i < isz; i++) {
		printf("%d ", arr[i]);
	}
	printf("\n");
	return 0;
}
*///“冒泡排序”^
/*
void printmaze(const char strmaze[9][9], const int ia) {
	int iaa = 0;
	int ib = 0;
	for (iaa = 0; iaa < 9; iaa++) {
		for (ib = 0; ib < 9; ib++) {
			printf("\033[%sm%c", 'G' == strmaze[iaa][ib] ? "32;1" : '&' == strmaze[iaa][ib] || '#' == strmaze[iaa][ib] ? "33" : "0", strmaze[iaa][ib]);
		}
		printf("\033[0m|\n");
	}
	printf("---------@\n\033[33m钥匙总数 = %d\033[0m\n", (ia & 1) + !!(ia & 2));
}
int main() {
	int i = 0;
	int ia = 0b00;//0b00 = 0
	char ch = 0;
	char strmaze[9][9] = {
		"P* * *  *",
		"* * * **&",
		" ** * *  ",
		"** ** * *",
		"  *******",
		"**  * * *",
		"* **** * ",
		"  *  * **",
		"&* *  *#G"
	};
	char* cp = &strmaze[0][0];
	printf("欢迎你来玩这个\033[33m斜向钥匙迷宫\033[0m，在这个迷宫中，“P”是你，\033[32;1m“G”\033[0m是\033[32;1m终点\033[0m，而“*”是墙，空格是你可以走的地方，“w”往上走，“a”往左走，“s”往下走，“d”往右走，“q”往左上走，“e”往右上走，“z”往左下走，“c”往右下走，而你只要用你收集的全部的\033[33m钥匙“&”(总共有2把)\033[0m打开\033[33m门“#”\033[0m来走到\033[32;1m终点\033[0m就可以了，这就是这个\033[33m斜向钥匙迷宫\033[0m的规则");
	Sleep(6600);
	system("cls");
	while ('G' == strmaze[8][8]) {
		('&' != strmaze[1][8] && !(ia & 1)) && ia++;
		('&' != strmaze[8][0] && !(ia & 2)) && (ia += 2);//2 = 0b10
		printmaze(strmaze, ia);
		scanf("%c", &ch);
		while ('\n' != getchar()) {
			;
		}
		*cp = ' ';
		switch (ch) {
		case 'w':
			for (i = 0; i < 9; i++) {
				if (cp == &strmaze[0][i]) {
					break;
				}
			}
			(9 == i && '*' != *(cp - 9) && '#' != *(cp - 9)) && (cp -= 9);
			break;
		case 'a':
			for (i = 0; i < 9; i++) {
				if (cp == &strmaze[i][0]) {
					break;
				}
			}
			(9 == i && '*' != *(cp - 1) && '#' != *(cp - 1)) && cp--;
			break;
		case 's':
			for (i = 0; i < 9; i++) {
				if (cp == &strmaze[8][i]) {
					break;
				}
			}
			(9 == i && '*' != *(cp + 9) && '#' != *(cp + 9)) && (cp += 9);
			break;
		case 'd':
			for (i = 0; i < 9; i++) {
				if (cp == &strmaze[i][8]) {
					break;
				}
			}
			(9 == i && '*' != *(cp + 1) && '#' != *(cp + 1)) && cp++;
			break;
		case 'q':
			for (i = 0; i < 9; i++) {
				if (cp == &strmaze[i][0] || cp == &strmaze[0][i]) {
					break;
				}
			}
			(9 == i && '*' != *(cp - 10) && '#' != *(cp - 10)) && (cp -= 10);
			break;
		case 'e':
			for (i = 0; i < 9; i++) {
				if (cp == &strmaze[i][8] || cp == &strmaze[0][i]) {
					break;
				}
			}
			(9 == i && '*' != *(cp - 8) && '#' != *(cp - 8)) && (cp -= 8);
			break;
		case 'z':
			for (i = 0; i < 9; i++) {
				if (cp == &strmaze[i][0] || cp == &strmaze[8][i]) {
					break;
				}
			}
			(9 == i && '*' != *(cp + 8) && '#' != *(cp + 8)) && (cp += 8);
			break;
		case 'c':
			for (i = 0; i < 9; i++) {
				if (cp == &strmaze[i][8] || cp == &strmaze[8][i]) {
					break;
				}
			}
			(9 == i && '*' != *(cp + 10) && '#' != *(cp + 10)) && (cp += 10);
			(3 == ia && cp == &strmaze[7][6]) && (strmaze[8][7] = ' ');
			break;
		default:
			break;
		}
		*cp = 'P';
		system("cls");
	}
	system("color 0A");
	printf("恭喜你，你赢了\n");
	return 0;
}
*///斜向钥匙迷宫(选自我的CSDN博客)^
/*
int main() {
	char ch = 65;
	const char* const cp = &ch;
	//cp++;//err
	//*cp++//err
	printf("%c\n",*cp);
	return 0;
}
*///“const char* const cp”^
/*
int main() {
	char str[99999] = "";
	char* pc = str;
	char* pca = pc + 1;
	int i = 0;
	printf("请输入你想要逐字输出的汉字 -> ");
	scanf("%s", str);
	for (system("cls"); i < strlen(str) / 2; i++, pc += 2, pca += 2) {
		printf("%c%c", *pc, *pca);
		Sleep(100);
	}
	printf("\n");
	return 0;
}
*///“逐汉字输出”(选自我的CSDN博客)^
/*
int main() {
	char str[99999] = "";
	char strc[6][4] = { "1;1", "3", "2;1", "6;1", "6", "5;1" };
	char* pc = str;
	char* pca = pc + 1;
	int i = 0;
	printf("请输入你想要七彩化的汉字 -> ");
	scanf("%s", str);
	for (system("cls"); i < strlen(str) / 2; i++, pc += 2, pca += 2) {
		printf("\033[3%sm%c%c\033[0m", strc[i % 6],*pc, *pca);
	}
	printf("\n");
	return 0;
}
*///“汉字七彩化”(选自我的CSDN博客)^
/*
int main() {
	char str[10][11] = {"xE53RE}y_z","7G,c#5hzFO","^0hp^RZI0z","8<2)aURnlS","72bwC<DA?x","0xITrbN+0","<!unRtFW07","5#YIfG?r4y","P<uRb@9Yb2","rRB4(uM~d2"};//密码
	int i = 0;
	qsort(str, 10, 11, strcmp);
	for (; i < 10; i++) {
		printf("%s\n", str[i]);
	}
	printf("\n");
	return 0;
}
*///“密码排序(升序)”(选自我的CSDN博客)^
/*
int chrcmp(const void* vp, const void* vpa) {
	return *(char*)vpa - *(char*)vp;
}
int main() {
	srand((unsigned int)time(NULL));
	char str[101] = "";
	int i = 0;
	for (;i<100;i++) {
		str[i] = rand() % 95 + 32;
	}
	qsort(str, 100, 1, chrcmp);
	printf("%s\n", str);
	return 0;
}
*///“字符串的字符排序(降序)”(选自我的CSDN博客)^
/*
int intcmp(const void* vp, const void* vpa) {
	return *(int*)vpa - *(int*)vp;
}
int main() {
	int arr[10] = {1,42,3,5,7,342,54,43,3,3332};
	int i = 0;
	printf("请输入你要查询的数字 -> ");
	scanf("%d", &i);
	qsort(arr, 10, 4, intcmp);
	int* ip = ((int*)(bsearch((void*)(&i), arr, 10, 4, intcmp)));
	ip && printf("“%d”在这个有序的arr数组里", *ip), ip || printf("“%d”不在这个有序的arr数组里",i);
	return 0;
}
*///“有序数组查询”(选自我的CSDN博客)^
/*
int main() {
	char str[10][11] = { "fagsfdrefd","454fv41ddd","64vfd7#$%)","&&&%%gbdla",";;;;;h;h;o","qgsdjeh52g","alalalalal","jfhryf5555","jndhejbrfd","jfgrjhzvas" };
	char stra[11] = "";
	printf("请输入你要查询的字符串 -> ");
	scanf("%s", stra);
	qsort(str, 10, 11, strcmp);
	char* cp = ((char*)bsearch((void*)(&stra), str, 10, 11, strcmp));
	cp && printf("“%s”这个字符串在这个有序的str二维数组里", cp), cp || printf("“%s”这个字符串不在这个有序的str二维数组里",stra);
	return 0;
}
*///“有序二维字符串数组查询”(选自我的CSDN博客)^
/*
int main() {
	char str[999] = "";
	printf("请输入一个字符串 -> ");
	scanf("%s", str);
	printf("%d + 1 = %d\n%d - 1 = %d\n", atoi(str), atoi(str) + 1, atoi(str), atoi(str) - 1);
	return 0;
}
*///“字符串的加减法”(选自我的CSDN博客)^
/*
int fua() {
	return 1;
}
void fub() {
	int i = fua();
	printf("%d", 3 - i);
	
}
int main() {
	fub();
	return 0;
}
*///“回调函数”^
/*
int main() {
	char* cp = "Hello,world!";
	printf("%c\n", *cp);
	printf("%s\n", cp);
	return 0;
}
*///“*cp与cp的区别”^
/*
int main() {
	int arr[10] = { 1,4,2,3,5,6,7,67,76,5 };
	int(*arrp)[10] = &arr;
	printf("%d", (*arrp)[5]);
	return 0;
}
*///“数组指针”^
/*
int Add(int i, int ia) {
	return i + ia;
}
int main() {
	int (*funp)(int, int) = Add;
	printf("%d", funp(3, 5));
	return 0;
}
*///“函数指针”^
/*
#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
int Add(int i, int ia) {
    return i + ia;
}
int Sum(int i, int ia) {
    return i - ia;
}
int Tim(int i, int ia) {
    return i * ia;
}
int Div(int i, int ia) {
    return i / ia;
}
void calc(int(*funp)(int, int)) {
    int i = 0;
    int ia = 0;
    printf("请输入你要计算的两个整型 -> ");
    scanf("%d %d", &i, &ia);
    printf("计算的结果为：%d", funp(i, ia));
}
int main() {
    char ch = 0;
    printf("请输入一个运算符号(+-*/) -> ");
    scanf("%c", &ch);
    switch (ch) {
    case '+':
        calc(Add);
        break;
    case '-':
        calc(Sum);
        break;
    case '*':
        calc(Tim);
        break;
    case '/':
        calc(Div);
        break;
    default:
        break;
    }
    return 0;
}
*///“简易整型计算器”(选自我的CSDN博客)^
/*
int Add(int i, int ia) {
    return i + ia;
}
int Sum(int i, int ia) {
    return i - ia;
}
int Tim(int i, int ia) {
    return i * ia;
}
int Div(int i, int ia) {
    return i / ia;
}
int Mod(int i, int ia) {
    return i % ia;
}
int Pow(int i, int ia) {
    return (int)pow(i,ia);
}
void calc(int(*funp)(int, int)) {
    int i = 0;
    int ia = 0;
    printf("请输入你要计算的两个整型 -> ");
    scanf("%d %d", &i, &ia);
    printf("计算的结果为：%d", funp(i, ia));
}
int main() {
    int i = 0;
    printf("**********************************\n");
    printf("* 1.Add(+)   2.Sum(-)   3.Tim(*) *\n");
    printf("* 4.Div(/)   5.Mod(%c)   6.Pow(^) *\n",'%');
    printf("**********************************\n");
    scanf("%d", &i);
    int (*funarp[6])(int, int) = { Add,Sum,Tim,Div,Mod,Pow };
    if (i > 0 && i < 7) {
        calc(funarp[i - 1]);
    }
    return 0;
}
*///“简易整型计算器(加强版)”(选自我的CSDN博客)^
/*
int main() {
	int* ip = malloc(4);
	*ip = 5;
	printf("%d", *ip);
	free(ip);
	ip = NULL;
	return 0;
}
*///“malloc函数与free函数”^
/*
int main() {
	srand((size_t)time(NULL));
	int i = 0;
	int ia = 0;
	scanf("%d", &i);
	char* strp = malloc(i);
	for (; ia < i; ia++) {
		strp[ia] = rand() % 127;
	}
	printf("%s", strp);
	free(strp);
	return 0;
}
*///“随机乱码打印”(选自我的CSDN博客)^
/*
int main() {
	srand((size_t)time(NULL));
	int i = 0;
	int ia = 0;
	scanf("%d", &i);
	int* arrp = malloc(4 * i);
	for (; ia < i; ia++) {
		arrp[ia] = rand();
	}
	for (ia = 0; ia < i; ia++) {
		printf("%d ", arrp[ia]);
	}
	free(arrp);
	return 0;
}
*///“随机数组打印”(选自我的CSDN博客)^
/*
int main() {
	char str[99] = "";
	char stra[99] = "";
	scanf("%s %s", str, stra);
	printf("%s", strstr(str,stra) ? "YES\n" : "NO\n");
	return 0;
}
*///“判断一个字符串是否包含另一个字符串”(选自我的CSDN博客)^
/*
int IsStrSpin(char* str, char* stra) {
	if (strlen(str) != strlen(stra)) {
		return 0;
	}
	strncat(str, str, strlen(str));
	return !!strstr(str, stra);
}
int main() {
	char str[99] = "";
	char stra[99] = "";
	scanf("%s %s", str, stra);
	printf("%s",IsStrSpin(str, stra) ? "YES\n" : "NO\n");
	return 0;
}
*///“判断一个字符串是否由另一个字符串旋转得来的”(选自我的CSDN博客)^
/*
int main() {
	char str[99] = "";
	char stra[99] = "";
	scanf("%s %s", str, stra);
	char* cp = strpbrk(str, stra);
	cp && printf("字符%c在整个str字符串里的下标为：%d\n", *cp, cp - str),cp || printf("定位失败,cp为NULL\n");
	return 0;
}
*///“定位字符串中的字符”(选自我的CSDN博客)^
/*
int main() {
	int iconut = 0;
	char str[999] = "";
	char* cp = str;
	printf("请输入你想要从中查询元音字母的个数的字符串 -> ");
	scanf("%s", str);
	for (; cp = strpbrk(cp, "aeiouAEIOU");cp++, iconut++) {
		;
	}
	printf("%s的元音字母个数：%d", str, iconut);
	return 0;
}
*///“求元音字母(a e i o u A E I O U)的个数”(选自我的CSDN博客)^
/*
int main() {
	int i = 0;
	int ia = 0;
	char str[99999] = "";
	const char stra[11] = "RYGBW13247";//红41 黄43 绿42 蓝44 白47
	printf("欢迎你来用这个电子画板，在这画板中，你可以输入一些东西来绘制你自己的画，其中，“R”代表\033[31m红色\033[0m，“B”代表\033[34m蓝色\033[0m，“Y”代表\033[33m黄色\033[0m，“G”代表\033[32m绿色\033[0m，“W”代表白色，而其它的东西则代表了\033[7m黑色\033[0m，并且，“/”可以结束你对这个电子画板的绘制，这就是这个电子画板的用法");
	Sleep(6770);
	system("cls");
	while ((str[i++] = getchar()) - '/') {
		;
	}
	system("cls");
	for (i = 0; '/' != str[i]; i++) {
		for (ia = 0; ia < 5; ia++) {
			if (str[i] == stra[ia]) {
				break;
			}
		}
		5 == ia || printf("\033[4%cm \033[0m", stra[ia + 5]), 5 == ia && printf(" ");
		'\n' == str[i] && printf("\n");
	}
	return 0;
}
*///“电子画板”(选自我的CSDN博客)^
/*
int main() {
	int i = 0;
	for (; i < 44; i++) {
		printf("%s\n", strerror(i));
	}
	return 0;
}
*///“strerror函数”^
/*
/*
int main() {
	char str[999] = "";
	int i = 0;
	printf("请输入你想要大小写互换的字符串 -> ");
	scanf("%s", str);
	for (; str[i]; i++) {
		if (str[i] >= 'A' && str[i] <= 'Z') {
			str[i] = tolower(str[i]);
		}
		else if (str[i] >= 'a' && str[i] <= 'z') {
			str[i] = toupper(str[i]);
		}
	}
	printf("\n%s", str);
	return 0;
}
*///“大小写互换”(选自我的CSDN博客)^
/*
int main() {
	char str[999] = "";
	int i = 0;
	printf("请输入你想要全转成小写的字符串 -> ");
	scanf("%s", str);
	for (; str[i]; i++) {
		if (str[i] >= 'A' && str[i] <= 'Z') {
			str[i] = tolower(str[i]);
		}
	}
	printf("\n%s", str);
	return 0;
}
*///“全转成小写”(选自我的CSDN博客)^
/*
int main() {
	int i = 0;
	double arr[5] = { 1.2,2.3,3.3,4.4,5.5 };
	double arra[5] = { 0 };
	int isz = sizeof arr / sizeof arr[0];
	memcpy(arra,arr,40);
	for (; i < isz; i++) {
		printf("%lf ", arra[i]);
	}
	return 0;
}
*///“浮点型数组拷贝”(选自我的CSDN博客)^
/*
int main() {
	int arr[3][3] = { 1,2,3,4,5,6,76,8,91 };
	int* arrp[3] = { arr[0],arr[1],arr[2] };
	int* arrpa[3] = { &arr[0][1],&arr[1][1], &arr[2][1] };
	int isz = sizeof arrpa / sizeof arrpa[0];
	memcpy(arrpa, arrp, sizeof &arr*isz);
	printf("%d %d %d\n", *(arrpa[0]), *(arrpa[1]), *(arrpa[2]));
	return 0;
}
*///“指针数组拷贝”(选自我的CSDN博客)^
/*
int main() {
	int i = 0;
	int arr[100] = { 1, 3, 4, 5, 6, 0 };
	memmove(arr + 5, arr, 20);
	memmove(arr + 10, arr, 40);
	for (; i < 20; i++) {
		printf("%d ", arr[i]);
	}
	return 0;
}
*///“数组*4”(选自我的CSDN博客)^
/*
int main() {
	int i = 0;
	int im = 0;
	int arr[999] = { 1, 3, 4, 5, 6, 0 };
	printf("你要移动几位? -> ");
	scanf("%d", &im);
	for (; i < 5 + im; i++) {
		printf("%d ", arr[i]);
	}
	printf("\n");
	memmove(arr + im, arr, 20);
	for (i = 0; i < im; i++) {
		arr[i] = 0;
	}
	for (i = 0; i < 5 + im; i++) {
		printf("%d ", arr[i]);
	}
	return 0;
}
*///“数组内容移动”(选自我的CSDN博客)^
/*
int main() {
	int arr[4] = { 3,5,6,7 };
	int arra[4] = { 3,5,6,7 };
	printf("%d\n", memcmp(arr, arra, 16));
	return 0;
}
*///“比较整型数组”(选自我的CSDN博客)^
/*
struct Moster {
	int x;
	int y;
	char direction;
};
int main() {
	struct Moster m = { 7,5,'S' };
	struct Moster ma = { 3,9,'W' };
	printf("%d", memcmp(&m, &ma, sizeof(struct Moster)));
}
*///“比较结构体变量”(选自我的CSDN博客)^
/*
struct abc {
	int a : 3;
	int b : 5;
	int c : 10;
	int d : 30;
};
int main() {
	struct abc e = { 11,45,14,58 };
	printf("%d %d %d %d\n", e.a, e.b, e.c, e.d);
	return 0;
}
*///“位段”^
/*
struct {
	int i;
	int ia;
}a;
int main() {
	a.i = 1;
	printf("%d", a.i);
	return 0;
}
*///“匿名结构体”^
/*
enum Option {
    ADD = 1,
    SUM,
    TIM,
    DIV,
    MOD,
    POW,
    LMOVE,
    RMOVE
};
int Add(int i, int ia) {
    return i + ia;
}
int Sum(int i, int ia) {
    return i - ia;
}
int Tim(int i, int ia) {
    return i * ia;
}
int Div(int i, int ia) {
    return i / ia;
}
int Mod(int i, int ia) {
    return i % ia;
}
int Pow(int i, int ia) {
    return (int)pow(i, ia);
}
int Rmv(int i, int ia) {
    return i >> ia;
}
int Lmv(int i, int ia) {
    return i << ia;
}
void calc(int(*funp)(int, int)) {
    int i = 0;
    int ia = 0;
    printf("请输入你要计算的两个整型 -> ");
    scanf("%d %d", &i, &ia);
    printf("计算的结果为：%d", funp(i, ia));
}
int main() {
    int i = 0;
    printf("**********************************\n");
    printf("* 1.Add(+)   2.Sum(-)   3.Tim(*) *\n");
    printf("* 4.Div(/)   5.Mod(%c)   6.Pow(^) *\n", '%');
    printf("* 7.Rmv(>>)  8.Lmv(<<)           *\n");
    printf("**********************************\n");
    scanf("%d", &i);
    switch (i) {
    case ADD:
        calc(Add);
        break;
    case SUM:
        calc(Sum);
        break;
    case TIM:
        calc(Tim);
        break;
    case DIV:
        calc(Div);
        break;
    case MOD:
        calc(Mod);
        break;
    case POW:
        calc(Pow);
        break;
    case LMOVE:
        calc(Lmv);
        break;
    case RMOVE:
        calc(Rmv);
        break;
    default:
        break;
    }
    return 0;
}
*///“简易计算器枚举版”(选自我的CSDN博客)^
/*
union un {
	int i;
	char c;
};
int main() {
	union un u = { 35 };
	printf("%d %c\n", u.i, u.c);
	return 0;
}
*///“union联合体”^
/*
union un {
	int i;
	char c;
};
int main() {
	union un u = { 1 };
	printf("%s\n", u.c ? "小端" : "大端");
	return 0;
}
*///“C语言union联合”(选自我的CSDN博客)^
/*
union {
	int i;
	char c;
} u;
int main() {
	u = { 1 };
	printf("%s\n", u.c ? "小端" : "大端");
	return 0;
}
*///“匿名联合”^
/*
enum color {
	Y,
	B,
	R
};
typedef struct Key {
	enum color co;
	int ix;
	int iy;
}Key;
typedef struct Door {
	enum color co;
	int ix;
	int iy;
}Door;
void printmaze(char strmaze[11][11], int* apkeys, Key(*k)[12], Door(*d)[29]) {
	const char sarr[3][5] = { "33","36","31;1" };
	Key* ka = *k;
	Door* da = *d;
	const Key* const kb = *k + 11;
	const Door* const db = *d + 28;
	int ia = 0;
	int ib = 0;
	char stc[5] = "";
	for (ia = 0; ia < 11; ia++) {
		for (ib = 0; ib < 11; ib++) {
			while (ka->ix <= ia) {
				if (ka->iy == ib && ka->ix == ia) {
					strcpy(stc, sarr[ka->co]);
				}
				if (ka == kb) { 
					break; 
				}
				ka++;
			}
			while (da->ix <= ia) {
				if (da->iy == ib && da->ix == ia) {
					strcpy(stc, sarr[da->co]);
				}
				if (da == db) {
					break;
				}
				da++;
			}
			printf("\033[%sm%c\033[0m", 'G' == strmaze[ia][ib] ? "32;1" : !!strcmp(stc,"33") + !!strcmp(stc,"36") + !!strcmp(stc,"31;1") == 2 && 'P' != strmaze[ia][ib] && '*' != strmaze[ia][ib] ? stc : "0", strmaze[ia][ib]);
			ka = *k;
			da = *d;
			strcpy(stc, "");
		}
		printf("|\n");
	}
	printf("-----------@\n\033[33m黄钥匙*%d\033[0m\n\033[36m蓝钥匙*%d\033[0m\n\033[31;1m红钥匙*%d\033[0m\n", apkeys[0], apkeys[1], apkeys[2]);
}
int main() {
	int apkeys[3] = { 0 };
	Key k[12] = { {R,0,5},{Y,0,6},{B,0,8},{R,2,3},{B,3,4},{B,3,6},{Y,4,3},{R,4,7},{Y,6,3},{Y,6,4},{Y,7,1},{Y,9,0} };
	Door d[29] = { {B,0,7}, {Y,0,10}, {Y,1,0}, {B,1,1}, {R,1,3}, {B,1,6}, {Y,1,9}, {B,1,10}, {B,2,9}, {Y,3,0}, {Y,4,8}, {Y,5,0}, {Y,7,7}, {Y,7,8}, {B,7,9}, {Y,7,10}, {Y,8,0}, {R,8,5}, {Y,8,7}, {R,8,8}, {B,8,9}, {B,8,10}, {B,9,7}, {B,9,8}, {R,9,9}, {R,9,10}, {Y,10,7}, {B,10,8}, {R,10,9} };
	const Key ka[12] = { {R,0,5},{Y,0,6},{B,0,8},{R,2,3},{B,3,4},{B,3,6},{Y,4,3},{R,4,7},{Y,6,3},{Y,6,4},{Y,7,1},{Y,9,0} };
	const Door da[29]= { {B,0,7}, {Y,0,10}, {Y,1,0}, {B,1,1}, {R,1,3}, {B,1,6}, {Y,1,9}, {B,1,10}, {B,2,9}, {Y,3,0}, {Y,4,8}, {Y,5,0}, {Y,7,7}, {Y,7,8}, {B,7,9}, {Y,7,10}, {Y,8,0}, {R,8,5}, {Y,8,7}, {R,8,8}, {B,8,9}, {B,8,10}, {B,9,7}, {B,9,8}, {R,9,9}, {R,9,10}, {Y,10,7}, {B,10,8}, {R,10,9} };
	int i = 0;
	int ia = 0;
	char ch = 0;
	char strmaze[11][11] = {
		' ',' ',' ',' ','*','+','+','#','+',' ','#',
		'#','#','*','#','*','*','#',' ',' ','#','#',
		' ',' ','*','+',' ','*','*','*','*','#',' ',
		'#',' ','*',' ','+','*','+',' ','*','*',' ',
		' ',' ','*','+',' ','*',' ','+','#',' ',' ',
		'#','*','*','*','*','*','*','*','*','*',' ',
		' ',' ','*','+','+','*',' ',' ',' ',' ',' ',
		' ','+','*','*',' ','*',' ','#','#','#','#',
		'#',' ',' ','*',' ','#',' ','#','#','#','#',
		'+','*',' ','*','*',' ',' ','#','#','#','#',
		'P','*',' ',' ',' ',' ',' ','#','#','#','G'
	};
	const char strmz[] = "    *++#+ ###*#**#  ##  *+ ****# # * +*+ **   *+ * +#  #*********   *++*      +** * #####  * # ####+* **  ####P*     ###G";
	char* cp = &strmaze[10][0];
	printf("欢迎你来玩这个\033[33m钥\033[36m匙\033[31;1m迷宫\033[0m，这个迷宫的规则与50层魔塔的规则基本无异，只不过输入“r”可以使你重新开始这个游戏，而且，这三种颜色的“+”：“\033[33m+\033[0m”“\033[36m+\033[0m”“\033[31;1m+\033[0m”分别代表了50层魔塔里的\033[33m黄钥匙\033[0m，\033[36m蓝钥匙\033[0m和\033[31;1m红钥匙\033[0m，并且那三种颜色的“#”：“\033[33m#\033[0m”“\033[36m#\033[0m”“\033[31;1m#\033[0m”分别代表了50层魔塔里的\033[33m黄门\033[0m，\033[36m蓝门\033[0m和\033[31;1m红门\033[0m，你明白了吗?");
	Sleep(6600);
	system("cls");
	while ('G' == strmaze[10][10]) {
		int ix = (cp - &strmaze[0][0]) / 11;
		int iy = (cp - &strmaze[0][0]) % 11;
		for (ia = 0; ia < 12; ia++) {
			if (k[ia].ix == ix && k[ia].iy == iy && -2 != k[ia].ix + k[ia].iy) {
				apkeys[k[ia].co]++;
				k[ia].ix = -1;
				k[ia].iy = -1;
			}
		}
		printmaze(strmaze, apkeys, &k, &d);
		scanf("%c", &ch);
		while ('\n' != getchar()) {
			;
		}
		*cp = ' ';
		switch (ch) {
		case 'w':
			for (i = 0; i < 11; i++) {
				if (cp == &strmaze[0][i]) {
					break;
				}
			}
			(11 == i && '*' != *(cp - 11) && '#' != *(cp - 11)) && (cp -= 11);
			for (ia = 0; ia < 29; ia++) {
				if (apkeys[d[ia].co] > 0 && -1 != d[ia].ix && -1 != d[ia].iy && d[ia].ix == ix - 1 && d[ia].iy == iy) {
					strmaze[d[ia].ix][d[ia].iy] = ' ';
					apkeys[d[ia].co]--;
					d[ia].ix = -1;
					d[ia].iy = -1;
				}
			}
			break;
		case 'a':
			for (i = 0; i < 11; i++) {
				if (cp == &strmaze[i][0]) {
					break;
				}
			}
			(11 == i && '*' != *(cp - 1) && '#' != *(cp - 1)) && cp--;
			for (ia = 0; ia < 29; ia++) {
				if (apkeys[d[ia].co] > 0 && -1 != d[ia].ix && -1 != d[ia].iy && d[ia].ix == ix && d[ia].iy == iy - 1) {
					strmaze[d[ia].ix][d[ia].iy] = ' ';
					apkeys[d[ia].co]--;
					d[ia].ix = -1;
					d[ia].iy = -1;
				}
			}
			break;
		case 's':
			for (i = 0; i < 11; i++) {
				if (cp == &strmaze[10][i]) {
					break;
				}
			}
			(11 == i && '*' != *(cp + 11) && '#' != *(cp + 11)) && (cp += 11);
			for (ia = 0; ia < 29; ia++) {
				if (apkeys[d[ia].co] > 0 && -1 != d[ia].ix && -1 != d[ia].iy && d[ia].ix == ix + 1 && d[ia].iy == iy) {
					strmaze[d[ia].ix][d[ia].iy] = ' ';
					apkeys[d[ia].co]--;
					d[ia].ix = -1;
					d[ia].iy = -1;
				}
			}
			break;
		case 'd':
			for (i = 0; i < 11; i++) {
				if (cp == &strmaze[i][10]) {
					break;
				}
			}
			(11 == i && '*' != *(cp + 1) && '#' != *(cp + 1)) && cp++;
			for (ia = 0; ia < 29; ia++) {
				if (apkeys[d[ia].co] > 0 && -1 != d[ia].ix && -1 != d[ia].iy && d[ia].ix == ix && d[ia].iy == iy + 1) {
					strmaze[d[ia].ix][d[ia].iy] = ' ';
					apkeys[d[ia].co]--;
					d[ia].ix = -1;
					d[ia].iy = -1;
				}
			}
			break;
		case 'r':
			for (ia = 0; ia < 12; ia++) {
				k[ia] = ka[ia];
				d[ia] = da[ia];
			}
			for (; ia < 29; ia++) {
				d[ia] = da[ia];
			}
			for (i = 0; i < 121; i++) {
				strmaze[0][i] = strmz[i];
			}
			cp = &strmaze[10][0];
			for (i = 0; i < 3; i++) {
				apkeys[i] = 0;
			}
			break;
		default:
			break;
		}
		*cp = 'P';
		system("cls");
	}
	system("color 0A");
	printf("恭喜你，你赢了\n");
	return 0;
}
*///“C语言钥匙迷宫2.0”(选自我的CSDN博客)^
/*
int main() {
	long long ll = 0;
	int isz = 0;
	printf("请输入一个初始数 -> ");
	scanf("%lld", &ll);
	printf("请输入这个随机降序数列的大小 -> ");
	scanf("%d", &isz);
	for (; isz > 0; isz--) {
		isz % 2 || ((ll*=((ll-=114514) /= (ll*=6))+isz)), isz % 2 && (ll*=(long long)pow((isz/ll, ll/isz),++ll-isz));
		printf("%lld ", ll);
	}
	printf("\n");
	return 0;
}
*///“随机降序数列生成器”^
/*
char strmap[19][19] = { 0 };
void printmap(char strmap[19][19]) {
	int i = 0;
	int ia = 0;
	const char strco[6][4] = { "1;1","3","2;1","6;1","6","5;1" };
	for (; i < 19; i++) {
		for (ia = 0; ia < 19; ia++) {
			printf("\033[3%sm%c\033[0m", strco[rand() % 6], strmap[i][ia]);
		}
		printf("|\n");
	}
	printf("-------------------@");
}
enum WASD {
	N,
	W,
	A,
	S,
	D
};
typedef struct jin {
	enum WASD w;
	unsigned char cx:5;
	unsigned char cy:5;
}jin;
jin jarrp[9999999] = { {W,9,9} };
void del(char strmap[19][19], jin* jp, jin* jpa) {
	strmap[jp->cx][jp->cy] = ' ';
	*jp = *(jpa - 1);
	jpa->w = N;
}
void loop(char strmap[19][19], jin* jp, int isz, int* ipa, int* ipc) {
	int i = 0;
	int ia = 0;
	for (; i < 19; i++) {
		for (ia = 0; ia < 19; ia++) {
			if ('#'==strmap[i][ia]) {
				goto g;
			}
		}
	}
g:
	if (19 == i && 19 == ia) {
		memset(jp, 0, isz);
		strmap[9][10] = '#';//因为往上移动会偏移
		jp->cx = 9;//因为往上移动会偏移
		jp->cy = 10;//因为往上移动会偏移
		jp->w = W;
		*ipa = 2;
		*ipc = 0;
	}
}
int main() {
	int i = 0;
	int ib = 0;
	int ia = 2;
	int ic = 0;
	memset(strmap, ' ', sizeof strmap);
	srand((size_t)time(NULL));
	jin* jpa = jarrp;
	for (;;ib++) {
		jin* jp = jarrp;
		for (; jp->w; jp++) {
			;
		}
		jpa = jp;
		for (jp = jarrp; jp->w; jp++) {
			if (ib % 2) {
				//动
				switch (jp->w) {
				case W:
					jp->cy--;
					break;
				case A:
					jp->cx--;
					break;
				case S:
					jp->cy++;
					break;
				case D:
					jp->cx++;
					break;
				default:
					break;
				}
			}
			else {
				if (!(jp->cx) || 18 == jp->cx || !(jp->cy) || 18 == jp->cy) {
					//尽
					del(strmap, jp, jpa);
				}
				else {
					//绽
					if (jp == jpa) {
						break;
					}
					for (i = 0; i < 4; i++) {
						(jp + i + (ia > 1 ? 1 : ia) + ic)->cx = jp->cx;
						(jp + i + (ia > 1 ? 1 : ia) + ic)->cy = jp->cy;
						(jp + i + (ia > 1 ? 1 : ia) + ic)->w = ((enum WASD)(i + 1));
					}
					ic += 4; 
					ia--;
				}
			}
		}
		for (jp = jarrp; jp->w; jp++) {
			strmap[jp->cx][jp->cy] = '#';
		}
		printmap(strmap);
		Sleep(100);
		system("cls");
		loop(strmap, jarrp, sizeof jarrp, &ia, &ic);
		for (jp = jarrp; jp->w; jp++) {
			strmap[jp->cx][jp->cy] = ' ';
		}
	}
	return 0;
}//绽/尽 --> 动 --> 绽/尽 --> ...
*///“C语言绽尽之‘#’”(选自我的CSDN博客)^
/*
int main() {
	perror("main");
	int* arr = (int*)malloc(6E80);
	perror("main");
	return 0;
}
*///“perror函数”^
/*
enum WASD {
	N,
	W,
	A,
	S,
	D,
};
typedef struct Moster {
	enum WASD w;
	int ix;
	int iy;
}Moster;
void printmap(const char strmap[11][11], const int ir) {
	int ia = 0;
	int ib = 0;
	for (ia = 0; ia < 11; ia++) {
		for (ib = 0; ib < 11; ib++) {
			printf("\033[%sm%c\033[0m", '&' == strmap[ia][ib] ? "31;1" : "0", strmap[ia][ib]);
		}
		printf("|\n");
	}
	printf("-----------@\n\033[%sm你已挺过%d回合\033[0m\n", ir>99 ? "32;1" : "0", ir);
}
int main() {
	system("color 07");
	srand((unsigned int)time(NULL));
	int i = 0;
	int im = 0;
	int ims = 0;
	int ir = 0;
	int is = 0;
	char ch = 0;
	char strmap[11][11] = {
		'P',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',
		' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',
		' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',
		' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',
		' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',
		' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',
		' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',
		' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',
		' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',
		' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',
		' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' '
	};
	char* cp = &strmap[0][0];
	printf("欢迎你来玩这个名叫真男人就挺过100回合的游戏，在这个游戏中，“P”是你，空格是你可以走的地方，而怪物“\033[31;1m&\033[0m”是你要躲避的东西，如果你跟怪物接触，那你就\033[31;1m泗\033[0m了，这就是这个游戏的规则");
	Sleep(4500);
	system("cls");
	const Moster* const m=(Moster*)calloc(1000, sizeof(Moster));
	Moster* mm = m;
	for (; !is; ir++) {
		printmap(strmap, ir);
		Moster* ma = m;
		for (; ma->w; ma++) {
			;
		}
		const Moster* mb = ma;
		ma = m;
		scanf("%c", &ch);
		while ('\n' != getchar()) {
			;
		}
		*cp = ' ';
		switch (ch) {
		case 'w':
			for (i = 0; i < 11; i++) {
				if (cp == &strmap[0][i]) {
					break;
				}
			}
			11 == i && (cp -= 11);
			break;
		case 'a':
			for (i = 0; i < 11; i++) {
				if (cp == &strmap[i][0]) {
					break;
				}
			}
			11 == i && cp--;
			break;
		case 's':
			for (i = 0; i < 11; i++) {
				if (cp == &strmap[10][i]) {
					break;
				}
			}
			11 == i && (cp += 11);
			break;
		case 'd':
			for (i = 0; i < 11; i++) {
				if (cp == &strmap[i][10]) {
					break;
				}
			}
			11 == i && cp++;
			break;
		default:
			break;
		}//P走(可跳)
		*cp = 'P';
		system("cls");
		int ix = (cp - &strmap[0][0]) / 11;
		int iy = (cp - &strmap[0][0]) % 11;
		for (; im && ma->w ;ma++) {
			if (ma->ix == ix && ma->iy == iy) {
				is = 1;
			}
		}//P碰怪?/怪碰P?
		for (ma = m; ma != mb; ma++) {
			strmap[ma->ix][ma->iy] = ' ';
		}
		for (ims = ir / 10 + 1, ma = m; ims; mm++, im++, ims--) {
			do {
				mm->ix = rand() % 11;
				mm->iy = rand() % 11;
			} while (mm->ix == ix && mm->iy == iy);
			mm->w = (enum WASD)(rand() % 4 + 1);
		}//怪生
		for (ma = m; ma->w; ma++) {
			switch (ma->w) {
			case W:
				!(ma->ix) && ma->ix--;
				break;
			case A:
				!(ma->iy) && ma->iy--;
				break;
			case S:
				10 != ma->ix && ma->ix++;
				break;
			case D:
				10 != ma->iy && ma->iy++;
				break;
			default:
				break;
			}
			ma->w = (enum WASD)(rand() % 4 + 1);
		}//怪走&换方向
		for (ma = m; ma->w; ma++) {
			if (ma->ix == ix && ma->iy == iy) {
				is = 1;
			}
		}//P碰怪?/怪碰P?
		for (ma = m; ma != mb; ma++) {
			strmap[ma->ix][ma->iy] = '&';
		}
	}
	system("color 0C");
	printf("恭喜你，你泗了\n");
	free(m);
	return 0;
}//是真男人就挺过100回合:P走(可跳) P碰怪? 怪生(&)走 怪换方向 怪碰P? --> P走
*///“C语言是真男人就挺过100回合”(选自我的CSDN博客)^
/*
enum WASD {
	N,
	W,
	A,
	S,
	D,
};
typedef struct Moster {
	enum WASD w;
	int ix;
	int iy;
}Moster;
int main() {
	printf("%d %d %d\n", offsetof(Moster, w), offsetof(Moster, ix), offsetof(Moster, iy));
	return 0;
}
*///“返回结构体的成员的偏移量的宏——offsetof宏”^
/*
void printmaze(const char strmaze[11][11]) {
	int ia = 0;
	int ib = 0;
	for (ia = 0; ia < 11; ia++) {
		for (ib = 0; ib < 11; ib++) {
			printf("%c", strmaze[ia][ib]);
		}
		printf("|\n");
	}
	printf("-----------@\n");
}
int main() {
	int i = 0;
	int iq = 0;
	const int arr[6] = { 5,5,8,5,8,6 };
	char ch = 0;
	char strmaze[11][11] = {
		'P',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',
		' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',
		' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',
		' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',
		' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',
		' ',' ',' ',' ',' ','*',' ',' ','*',' ',' ',
		' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',
		' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',
		' ',' ',' ',' ',' ',' ','*',' ',' ',' ',' ',
		' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',
		' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' '
	};
	char* cp = &strmaze[0][0];
	char* cpb = cp;
	printf("欢迎你来玩这个一笔画迷宫，在这个游戏中，“P”是你，空格是你可以走的地方，输入“r”即可重置迷宫，并且你每走一步，就会拉出一堵墙，而你只要用拉出的墙把这个迷宫中的所有空格都变没，就可以取得这个迷宫的\033[32;1m胜利\033[0m了，这就是这个迷宫的规则");
	Sleep(6300);
	system("cls");
	while (117 != iq) {//一笔画完成? --> (-是->赢-->end -否->记录移动前的地址)
		cpb = cp;//记录移动前的地址
		printmaze(strmaze);
		scanf("%c", &ch);
		while ('\n' != getchar()) {
			;
		}
		*cp = ' ';
		switch (ch) {
		case 'w':
			for (i = 0; i < 11; i++) {
				if (cp == &strmaze[0][i]) {
					break;
				}
			}
			11 == i && '*' != *(cp - 11) && (cp -= 11);
			break;
		case 'a':
			for (i = 0; i < 11; i++) {
				if (cp == &strmaze[i][0]) {
					break;
				}
			}
			11 == i && '*' != *(cp - 1) && cp--;
			break;
		case 's':
			for (i = 0; i < 11; i++) {
				if (cp == &strmaze[10][i]) {
					break;
				}
			}
			11 == i && '*' != *(cp + 11) && (cp += 11);
			break;
		case 'd':
			for (i = 0; i < 11; i++) {
				if (cp == &strmaze[i][10]) {
					break;
				}
			}
			11 == i && '*' != *(cp + 1) && cp++;
			break;
		case 'r':
			cp = &strmaze[0][0];
			cpb = cp;
			memset(strmaze, ' ', sizeof strmaze);
			strmaze[0][0] = 'P';
			for (i = 0, iq = 0; i < 3; i++) {
				strmaze[arr[i]][arr[i + 3]] = '*';
			}
			break;//r重置
		default:
			break;
		}
		if (cp != cpb) {
			*cpb = '*';
			iq++;
		}//移动前的地址 == 移动后的地址? -->(-是->不拉墙 -否->拉墙)
		*cp = 'P';
		system("cls");
	}
	system("color 0A");
	printf("恭喜你，你赢了\n");
	return 0;
}//一笔画迷宫:记录移动前的地址 --> 移动前的地址 == 移动后的地址? -->(-是->不拉墙 -否->拉墙) --> 一笔画完成? --> (-是->赢-->end -否->记录移动前的地址)(r重置)
*///“C语言一笔画迷宫”(选自我的CSDN博客)^
/*
int main() {
	printf("%-7s%7s\n", "Hello,", "world!");
	return 0;
}
*///“‘%7s’和‘%-7s’”^
/*
enum WASD {
	W,
	A,
	S,
	D
};
void printmaze(const char strmaze[11][11], const int ip, const int ic) {
	int ia = 0;
	int ib = 0;
	for (ia = 0; ia < 11; ia++) {
		for (ib = 0; ib < 11; ib++) {
			printf("\033[%sm%c\033[0m",'G' == strmaze[ia][ib] ? "32;1" : "0", strmaze[ia][ib]);
		}
		printf("|\n");
	}
	printf("-----------@\n\033[%sm破墙镐*%d%s\n\033[%sm对称飞*%d%s\033[0m\n", ip ? "0" : "30;1", ip, ip ? "(q)" : "", ic ? "0" : "30;1", ic, ic ? "(e)" : "");
}
int main() {
	enum WASD wp = W;
	int i = 0;
	int ip = 4;
	int ic = 2;
	char ch = 0;
	char strmaze[11][11] = {
		'P','*',' ','*',' ',' ',' ','*',' ',' ','*',
		'*',' ',' ','*','*','*','*',' ','*','*',' ',
		' ',' ',' ','*','*',' ','*',' ','*','*',' ',
		'*','*','*','*','*','*','*',' ','*','*',' ',
		' ','*','*','*',' ','*',' ','*','*','*',' ',
		'*',' ','*','*','*','G','*','*','*','*',' ',
		'*',' ',' ','*',' ','*','*','*','*','*',' ',
		'*','*','*','*',' ','*','*','*',' ',' ',' ',
		'*','*','*','*','*','*','*','*',' ','*','*',
		' ',' ',' ','*','*','*','*','*','*','*','*',
		'*',' ',' ',' ',' ','*',' ',' ','*','*',' '
	};
	char* rmaze = malloc(122 * sizeof(char));
	char* rmazea = rmaze;
	rmaze = "P* *   *  **  **** **    ** * ** ******* **  *** * *** * ***G**** *  * ***** **** ***   ******** **   *********    *  ** ";
	char* cp = &strmaze[0][0];
	printf("\033[0m欢迎你来玩破墙镐对称飞迷宫，在这个迷宫中，“P”是你，空格是你可以走的地方，“\033[32;1mG\033[0m”为\033[32;1m终点\033[0m，输入“q”来用掉一把破墙镐来破掉你面前的墙，输入“e”来使用对称飞飞到你与迷宫的中心点中心对称的一个点，输入“r”即可重置迷宫，而你只要走到\033[32;1m终点\033[0m，就可以\033[32;1m赢\033[0m了，你听懂了吗?");
	Sleep(6400);
	system("cls");
	while ('G' == strmaze[5][5]) {
		int ix = (cp - &strmaze[0][0]) / 11;
		int iy = (cp - &strmaze[0][0]) % 11;
		printmaze(strmaze, ip, ic);
		scanf("%c", &ch);
		while ('\n' != getchar()) {
			;
		}
		*cp = ' ';
		switch (ch) {
		case 'w':
			for (i = 0; i < 11; i++) {
				if (cp == &strmaze[0][i]) {
					break;
				}
			}
			11 == i && '*' != *(cp - 11) && (cp -= 11);
			wp = W;
			break;
		case 'a':
			for (i = 0; i < 11; i++) {
				if (cp == &strmaze[i][0]) {
					break;
				}
			}
			11 == i && '*' != *(cp - 1) && cp--;
			wp = A;
			break;
		case 's':
			for (i = 0; i < 11; i++) {
				if (cp == &strmaze[10][i]) {
					break;
				}
			}
			11 == i && '*' != *(cp + 11) && (cp += 11);
			wp = S;
			break;
		case 'd':
			for (i = 0; i < 11; i++) {
				if (cp == &strmaze[i][10]) {
					break;
				}
			}
			11 == i && '*' != *(cp + 1) && cp++;
			wp = D;
			break;
		case 'q':
			if (ip) {
				int ipa = 0;
				switch (wp) {
				case W:
					(ix && '*' == *(cp - 11)) && (*(cp - 11) = ' ', ipa = 1);
					break;
				case A:
					(iy && '*' == *(cp - 1)) && (*(cp - 1) = ' ', ipa = 1);
					break;
				case S:
					(10 != ix && '*' == *(cp + 11)) && (*(cp + 11) = ' ', ipa = 1);
					break;
				case D:
					(10 != iy && '*' == *(cp + 1)) && (*(cp + 1) = ' ', ipa = 1);
					break;
				default:
					break;
				}
				ipa && ip--;
			}
			break;//破墙镐
		case 'e':
			(ic && ' ' == strmaze[10 - ix][10 - iy]) && (ic--, cp = &strmaze[10 - ix][10 - iy]);//对称飞
			break;
		case 'r':
			ip = 4;
			ic = 2;
			cp = &strmaze[0][0];
			for (i = 0; i < 121; i++) {
				strmaze[0][i] = rmaze[i];
			}
			break;
		default:
			break;
		}
		*cp = 'P';
		system("cls");
	}
	system("color 0A");
	printf("恭喜你，你赢了\n");
	free(rmazea);
	rmaze = NULL;
	rmazea = NULL;
	return 0;
}//破墙镐(2)(q)对称飞(4)(e)迷宫:破墙镐——破墙(有墙才破)，对称飞——从迷宫的中心点瞬移(瞬移点没墙)
*///“C语言破墙镐对称飞迷宫”(选自我的CSDN博客)^
/*
int main() {
	int* arr = realloc(NULL, 40);
	int i = 0;
	for (i = 0; i < 10; i++) {
		arr[i] = i;
	}
	int* arrt = arr;
	arrt = realloc(arr, 80);
	if (!arrt) {
		perror("main");
		return 1;
	}
	else {
		arr = arrt;
	}
	for (i = 10; i < 20; i++) {
		arr[i] = 0;
	}
	for (i = 0; i < 20; i++) {
		printf("%d ", arr[i]);
	}
	free(arr);
	arr = NULL;
	arrt = NULL;
	return 0;
}
*///“realloc函数”^
/*
void printmap(const char strmap[10][10]) {
	int ia = 0;
	int ib = 0;
	for (ia = 0; ia < 10; ia++) {
		for (ib = 0; ib < 10; ib++) {
			printf("\033[3%sm%c\033[0m", '*' == strmap[ia][ib] ? "2;1" : '-' == strmap[ia][ib] ? "1;1" : "6", strmap[ia][ib]);
		}
		printf("\n");
	}
}
void change(char* cp, char* cpa) {
	char chan[10] = { 0 };
	const int arr[9] = { -11, -10, -9, -1, 0, 1, 9, 10, 11 };
	const char chana[3] = "-|";
	int i = 0;
	int ia = 0;
	int ib = 0;
	int ic = 0;
	char* ccp = chan;
	for (; i < 9; i++) {
		('*' != *(cp + arr[i]) && (*ccp++ = *(cp + arr[i]), ('-' == *(cp + arr[i]) && ia++, '|' == *(cp + arr[i]) && ib++))), ('*' == *(cp + arr[i]) && ic++);
	}
	if (ia == ib) {
		*ccp = chana[rand() % 2];
	}
	else if (ia < ib) {
		*ccp = '|';
	}
	else {
		*ccp = '-';
	}
	*cpa = chan[(i = rand() % (10 - ic))];
}
int main() {
	float fspd = 1.0f;
	char stw[9] = "color 0";
	srand((unsigned int)time(NULL));
	char strmap[10][10] = {
		'*','*','*','*','*','*','*','*','*','*',
		'*','-','-','-','-','|','|','|','|','*',
		'*','-','-','-','-','|','|','|','|','*',
		'*','-','-','-','-','|','|','|','|','*',
		'*','-','-','-','-','|','|','|','|','*',
		'*','-','-','-','-','|','|','|','|','*',
		'*','-','-','-','-','|','|','|','|','*',
		'*','-','-','-','-','|','|','|','|','*',
		'*','-','-','-','-','|','|','|','|','*',
		'*','*','*','*','*','*','*','*','*','*'
	};
	char strmapa[10][10] = {
		'*','*','*','*','*','*','*','*','*','*',
		'*','-','-','-','-','|','|','|','|','*',
		'*','-','-','-','-','|','|','|','|','*',
		'*','-','-','-','-','|','|','|','|','*',
		'*','-','-','-','-','|','|','|','|','*',
		'*','-','-','-','-','|','|','|','|','*',
		'*','-','-','-','-','|','|','|','|','*',
		'*','-','-','-','-','|','|','|','|','*',
		'*','-','-','-','-','|','|','|','|','*',
		'*','*','*','*','*','*','*','*','*','*'
	};
	int i = 1;
	int ia = 1;
	int iw = 0;
	printf("这次游戏的倍速为多少?(0倍速自动转为1倍速) -> ");
	scanf("%f", &fspd);
	0 == fspd && (fspd = 1.0f);
	system("cls");
	while (!iw) {
		for (i = 1; i < 9; i++) {
			for (ia = 1; ia < 9; ia++) {
				change(&strmap[i][ia], &strmapa[i][ia]);
			}
		}
		for (i = 1; i < 9; i++) {
			for (ia = 1; ia < 9; ia++) {
				strmap[i][ia] = strmapa[i][ia];
			}
		}
		printmap(strmap);
		'-' == strmap[1][1] && (iw = 1), '|' == strmap[1][1] && (iw = -1);
		for (i = 1; i < 9; i++) {
			for (ia = 1; ia < 9; ia++) {
				if (iw > 0) {
					if ('|' == strmap[i][ia]) {
						iw = 0;
						goto g;
					}
				}
				else {
					if ('-' == strmap[i][ia]) {
						iw = 0;
						goto g;
					}
				}
			}
		}//判断
	g:
		Sleep(1000 / fspd);
		system("cls");
	}
	strcat(stw, iw > 0 ? "C" : "9");
	system(stw);
	printf("“%c”赢了", iw > 0 ? '-' : '|');
	return 0;
}//占领游戏(我随便取的)：改变 打印 判断-->改变（概率:(←↑→↓↖↗↘↙)?本+多数）
*///C语言占领游戏”(选自我的CSDN博客)^
/*
int main() {
	FILE* fp = fopen("C:\\Users\\Administrator\\Desktop\\a.txt", "w");
	fputs("Hello,world!", fp);
	fclose(fp);
	return 0;
}
*///“fputs函数”^
/*
int main() {
	FILE* fp = fopen("C:\\Users\\Administrator\\Desktop\\a.txt", "w");
	fputc('#', fp);
	fclose(fp);
	return 0;
}
*///“fputc函数”^
/*
void printmaze(const char strmaze[11][11]) {
	FILE* fp = fopen("maze.c", "w");
	int ia = 0;
	int ib = 0;
	for (ia = 0; ia < 11; ia++) {
		fputs("//", fp);
		for (ib = 0; ib < 11; ib++) {
			fputc(strmaze[ia][ib], fp);
		}
		fputs("|\n", fp);
	}
	fputs("//-----------@", fp);
	fclose(fp);
}
int main() {
	int i = 0;
	char ch = 0;
	char strmaze[11][11] = {
		'P','*','*','*',' ',' ',' ',' ','*','*','*',
		' ','*',' ',' ',' ','*','*',' ','*','G','*',
		' ','*',' ',' ',' ',' ','*',' ','*',' ',' ',
		' ','*','*','*','*',' ','*',' ','*','*',' ',
		' ','*',' ',' ',' ',' ','*',' ','*',' ',' ',
		' ','*',' ','*','*','*','*',' ','*',' ','*',
		' ','*',' ',' ','*',' ','*',' ','*',' ','*',
		' ','*',' ',' ','*',' ','*',' ',' ',' ',' ',
		' ','*',' ','*','*',' ','*','*','*',' ',' ',
		' ',' ',' ',' ','*',' ',' ',' ',' ',' ','*',
		' ',' ',' ','*','*','*',' ',' ','*','*','*'
	};
	char* cp = &strmaze[0][0];
	printf("欢迎你来玩文件迷宫，在这个迷宫中，“P”是你，空格是你可以走的地方，“\033[32;1mG\033[0m”为\033[32;1m终点\033[0m，但是关于迷宫的所有信息都会存放到一个名叫\033[4mmaze.c\033[0m的文件上去，你需要找到它才能看清今天要走的迷宫，如果没有它的话，就寸步难行了，而你只要走到\033[32;1m终点\033[0m，就可以\033[32;1m赢\033[0m了，你听懂了吗?");
	Sleep(6400);
	system("cls");
	while ('G' == strmaze[1][9]) {
		printmaze(strmaze);
		scanf("%c", &ch);
		while ('\n' != getchar()) {
			;
		}
		*cp = ' ';
		switch (ch) {
		case 'w':
			for (i = 0; i < 11; i++) {
				if (cp == &strmaze[0][i]) {
					break;
				}
			}
			11 == i && '*' != *(cp - 11) && (cp -= 11);
			break;
		case 'a':
			for (i = 0; i < 11; i++) {
				if (cp == &strmaze[i][0]) {
					break;
				}
			}
			11 == i && '*' != *(cp - 1) && cp--;
			break;
		case 's':
			for (i = 0; i < 11; i++) {
				if (cp == &strmaze[10][i]) {
					break;
				}
			}
			11 == i && '*' != *(cp + 11) && (cp += 11);
			break;
		case 'd':
			for (i = 0; i < 11; i++) {
				if (cp == &strmaze[i][10]) {
					break;
				}
			}
			11 == i && '*' != *(cp + 1) && cp++;
			break;
		default:
			break;
		}
		*cp = 'P';
		system("cls");
	}
	system("color 0A");
	FILE* fp = fopen("maze.c", "w");
	fputs("//恭喜你，你赢了", fp);
	fclose(fp);
	return 0;
}
*///“C语言文件迷宫”(选自我的CSDN博客)^
/*
int main() {
	char str[10] = "123 12 1";
	int i = 0;
	int ia = 0;
	sscanf(str, "%d %d", &i, &ia);
	printf("%d %d\n", i, ia);
	return 0;
}
*///“sscanf函数”^
/*
void printmaze(const char strmaze[11][11]) {
	int ia = 0;
	int ib = 0;
	for (ia = 0; ia < 11; ia++) {
		for (ib = 0; ib < 11; ib++) {
			printf("\033[%sm%c\033[0m", 'G' == strmaze[ia][ib] ? "32;1" : "0", strmaze[ia][ib]);
		}
		printf("|\n");
	}
	printf("-----------@\n");
}
int main() {
	int i = 0;
	int ia = 0;
	int ip = 0;
	int ig = 0;
	char ch = 0;
	char strmaze[11][11] = { 0 };
	char* cpg = NULL;
	memset(strmaze, ' ', sizeof strmaze);
	char* cp = &strmaze[0][0];
	printf("迷宫制造的规则：\n\t1.迷宫最大能制造的大小为11*11\n\t2.迷宫中只能有“P”“\033[32;1mG\033[0m”“*”和空格，不能有的会自动地被清除掉\n\t3.可以用“/”或者“|”来结束迷宫的制造，只不过，用“|”来结束迷宫的制造的话就可以使你可以边界互通了\n\t4.在制造迷宫的时候，迷宫最多只能有121个字符，如果超出这个部分，那么就会在换行之后自动结束迷宫的制造，如果你制造的完整的迷宫的右边紧挨着“|”，那么就可以使你可以边界互通了\n\t5.最好把迷宫造的完整点，并且右边要加上“/”或者“|”，不然就会耽误你玩你自己做的迷宫的时间\n\n");
	while (ch = getchar(), ((' ' == ch || '*' == ch || 'P' == ch || 'G' == ch) && (i++, *cp = ch, (i <= 120 && cp++))), (ch - '/' && ch - '|')) {
		'P' == ch && ip++;
		'G' == ch && ig++;
		if (121 == i) {
			break;
		}
	}
	((!(ch - '|')) || (!(getchar() - '|'))) && (ia = 1);
	if (!(ip && ig)) {
		system("color 0C");
		system("cls");
		printf("ERROR: “P”或者“G”并\033[4m没有被创建出来\033[0m\n");
		return 1;
	}
	if (ip > 1 || ig > 1) {
		system("color 0C");
		system("cls");
		printf("ERROR: “P”和“G”\033[4m只能创建一个\033[0m\n");
		return 1;
	}
	for (i = 0, cp = NULL; !(cp && cpg); i++) {
		!cp && (cp = strstr(strmaze[i], "P"));
		!cpg && (cpg = strstr(strmaze[i], "G"));
	}
	system("cls");
	while ('\n' != getchar()) {
		;
	}
	while ('G' == *cpg) {
		printmaze(strmaze);
		scanf("%c", &ch);
		while ('\n' != getchar()) {
			;
		}
		*cp = ' ';
		switch (ch) {
		case 'w':
			for (i = 0; i < 11; i++) {
				if (cp == &strmaze[0][i]) {
					break;
				}
			}
			11 == i && '*' != *(cp - 11) && (cp -= 11);
			(ia && 11 != i && '*' != *(cp + 110)) && (cp += 110);
			break;
		case 'a':
			for (i = 0; i < 11; i++) {
				if (cp == &strmaze[i][0]) {
					break;
				}
			}
			11 == i && '*' != *(cp - 1) && cp--;
			(ia && 11 != i && '*' != *(cp + 10)) && (cp += 10);
			break;
		case 's':
			for (i = 0; i < 11; i++) {
				if (cp == &strmaze[10][i]) {
					break;
				}
			}
			11 == i && '*' != *(cp + 11) && (cp += 11);
			(ia && 11 != i && '*' != *(cp - 110)) && (cp -= 110);
			break;
		case 'd':
			for (i = 0; i < 11; i++) {
				if (cp == &strmaze[i][10]) {
					break;
				}
			}
			11 == i && '*' != *(cp + 1) && cp++;
			(ia && 11 != i && '*' != *(cp - 10)) && (cp -= 10);
			break;
		default:
			break;
		}
		*cp = 'P';
		system("cls");
	}
	system("color 0A");
	printf("恭喜你，你赢了\n");
	return 0;
}
*///“C语言迷宫制造”(选自我的CSDN博客)^
/*
int main() {
	int arr[3] = { 3, 4, 1 };
	char str[10] = "";
	sprintf(str, "%d %d %d", arr[0], arr[1], arr[2]);
	printf("%s\n", str);
	return 0;
}
*///“sprintf函数”^
/*
int main() {
	int i = 0;
	printf("请输入一个整数 -> ");
	scanf("%d", &i);
	char str[12] = "";
	sprintf(str, "%d", i);
	printf(str);
	return 0;
}
*///“整数转字符串”(选自我的CSDN博客)^
/*
int main() {
	int i = 0;
	char ch = 0;
	printf("请输入一个整数 -> ");
	scanf("%d", &i);
	char str[12] = "";
	sprintf(str, "%+d", i);
	sscanf(str, "%c", &ch);
	printf("%d为%s数", i, '+' == ch ? "正" : "负");
	return 0;
}
*///“判断一个整数是正数还是负数”(选自我的CSDN博客)^
/*
void printmaze(const char strmaze[11][11], const int iwalk) {
	int ia = 0;
	int ib = 0;
	for (ia = 0; ia < 11; ia++) {
		for (ib = 0; ib < 11; ib++) {
			printf("\033[%sm%c\033[0m", 'G' == strmaze[ia][ib] ? "32;1" : "0", strmaze[ia][ib]);
		}
		printf("|\n");
	}
	printf("-----------@\n你走了%d步\n", iwalk);
}
int main() {
	srand((unsigned int)time(NULL));
	int i = 0;
	int iw = 0;
	int iwalk = 0;
	char ch = 0;
	char strmaze[11][11] = {
		'*','*','*','*','*','*','*','*','*','*','G',
		'*','*','*','*','*','*','*','*','*','*','*',
		'*','*','*','*','*','*','*','*','*','*','*',
		'*','*','*','*','*','*','*','*','*','*','*',
		'*','*','*','*','*','*','*','*','*','*','*',
		'*','*','*','*','*','*','*','*','*','*','*',
		'*','*','*','*','*','*','*','*','*','*','*',
		'*','*','*','*','*','*','*','*','*','*','*',
		'*','*','*','*','*','*','*','*','*','*','*',
		'*','*','*','*','*','*','*','*','*','*','*',
		'P','*','*','*','*','*','*','*','*','*','*'
	};
	int wallarr[11][11] = { 0 };
	wallarr[0][10] = 2;
	wallarr[10][0] = 2;
	char* cp = &strmaze[10][0];
	printf("欢迎你来玩穿墙迷宫，在这个迷宫中，“P”是你，空格是你可以走的地方，“\033[32;1mG\033[0m”为\033[32;1m终点\033[0m，有些“*”是假墙，你可以走，有些“*”是真墙，你撞上去的话就会改变整个迷宫里所有墙的真假性了，而你只要走到\033[32;1m终点\033[0m，就可以\033[32;1m赢\033[0m了，你听懂了吗?");
	Sleep(6400);
	system("cls");
	for (i = 0; i < 121; i++) {
		2 != wallarr[0][i] && (wallarr[0][i] = rand() % 2);
	}//墙之初始化
	while ('G' == strmaze[0][10]) {
		int ip = cp - &strmaze[0][0];
		for (i = 0; i < 121; i++) {
			2 != wallarr[0][i] && i != ip && (strmaze[0][i] = '*');
		}//设墙
		printmaze(strmaze, iwalk);
		scanf("%c", &ch);
		while ('\n' != getchar()) {
			;
		}
		*cp = ' ';
		switch (ch) {
		case 'w':
			for (i = 0; i < 11; i++) {
				if (cp == &strmaze[0][i]) {
					break;
				}
			}
		    11 == i && 1 == wallarr[0][ip - 11] && (iw = 1), 11 == i && (!(wallarr[0][ip - 11]) || 2 == wallarr[0][ip - 11]) && (cp -= 11);
			iwalk++;
			break;
		case 'a':
			for (i = 0; i < 11; i++) {
				if (cp == &strmaze[i][0]) {
					break;
				}
			}
			11 == i && 1 == wallarr[0][ip - 1] && (iw = 1), 11 == i && (!(wallarr[0][ip - 1]) || 2 == wallarr[0][ip - 1]) && (cp--);
			iwalk++;
			break;
		case 's':
			for (i = 0; i < 11; i++) {
				if (cp == &strmaze[10][i]) {
					break;
				}
			}
			11 == i && 1 == wallarr[0][ip + 11] && (iw = 1), 11 == i && (!(wallarr[0][ip + 11]) || 2 == wallarr[0][ip + 11]) && (cp += 11);
			iwalk++;
			break;
		case 'd':
			for (i = 0; i < 11; i++) {
				if (cp == &strmaze[i][10]) {
					break;
				}
			}
			11 == i && 1 == wallarr[0][ip + 1] && (iw = 1), 11 == i && (!(wallarr[0][ip + 1]) || 2 == wallarr[0][ip + 1]) && (cp++);
			iwalk++;
			break;
		default:
			break;
		}
		if (iw) {
			for (i = 0; i < 121; i++) {
				2 != wallarr[0][i] && ip != i && (wallarr[0][i] = rand() % 2);
			}
		}//走后撞墙? --> (-是->改变墙的属性)
		iw = 0;
		*cp = 'P';
		system("cls");
	}
	system("color 0A");
	printf("恭喜你，你一共走了%d步就到达了终点\n", iwalk);
	return 0;
}//穿墙迷宫: 走后撞墙? --> (-是->改变墙的属性) 设墙
*///“穿墙迷宫”(选自我的CSDN博客)
/*
int main() {
	FILE* fp = fopen("C:\\Users\\Administrator\\Desktop\\a.txt", "r");
	if (!fp) {
		perror("fopen");
		return 1;
	}
	printf("%c\n", fgetc(fp));
	fclose(fp);
	fp = NULL;
	return 0;
}
*///“fgetc函数”^
/*
enum WASD {
	W,
	A,
	S,
	D
};
enum YYSe{
	YI,
	YA,
	SW,
	N
};
typedef struct YYS {
	enum YYSe yy;
	int ix;
	int iy;
}YYS;
void printmaze(const char strmaze[11][11], const int iyi, const int iya, const int iyy) {
	int ia = 0;
	int ib = 0;
	for (ia = 0; ia < 11; ia++) {
		for (ib = 0; ib < 11; ib++) {
			printf("\033[%s%sm%c\033[0m", 'G' == strmaze[ia][ib] ? "32;1" : "0", iyy % 2 ? ";7" : "", strmaze[ia][ib]);
		}
		printf("\033[%cm|\033[0m\n", iyy % 2 ? '7' : '0');
	}
	printf("\033[%cm-----------@\n\033[0m阳之镐*%d\n\033[7m阴之镐*%d\033[0m\n", iyy % 2 ? '7' : '0', iyi, iya);
}
int main() {
	enum WASD wp = W;
	int i = 0;
	int ia = 0;
	int iyi = 0;
	int iya = 0;
	int iyy = 0;
	YYS yys[10] = { {YI,0,1}, {YI,1,7}, {YA,0,7}, {YA,0,8}, {YA,2,0}, {YA,7,5}, {SW,0,3}, {SW,0,9}, {SW,6,3}, {SW,7,7} };
	char ch = 0;
	char strmaze[11][11] = {
		'P','-','*','&',' ',' ','*','+','+','&',' ',
		'*','*','*',' ','*',' ','*','-','*','*',' ',
		'+',' ',' ',' ',' ','*','*','*','*',' ',' ',
		'*','*','*','*','*',' ',' ',' ','*',' ',' ',
		'*',' ',' ',' ','*','*','*',' ','*','*','*',
		'*','*','*',' ',' ',' ',' ','*','*',' ',' ',
		'*',' ','*','&','*',' ',' ',' ','*',' ',' ',
		'*','*',' ','*','*','+','*','&',' ',' ',' ',
		'*','*',' ','*',' ',' ',' ',' ',' ','*','*',
		'*',' ',' ',' ',' ',' ',' ',' ','*','*','*',
		' ','*','*','*',' ',' ','*','*','*','*','G'
	};
	int yiya[11][11] = { 0 };
	for (i = 0; i < 121; i++) {
		switch (strmaze[0][i]) {
		case '*':
			yiya[0][i] = 1;
			break;
		case ' ':
			yiya[0][i] = 0;
			break;
		default:
			i && (yiya[0][i] = 2), i || (yiya[0][i] = 0);
			break;
		}
	}
	char strmazer[11][11] = { 0 };
	int yiyar[11][11] = { 0 };
	memcpy(strmazer, strmaze, sizeof strmaze);
	memcpy(yiyar, yiya, sizeof yiya);
	char* cp = &strmaze[0][0];
	printf("\033[0m欢迎你来玩\033[4;7m阴\033[0m\033[4m阳\033[0m迷宫，在这个迷宫中，“P”是你，空格是你可以走的地方，“\033[32;1mG\033[0m”为\033[32;1m终\033[7m点\033[0m，输入“q”来用掉一把阳之镐破墙，\033[7m输入“e”来用掉一把阴之镐造墙\033[0m，输入“r”即可重置迷宫，在“&”上输入“z”就可以把“*”切换成\033[7m空格\033[0m，空格切换成“\033[7m*\033[0m”，再输入一次即可变回原样，而你只要走到\033[32;1m终\033[7m点\033[0m，就可以\033[32;1m赢\033[0m了，你听懂了吗?");
	Sleep(7500);
	system("cls");
	while ('G' == strmaze[10][10]) {
		int ix = (cp - &strmaze[0][0]) / 11;
		int iy = (cp - &strmaze[0][0]) % 11;
		for (i = 0; i < 6; i++) {
			' ' == strmaze[yys[i].ix][yys[i].iy] && (strmaze[yys[i].ix][yys[i].iy] = '%');
		}
		for (; i < 10; i++) {
			' ' == strmaze[yys[i].ix][yys[i].iy] && (strmaze[yys[i].ix][yys[i].iy] = '&');
		}
		printmaze(strmaze, iyi, iya, iyy);
		scanf("%c", &ch);
		while ('\n' != getchar()) {
			;
		}
		*cp = ' ';
		switch (ch) {
		case 'w':
			for (i = 0; i < 11; i++) {
				if (cp == &strmaze[0][i]) {
					break;
				}
			}
			11 == i && '*' != *(cp - 11) && (cp -= 11);
			wp = W;
			break;
		case 'a':
			for (i = 0; i < 11; i++) {
				if (cp == &strmaze[i][0]) {
					break;
				}
			}
			11 == i && '*' != *(cp - 1) && cp--;
			wp = A;
			break;
		case 's':
			for (i = 0; i < 11; i++) {
				if (cp == &strmaze[10][i]) {
					break;
				}
			}
			11 == i && '*' != *(cp + 11) && (cp += 11);
			wp = S;
			break;
		case 'd':
			for (i = 0; i < 11; i++) {
				if (cp == &strmaze[i][10]) {
					break;
				}
			}
			11 == i && '*' != *(cp + 1) && cp++;
			wp = D;
			break;
		case 'q':
			if (iyi) {
				switch (wp) {
				case W:
					ix && '*' == *(cp - 11) && 2 != yiya[ix - 1][iy] && (*(cp - 11) = ' ', yiya[ix - 1][iy] = 0, iyi--);
					break;
				case A:
					iy && '*' == *(cp - 1) && 2 != yiya[ix][iy - 1] && (*(cp - 1) = ' ', yiya[ix][iy - 1] = 0, iyi--);
					break;
				case S:
					10 != ix && '*' == *(cp + 11) && 2 != yiya[ix + 1][iy] && (*(cp + 11) = ' ', yiya[ix + 1][iy] = 0， iyi--);
					break;
				case D:
					10 != iy && '*' == *(cp + 1) && 2 != yiya[ix][iy + 1] && (*(cp + 1) = ' ', yiya[ix][iy + 1] = 0, iyi--);
					break;
				default:
					break;
				}
			}
			break;
		case 'e':
			if (iya) {
				switch (wp) {
				case W:
					ix && ' ' == *(cp - 11) && 2 != yiya[ix - 1][iy] && (*(cp - 11) = '*', yiya[ix - 1][iy] = 1, iya--);
					break;
				case A:
					iy && ' ' == *(cp - 1) && 2 != yiya[ix][iy - 1] && (*(cp - 1) = '*', yiya[ix][iy - 1] = 1, iya--);
					break;
				case S:
					10 != ix && ' ' == *(cp + 11) && 2 != yiya[ix + 1][iy] && (*(cp + 11) = '*', yiya[ix + 1][iy] = 1, iya--);
					break;
				case D:
					10 != iy && ' ' == *(cp + 1) && 2 != yiya[ix][iy + 1] && (*(cp + 1) = '*', yiya[ix][iy + 1] = 1, iya--);
					break;
				default:
					break;
				}
			}
			break;
		case 'z':
			for (i = 6; i < 10; i++) {
				if (cp == &strmaze[yys[i].ix][yys[i].iy]) {
					iyy++;
					for (ia = 0; ia < 121; ia++) {
						if (2 != yiya[0][ia]) {
							if (yiya[0][ia]) {
								strmaze[0][ia] = ' ';
								yiya[0][ia] = 0;
							}
							else {
								strmaze[0][ia] = '*';
								yiya[0][ia] = 1;
							}
						}
					}
				}
			}
			break;
		case 'r':
			iyy = 0;
			iyi = 0;
			iya = 0;
			cp = &strmaze[0][0];
			memcpy(strmaze, strmazer, sizeof strmaze);
			memcpy(yiya, yiyar, sizeof yiya);
			wp = W;
			for (i = 0; i < 2; i++) {
				yys[i].yy = YI;
			}
			for (; i < 10; i++) {
				i < 6 && (yys[i].yy = YA), i < 6 || (yys[i].yy = SW);
			}
			break;
		default:
			break;
		}
		*cp = 'P';
		system("cls");
		for (i = 0; i < 6; i++) {
			if (cp == &strmaze[yys[i].ix][yys[i].iy] && N != yys[i].yy) {
				i < 2 && iyi++, i < 2 || iya++;
				yys[i].yy = N;
			}
		}
	}
	system("color 0A");
	printf("恭喜你\033[37m，\033[32;1;7m你赢了\033[32;1m\n");
	return 0;
}
*///“C语言阴阳迷宫”(选自我的CSDN博客)^
/*
int main() {
	int i = 0;
	float f = 0.0f;
	unsigned int def = 0;
	PRINT(i);
	PRINT(f);
	PRINT(def);
	return 0;
}
*///“#”^
/*
typedef struct T {
	int ix;
	int iy;
}T;
void printmaze(const char strmaze[11][11], T tarr[9]) {
	int ia = 0;
	int ib = 0;
	int ic = 0;
	char str[5] = "33";
	for (ia = 0; ia < 11; ia++) {
		for (ib = 0; ib < 11; ib++) {
			for (ic = 0; ic < 9; ic++) {
				if ('@' == strmaze[tarr[ic].ix][tarr[ic].iy] && tarr[ic].ix == ia && tarr[ic].iy == ib) {
					strcpy(str, "33;1");
					break;
				}
			}
			printf("\033[%sm%c\033[0m", 'G' == strmaze[ia][ib] ? "32;1" : '$' == strmaze[ia][ib] || '#' == strmaze[ia][ib] ? "33;1" : '@' == strmaze[ia][ib] ? str : "0", strmaze[ia][ib]);
			strcpy(str, "33");
		}
		printf("|\n");
	}
	printf("-----------@\n");
}
int main() {
	int i = 0;
	char ch = 0;
	T tarr[9] = { {0,3},{0,9},{3,1},{4,0},{5,1},{7,4},{7,5},{9,2},{10,2} };
	char strmaze[11][11] = {
		'P','@',' ','$','*',' ',' ',' ',' ','$','@',
		'*','*',' ',' ','*',' ',' ',' ',' ','@','@',
		' ',' ','*',' ','@',' ',' ','@',' ','@',' ',
		'@','$',' ','*','*','@','@','*',' ','*',' ',
		'$','@',' ',' ',' ',' ',' ','*','@','*',' ',
		'@','$',' ','@',' ',' ',' ','@','*','@',' ',
		' ',' ',' ',' ','*','*',' ',' ',' ',' ',' ',
		'@','*',' ','*','$','$','*',' ','*','@','*',
		' ',' ','*',' ','@',' ',' ','*',' ',' ',' ',
		' ',' ','$','@',' ',' ',' ','@','@',' ','#',
		' ',' ','$',' ',' ','@',' ','*',' ','#','G'
	};
	char strmazer[11][11] = { 0 };
	memcpy(strmazer, strmaze, sizeof strmaze);
	char* cp = &strmaze[0][0];
	char* cboxp = cp;
	printf("欢迎你来玩推\033[33m箱子\033[0m迷宫，在这个迷宫中，“P”是你，空格是你可以走的地方，“\033[32;1mG\033[0m”为\033[32;1m终点\033[0m，\033[33m箱子“@”\033[0m可以推，门“\033[33;1m#\033[0m”一般无法通行，但在“\033[33;1m$\033[33;1m”全被\033[33m箱子“@”\033[0m占的时候，它们就会被打开，而且打开的时候所有的箱子“\033[33m@\033[0m”都会变成墙“*”，并且输入“r”即可重置迷宫，而你只要走到\033[32;1m终点\033[0m，就可以\033[32;1m赢\033[0m了，现在你听懂了吗?");
	Sleep(8000);
	system("cls");
	while ('G' == strmaze[10][10]) {
		int ifl = 0;
		printmaze(strmaze, tarr);
		scanf("%c", &ch);
		while ('\n' != getchar()) {
			;
		}
		*cp = ' ';
		switch (ch) {
		case 'w':
			for (i = 0; i < 11; i++) {
				if (cp == &strmaze[0][i]) {
					break;
				}
			}
			11 == i && '*' != *(cp - 11) && '#' != *(cp - 11) && '@' != *(cp - 11) && (cp -= 11, ifl = 1);
			if (!ifl && 11 == i && '@' == *(cp - 11)) {
				cboxp = cp - 11;
				(cboxp - &strmaze[0][0]) / 11 && (' ' == *(cboxp - 11) || '$' == *(cboxp - 11)) && (*cboxp = ' ', cboxp -= 11, *cboxp = '@', cp -= 11);
			}
			break;
		case 'a':
			for (i = 0; i < 11; i++) {
				if (cp == &strmaze[i][0]) {
					break;
				}
			}
			11 == i && '*' != *(cp - 1) && '#' != *(cp - 1) && '@' != *(cp - 1) && (cp--, ifl = 1);
			if (!ifl && 11 == i && '@' == *(cp - 1)) {
				cboxp = cp - 1;
				(cboxp - &strmaze[0][0]) % 11 && (' ' == *(cboxp - 1) || '$' == *(cboxp - 1)) && (*cboxp-- = ' ', *cboxp = '@', cp--);
			}
			break;
		case 's':
			for (i = 0; i < 11; i++) {
				if (cp == &strmaze[10][i]) {
					break;
				}
			}
			11 == i && '*' != *(cp + 11) && '#' != *(cp + 11) && '@' != *(cp + 11) && (cp += 11, ifl = 1);
			if (!ifl && 11 == i && '@' == *(cp + 11)) {
				cboxp = cp + 11;
				10 != (cboxp - &strmaze[0][0]) / 11 && (' ' == *(cboxp + 11) || '$' == *(cboxp + 11)) && (*cboxp = ' ', cboxp += 11, *cboxp = '@', cp += 11);
			}
			break;
		case 'd':
			for (i = 0; i < 11; i++) {
				if (cp == &strmaze[i][10]) {
					break;
				}
			}
			11 == i && '*' != *(cp + 1) && '#' != *(cp + 1) && '@' != *(cp + 1) && (cp++, ifl = 1);
			if (!ifl && 11 == i && '@' == *(cp + 1)) {
				cboxp = cp + 1;
				10 != (cboxp - &strmaze[0][0]) % 11 && (' ' == *(cboxp + 1) || '$' == *(cboxp + 1)) && (*cboxp++ = ' ', *cboxp = '@', cp++);
			}
			break;
		case 'r':
			memcpy(strmaze, strmazer, sizeof strmaze);
			cp = &strmaze[0][0];
			cboxp = cp;
			break;
		default:
			break;
		}
		*cp = 'P';
		system("cls");
		for (ifl = 0, i = 0; i < 9; i++) {
			' ' == strmaze[tarr[i].ix][tarr[i].iy] && (strmaze[tarr[i].ix][tarr[i].iy] = '$');
			'@' == strmaze[tarr[i].ix][tarr[i].iy] && ifl++;
		}
		if (9 == ifl) {
			strmaze[9][10] = ' ';
			strmaze[10][9] = ' ';
			for (i = 0; i < 121; i++) {
				'@' == strmaze[0][i] && (strmaze[0][i] = '*');
			}
		}
	}
	system("color 0A");
	printf("恭喜你，你赢了\n");
	return 0;
}
*///“C语言推箱子迷宫”(选自我的CSDN博客)^
/*
int main() {
	int i = 1;
	int ii = 7;
	int iii = 87887;
	printf("%d\n", CAT(i, ii));
	printf("%d\n", CAT(E, OF));
	printf("%f\n", CAT(D, E(A)));
	return 0;
}
*///“##”^
/*
int main() {
	printf("%d", __LINE__);
	return 0;
}
*///“__LINE__”^
/*
int main() {
	printf("%d %s\n", __LINE__, __FILE__);
#line 114514
	printf("%d %s\n", __LINE__, __FILE__);
#line 1919810 "Hello, world!.c"
	printf("%d %s\n", __LINE__, __FILE__);
	return 0;
}
*///“预处理指令#line”^
/*
int main() {
	printf("%s\n", __FUNCTION__);
	return 0;
}
*///“__FUNCTION__”^
