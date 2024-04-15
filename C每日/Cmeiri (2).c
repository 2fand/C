#include <stdint.h>//““ ’”里的东西是重点
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