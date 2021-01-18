#include <stdio.h>
int main(void)
{
    int num=1;
    while(num <=100)//使用while内嵌套if和else结构
    {
        if (num %7==0 || num /10 == 7 || num%10==7)//十位、个位含7以及7的倍数
        printf("%d\n",num);
        else
        printf("这回合敲桌子～\n");
        num++;//循环体内一定要注意变量的变化，不然容易造成死循环，有没有一款软件可以提示？
    }
    return 0;
    
}