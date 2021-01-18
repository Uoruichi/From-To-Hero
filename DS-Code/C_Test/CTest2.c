#include <stdio.h>
int main(void)
{
    int array[5]={sizeof(int),sizeof(short),
    sizeof(float),sizeof(long),sizeof(long long)};
    int i=0;
    for(i=0;i<=5;i++)
        printf("大小分别为：%d\n",array[i]);

    return 0;

}