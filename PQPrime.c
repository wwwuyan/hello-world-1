// 求 p 和 q
// 当 p 和 q 都是素数，求 p 和 q
// $p^q + q^p$是一个素数，
// $p$和$q$也是素数，
// 求$p$和$q$

#include <stdio.h>
int isPrime(int x)
{
    int d;
    int flag;
	for(d=2;d<x;d++)
	if(x%d==0)
	break;
	if(d<x) flag=0;
	else flag=1;
	
	return flag;
}

int chengfang(int p, int q){
    int result=1;
    for(int i=0; i<q; i++){
        result=result*p;
    }
    return result;
}

int main()
{
    int m, n, k, i;
    int p,q;
    int u;
    int a[100];
    for(i=2; i<10; i++){
        if(isPrime(i)==1){
            a[k]=i;
            k++;
        }
    }

    for(int j=0; a[j]<=1000; j++){
        p=a[j];
        for(int g=0; a[g]<=1000; g++){
            q=a[g];
            u=chengfang(p,q)+chengfang(q,p);
            if(isPrime(u)==1){
                printf("p=%d q=%d\n", p,q);
            }
        }
    }

    /*for(int j=0; j<k; j++){
        printf("%d ", a[j]);
    }*/

}