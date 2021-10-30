#include<stdio.h>
#include<bits/stdc++.h>
#include <time.h>
#include <unistd.h>
using namespace std;


int change(string s){//传入string类型参数 

	string a("一"); 
	string b("二"); 
	string c("三"); 
	string d("四"); 
	string e("五"); 
	string f("六");  
	if (s.substr(0,2)==a||s.substr(0,2)==b)
		return 1; //一二年级返回1 
	if (s.substr(0,2)==c||s.substr(0,2)==d)
		return 2; //三四年级返回2 
	if (s.substr(0,2)==e||s.substr(0,2)==f)
		return 3;//五六年级返回3 
}



	
	
//生成随机数	
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


//生成随机运算符 
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

//一二年级计算 
int flag=0;
int grade1_2()
{
	int number;
	srand(time(NULL));
	int i,a,b,op,result;
	char s;
	int ans,input;
	cin>>number;
	for(i=0;i<number;i++)
	{
	a=rand()%101;
	b=rand()%101;
	op=rand()%2;
	switch(op)
	{
		case 0:
			cout<<a<<"+"<<b<<"="<<endl;
			result=a+b;
			cin>>ans;
			if(ans!=result)flag++;
			break; 
		case 1:
			cout<<a<<"-"<<b<<"="<<endl;
			result=a-b;
				cin>>ans;
			if(ans!=result)flag++;
			break; 
			if(ans!=result)flag++;
			break; 
	}
	//cout<<flag;
}
	return flag ; 
}


//三四年级计算 
int grade3_4()
{
	int number;
	srand(time(NULL));
	int i,a,b,op,result;
	char s;
	int ans,input;
	cin>>number;
	for(i=0;i<number;i++)
	{
	a=rand()%101;
	b=rand()%101;
	op=rand()%4;
	//cout<<op;
	switch(op)
	{
		case 0:
			cout<<a<<"+"<<b<<"="<<endl;
			result=a+b;
			cin>>ans;
			if(ans!=result)flag++;
			break; 
		case 1:
			cout<<a<<"-"<<b<<"="<<endl;
			result=a-b;
				cin>>ans;
			if(ans!=result)flag++;
			break; 
		case 2:
			cout<<a<<"*"<<b<<"="<<endl;
			result=a*b;
				cin>>ans;
			if(ans!=result)flag++;
			break; 
		case 3:
			cout<<a<<"/"<<b<<"="<<endl;
			result=a/b;
				cin>>ans;
			if(ans!=result)flag++;
			break; 
	}
}
//cout<<"错题数"<<flag; 
	return flag; 
}


//五六年级计算 
/*
int grade5_6()
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
*/

//判断 
int panduan(double input,double ans)
{
    if(ans!=input)
    {
        flag++;	
	}
}



int main(){
	printf("请输入你的年级\n");
	string a;
	int b;
	int grade;
	cin>>a;
	printf("请输入题目数\n");
	grade=change(a);
	//cout<<grade; 
	switch(grade){
		case 1: grade1_2();
		        break;
		case 2: grade3_4();
		        break;
	//	case 3:grade5_6();
	}
	if(flag==0)
	cout<<"结束！全部正确，太棒了！"<<endl;
	else
	cout<<"结束！错了" <<flag <<"题哦" <<endl;
}

