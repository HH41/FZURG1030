#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <unistd.h>

int grade1_num()
{
	srand((unsigned)time(0)+(unsigned)rand());
	int a=rand()%100;
	sleep(1);
	return a;
}


int grade2_num()
{
	srand((unsigned)time(0)+(unsigned)rand());
	int a=rand()%10000;
	sleep(1);
	return a;
}

double grade3_num()
{
	srand((unsigned)time(0)+(unsigned)rand());
	int a=rand()%10001; 
	double b=(double)a/10000.0;
	srand(time(NULL));
	int c=rand()%10000;
	b+=(double)c;
	sleep(1);
	return b;
}

char grade12_char()
{
	char s[2]={'+','-'};
	srand((unsigned)time(0)+(unsigned)rand());
	int a=rand()%2;
	return s[a];
}

char grade3_char()
{
	char s[4]={'+','-','*','/'};
	srand((unsigned)time(0)+(unsigned)rand());
	int a=rand()%4;
	return s[a];
}
