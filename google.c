//f(n)函数的定义为0~n中包含的1的个数
//f(13)是0~13中包含1的有 1，10，11，12，13，所以f(13)=6
//f(1) = 1。
//求另一个f(n)=n的n值
// 2021-11-04

#include <stdio.h>
int main()
{
    int a[10];
    int i;
    int h=0;
    int m=1;
    int x;
    for(x=1; x<1000000; x++){
        /*h=0;                       //超时
        for(int n=1; n<=x; n++){
            m=n;
            for(i=0; m>0; i++){
                a[i]=m%10;
                m=m/10;

                if(a[i]==1) h++;
            }

        }*/

        m=x;
        for(i=0; m>0; i++){
            a[i]=m%10;
            m=m/10;

            if(a[i]==1) h++;
        }

        if(h==x)
        printf("%d ", h);

    }
    return 0;

}