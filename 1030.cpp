#include<stdio.h>
#include<bits/stdc++.h>
#include <time.h>
#include <unistd.h>
using namespace std;


int change(string s){//����string���Ͳ��� 

	string a("һ"); 
	string b("��"); 
	string c("��"); 
	string d("��"); 
	string e("��"); 
	string f("��");  
	if (s.substr(0,2)==a||s.substr(0,2)==b)
		return 1; //һ���꼶����1 
	if (s.substr(0,2)==c||s.substr(0,2)==d)
		return 2; //�����꼶����2 
	if (s.substr(0,2)==e||s.substr(0,2)==f)
		return 3;//�����꼶����3 
}



	
	
//���������	
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


//������������ 
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

//һ���꼶���� 
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


//�����꼶���� 
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
//cout<<"������"<<flag; 
	return flag; 
}


//�����꼶���� 
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

//�ж� 
int panduan(double input,double ans)
{
    if(ans!=input)
    {
        flag++;	
	}
}



int main(){
	printf("����������꼶\n");
	string a;
	int b;
	int grade;
	cin>>a;
	printf("��������Ŀ��\n");
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
	cout<<"������ȫ����ȷ��̫���ˣ�"<<endl;
	else
	cout<<"����������" <<flag <<"��Ŷ" <<endl;
}

