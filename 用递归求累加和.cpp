#include<stdio.h>
int Sum(int n)         //Sum���������ĺ��������һ��if else��� 
{
	if(n>0)
	return n+Sum(n-1);    //ʵ�ֶ�Sum(n-1)�ĵ��� 
	else
	return 0;          //n<=0ʱ��ͨ��return 0���ֱ�ӷ���0ֵ��ʵ���˺����Ľ�����֧����n<=0ǰ��Sum��������һֱ�����Լ� 
 } 
int main()
{
	int n;
	printf("input a number:");
	scanf("%d",&n);
	printf("sum=%d.\n",Sum(n));   //ע�����ʱҪд������������������Ĳ���Ҫ���� 
	return 0;
}
