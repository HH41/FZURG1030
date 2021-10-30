#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main()
{	int i;
	srand(time(0));
	int num = rand()%4;
	char s[4] = {'+','-','*','/'};
	float shu[4];
	char ys[4];
	l = 0;
	k = 0;
	for(i=0;i<5;i++)
	{	
		int num = rand()%4;
		shu[l] = i;
		l += 1; 
		printf("%d",i);
		if(i!=5-1)
		{
		ys[k] = s[num];
		k += 1;  
		printf("%c",s[num]);
		}
		
		if(i==5-1)
		printf("=");
	}
	for(i=0;i<5;i++)
	{
		switch
		
		
	}
	
	
	
	
	
	
	
	
	
	
	
}

