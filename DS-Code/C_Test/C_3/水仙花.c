//求水仙花数，一个三位数；各个位上的数字的立方和等于本数字
#include <stdio.h>
int main(void)
{
    int num =100;
    int a,b,c;
    do  
    {
        a = num/100;    //百位
        b = num/10 %10; //十位 
        c = num %10;    //个位
        if( a*a*a +b*b*b +c*c*c == num)
            printf("num = %d 是水仙花数\n",num);
        num++;
    }
    while(num<1000);
    return 0;//在vscode 中不能使用EXIT_SUCCESS?
}