#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>//““ ’”里的东西是重点
#include <string.h>
#include <stdlib.h>
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
*///一加一减0
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
