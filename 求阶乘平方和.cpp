#include<stdio.h>
unsigned long Factorial(int n);  //�������� 
int main(){
	int i,x;
	unsigned long f;
	unsigned long s=0;
	printf("input a number:"); scanf("%d",&x);
	for(i=1;i<=x;i++){
		f=Factorial(i);            //���ú��� ��ע�⣨��������Ĳ���Ҫ���� 
		s+=f*f;
	}
	printf("s=%lu\n",s);
	return 0;
} 
unsigned long Factorial(int n)     //���庯�� 
{
    unsigned long t=1;
    int i;
    for(i=1;i<=n;i++)
	t=t*i;
	return t;
	}   
