#include<stdio.h>
int Sum(int n)         //Sum（）函数的函数体就是一个if else语句 
{
	if(n>0)
	return n+Sum(n-1);    //实现对Sum(n-1)的调用 
	else
	return 0;          //n<=0时，通过return 0语句直接返回0值，实现了函数的结束分支，在n<=0前，Sum（）函数一直调用自己 
 } 
int main()
{
	int n;
	printf("input a number:");
	scanf("%d",&n);
	printf("sum=%d.\n",Sum(n));   //注意调用时要写完整，即（）和里面的参数要加上 
	return 0;
}
