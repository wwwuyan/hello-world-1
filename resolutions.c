//输入一个字符串，形如
//3072x1728,2720x1536,2560x1600,2560x1440,2304x1728,2048x1536,1920x1200,1920x1080,1440x900,1280x800,1280x720,1024x768,1024x640,800x600,800x500,800x450,640x480,640x400,640x360,480x360,480x300,480x270,320x240,320x200,320x180,240x180,176x144,160x120,160x100,160x90
//这是一个显示器支持的分辨率清单，中间逗号分隔。
//现在输入画面的宽和高，然后在上述清单中挑选一个最接近的分辨率输出
//比如输入2000，1000，输出的分辨率应该是1920x1080，因为其它分辨率的误差更大。
//完成如下程序
// 2021-11-14
#include <stdio.h>
int main()
{
    int x, y;
    scanf("%d %d", &x, &y);
    int a[]={3072,2720,2560,2560,2304,2048,1920,1920,1440,1280,1280,1024,1024,800,800,800,640,640,640,480,480,480,320,320,320,240,176,160,160,160};
    int b[]={1728,1536,1600,1440,1728,1536,1200,1080,900,800,720,768,640,600,500,450,480,400,360,360,300,270,240,200,180,180,144,120,100,90};
    
    int m=0,n=0;
    int e,f,c,d;
    for(int i=0; i<30; i++){
        if(x>a[i]) e=x-a[i];
        else e=a[i]-x;

        if(y>b[i]) f=y-b[i];
        else f=b[i]-y;

        if(x>a[m]) c=x-a[m];
        else c=a[m]-x;

        if(y>b[m]) d=y-b[m];
        else d=b[m]-y;

        if(e<=c && f<=d)
        m=i;
    }

    printf("The selected fractional frequency:%dx%d\n", a[m], b[m]);
    return 0;
}