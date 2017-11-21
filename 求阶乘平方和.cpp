#include<stdio.h>
unsigned long Factorial(int n);  //函数声明 
int main(){
	int i,x;
	unsigned long f;
	unsigned long s=0;
	printf("input a number:"); scanf("%d",&x);
	for(i=1;i<=x;i++){
		f=Factorial(i);            //调用函数 ，注意（）和里面的参数要带上 
		s+=f*f;
	}
	printf("s=%lu\n",s);
	return 0;
} 
unsigned long Factorial(int n)     //定义函数 
{
    unsigned long t=1;
    int i;
    for(i=1;i<=n;i++)
	t=t*i;
	return t;
	}   
