#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main()
{	int flag = 0;
	int j,xh;
	srand(time(0));
	scanf("%d",&xh);
	for(j=0;j<xh;j++)
	{

	int i;
	int num1 = rand()%4;
	int num3 = rand()%3+2;
	char s[4] = {'+','-','*','/'};
	double  shu[num3];
	char ys[num3];
	int l = 0;
	int k = 0;
	for(i=0;i<num3;i++)
	{	
		int num = rand()%4;
		double num2 = (double)rand()/RAND_MAX*(10000-0)+0;
		shu[l] = num2;
		l += 1; 
		printf("%f",num2);
		if(i!=num3-1)
		{
		ys[k] = s[num];
		k += 1;
		printf("%c",s[num]);
		}
		
		if(i==num3-1)
		printf("=");
	}

	printf("\n");
	for(i=0;i<k;i++)
	{
		switch(ys[i])
		{
			case '*':
				shu[i+1] = shu[i+1]*shu[i];
				ys[i]=']';
				break;
			case '/':
				shu[i+1] = shu[i]/shu[i+1];	
				ys[i]=']';
				break;
		}	
	}
	for(i=0;i<k;i++)
	{
		if(ys[i]==']')
		{
			shu[i] = 0;
		}
	}

	for(i=0;i<k;i++)
	{	
		switch(ys[i])
		{	
			case ']':
				shu[i+1] = shu[i] + shu[i+1];
				break;
			case '+':
				shu[i+1] = shu[i] + shu[i+1];
				break;
			case '-':
				shu[i+1] = shu[i] - shu[i+1];
				break;
		}
	}
	double sl;
	double p;
	int qs;
	qs = (int)(shu[num3-1]*100+0.5);
	p = qs /100.0;
	scanf("%lf",&sl);
	if(p != sl)
	{flag++;}
	printf("%lf",p);
	if(flag==0)
		printf("结束！全部正确，太棒了\n");
	else
		printf("结束！错了%d题哦\n",flag);
	
	}
	return 0;
	
	
	
	
	
	
}
