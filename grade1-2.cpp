#include<stdio.h>
#include<stdlib.h>
int grade1_2()
{
	int n;
	int ans[5];
	int a[5];
	int c=rand()%3;
	if(c=='1')
	c=='+';
	else
	c=='-';
	char c1[5];
	int num=rand()%3+2;
	for(int i=0;i<num;i++)
	{
	
	c1[i]==c;
	a[i]=rand()%100;
	}
	scanf("%d",n);
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<num-1;j++)
		printf("%d%c",a[j],c1[j]);
		printf("%d\n",a[num-1]);
		scanf("%d",input[i]);
	}
} 

