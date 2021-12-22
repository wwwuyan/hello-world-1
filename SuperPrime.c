//超级素数：它本身，各位数字的和，各位数字的平方和，都是素数。
//求 100~10000 内的所有超级素数，及它们的平均数。
// 2021-10-29

/*#include <stdio.h>
#include <stdbool.h>

int isPrime(int x);                   //判断素数
int splitNum(int x, int i, int num[]);  //分裂数字
int sum(int x, int num[]);              //求各位数字的和
int averagesum(int x, int num[]);*/     //求各位数字平方和

//bool flag, k, j;

/*bool isPrime(int x, bool flag)
{
    int x,d;
	scanf("%d",&x); 
	
	for(d=2;d<x;d++)
	if(x%d==0)
	break;
	if(d<x) flag=0;
	else flag=1;
	
	return flag;
}

int splitNum(int x, int i, int num[])
{
    int x, num[10];
    int i;

    for(i=0; x>0; i++){
        num[i]=x%10;
        x=x/10;
    }
}

bool sum(int x, int num[], bool k)
{
    int x, num[10];
    int i;
    int sum=0;
    bool flag;
    for(i=0; i<x; i++){
        sum=sum+num[i];
    }
    if(isPrime(sum, flag)==1)
    k=1;
    else
    k=0;

}


bool averagesum(int x, int num[], bool j)
{
    int x, num[10];
    int i;
    int averagesum=0;
    bool flag;
    for(i=0; i<x; i++){
        averagesum=averagesum+num[i];
    }
    if(isPrime(averagesum, flag)==1)
    j=1;
    else
    j=0;
}

int main()
{
    int w;
    int num[10];
    int i;
    bool flag, j, k;
    for(w=100; w<=10000; w++){
        isPrime(w, flag);
        splitNum(w, i, num[10]);
        sum(i, num[10], k);
        averagesum(i, num[10], j);
        if(flag==1 && k==1 && j==1){
            printf("%d ", w);
        }
    }

    return 0;
}*/


#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <stdbool.h>
bool isPrime(int x);
void splitNum(int x,int num[]);

bool isPrime(int x){
    if(x==1) 
    return 0; 
    for(int i=2;i<=sqrt(x);i++)
    if(x%i==0) return 0;
    return 1;
}

void splitNum(int x,int num[]) {
    num[0]=0;
    while(x){ 
        num[++num[0]]=x%10; x/=10;
    }
    return 0 ;
}


int main(int argc, char *argv[]) { // freopen（""，"r"，stdin）;
    int sum=0,psum=0,num[11];
    double aver=0,n=0; 
    for(int i=101; i<=9999; i++){
        
        if(isPrime(i)){ 
            splitNum(i,num); 
            sum=0,psum=0;
        
        for(int j=1; j<=num[0]; j++)
        sum+=num[j], psum+=num[j]*num[j];
        
        if(isPrime(sum) && isPrime(psum)){
            aver+=i, n++;
            printf("%d ",i);
        }

        }
    } 
    
    aver/=n;
    printf("%lf",aver);
    return 0;
}




