#define _CRT_SECURE_NO_WARNINGS 1
//#define A(a,b) printf("%d",(a)+(b)); <------ “初用宏”中的宏
//#define A(x,y) (x,y) <------ “有表达式的宏”中的宏
#include <stdio.h>//““ ’”里的东西是重点
#include <string.h>//“/-”“-/” <-- 程序里本来就有的注释
#include <stdlib.h>
#include <Windows.h>
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
*///“求十个数中的最小值”(如果其中有不是数的东西,那么就把这个东西设为0,并立即终止)^
