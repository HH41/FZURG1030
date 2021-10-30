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
	int i,a,b,c,d,op,result,num;
	char s;
	int ans,input;
	cin>>number;
	for(i=0;i<number;i++)
	{
	a=rand()%101;
	b=rand()%101;
	c=rand()%101;
	d=rand()%101;
	op=rand()%16;
	switch(op){
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
			cout<<a<<"+"<<b<<"+"<<c<<"="<<endl;
			result=a+b+c;
			cin>>ans;
			if(ans!=result)flag++;
			break; 
		case 3:
			cout<<a<<"+"<<b<<"-"<<c<<"="<<endl;
			result=a+b-c;
			cin>>ans;
			if(ans!=result)flag++;
			break;
		case 4:
			cout<<a<<"-"<<b<<"-"<<c<<"="<<endl;
			result=a-b-c;
			cin>>ans;
			if(ans!=result)flag++;
			break;
		case 5:
			cout<<a<<"-("<<b<<"-"<<c<<")"<<"="<<endl;
			result=a-(b-c);
			cin>>ans;
			if(ans!=result)flag++;
			break;
		case 6:
			cout<<a<<"-"<<b<<"+"<<c<<"="<<endl;
			result=a-b+c;
			cin>>ans;
			if(ans!=result)flag++;
			break;
		case 7:
			cout<<a<<"-("<<b<<"+"<<c<<")"<<"="<<endl;
			result=a-(b+c);
			cin>>ans;
			if(ans!=result)flag++;
			break;
		case 8:
			cout<<a<<"+"<<b<<"+"<<c<<"+"<<d<<"="<<endl;
			result=a+b+c+d;
			cin>>ans;
			if(ans!=result)flag++;
			break; 
		case 9:
			cout<<a<<"+"<<b<<"+"<<c<<"-"<<d<<"="<<endl;
			result=a+b+c-d;
			cin>>ans;
			if(ans!=result)flag++;
			break;
		case 10:
			cout<<a<<"+"<<b<<"-"<<c<<"-"<<d<<"="<<endl;
			result=a+b-c-d;
			cin>>ans;
			if(ans!=result)flag++;
			break;
		case 11:
			cout<<a<<"+"<<b<<"-("<<c<<"-"<<d<<")"<<"="<<endl;
			result=a+b-(c-d);
			cin>>ans;
			if(ans!=result)flag++;
			break;
		case 12:
			cout<<a<<"-"<<b<<"-"<<c<<"-"<<d<<"="<<endl;
			result=a-b-c-d;
			cin>>ans;
			if(ans!=result)flag++;
			break;
		case 13:
			cout<<a<<"-"<<b<<"-("<<c<<"-"<<d<<")"<<"="<<endl;
			result=a-b-(c-d);
			cin>>ans;
			if(ans!=result)flag++;
			break;
		case 14:
			cout<<a<<"-("<<b<<"-"<<c<<"-"<<d<<")"<<"="<<endl;
			result=a-(b-c-d);
			cin>>ans;
			if(ans!=result)flag++;
			break;
		case 15:
			cout<<a<<"-("<<b<<"-"<<c<<")"<<"-"<<d<<"="<<endl;
			result=a-(b-c)-d;
			cin>>ans;
			if(ans!=result)flag++;
			break;}
	}
	return flag ; 
}


//三四年级计算 
int grade3_4()
{
	int number;  //number为题目数目 
	srand(time(NULL));
	float result,ans;
	int op,result1;
	cin>>number;
		for(int i=0;i<number;i++){
		int ele_num=rand()%2+2;         //ele_num为该题元素个数
		if(ele_num==2){
			int a=rand()%10001;
	        int b=rand()%10001;
	        op=rand()%4;
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
			    result1=(int)(result*100+0.5);
			    result=result1/100.0;
				cin>>ans;
			    if(ans!=result)flag++;
			    break; 
	        }
		}
		else{                            //ele_num=3; 
		int a=rand()%10001;
	    int b=rand()%10001;
	    int c=rand()%10001;
	    op=rand()%20;
	    switch(op)
	    {
	    	case 1:
			    cout<<a<<"+"<<b<<"-"<<c<<"="<<endl;
			    result=a+b-c;
			    cin>>ans;
			    if(ans!=result)flag++;
				break;	    	
			case 2:
			    cout<<a<<"+"<<b<<"+"<<c<<"="<<endl;
			    result=a+b+c;
			    cin>>ans;
			    if(ans!=result)flag++;
			    break;
			case 3:
			    cout<<a<<"+"<<b<<"*"<<c<<"="<<endl;
			    result=a+b*c;
			    cin>>ans;
			    if(ans!=result)flag++;
			    break;
			case 4:
			    cout<<a<<"+"<<b<<"/"<<c<<"="<<endl;
			    result=a+(double)b/(double)c;
			    result1=(int)(result*100+0.5);
			    result=result1/100.0;
			    cin>>ans;
			    if(ans!=result)flag++;                //+
			    break;
			case 5:
			    cout<<a<<"-"<<b<<"-"<<c<<"="<<endl;
			    result=a-b-c;
			    cin>>ans;
			    if(ans!=result)flag++;
			    break;
	    	case 6:
			    cout<<a<<"-"<<b<<"+"<<c<<"="<<endl;
			    result=a-b+c;
			    cin>>ans;
			    if(ans!=result)flag++;
			    break;
	    	case 7:
			    cout<<a<<"-"<<b<<"*"<<c<<"="<<endl;
			    result=a-b*c;
			    cin>>ans;
			    if(ans!=result)flag++;
			    break;
	    	case 8:
			    cout<<a<<"-"<<b<<"/"<<c<<"="<<endl;
			    result=a-(double)b/(double)c;
			    result1=(int)(result*100+0.5);
			    result=result1/100.0;
			    cin>>ans;
			    if(ans!=result)flag++;
			    break;
	    	case 9:
			    cout<<a<<"*"<<b<<"-"<<c<<"="<<endl;
			    result=a*b-c;
			    cin>>ans;
			    if(ans!=result)flag++;
			    break;
			case 10:
			    cout<<a<<"*"<<b<<"+"<<c<<"="<<endl;
			    result=a*b+c;
			    cin>>ans;
			    if(ans!=result)flag++;
			    break;
	    	case 11:
			    cout<<"("<<a<<"+"<<b<<")"<<"*"<<c<<"="<<endl;  //括号开始 
			    result=(a+b)*c;
			    cin>>ans;
			    if(ans!=result)flag++;
			    break;
	    	case 12:
			    cout<<"("<<a<<"-"<<b<<")"<<"-"<<c<<"="<<endl;
			    result=(a-b)*c;
			    cin>>ans;
			    if(ans!=result)flag++;
			    break;
	    	case 13:
			    cout<<"("<<a<<"+"<<b<<")"<<"/"<<c<<"="<<endl;
			    result=((double)a+(double)b)/(double)c;
			    result1=(int)(result*100+0.5);
			    result=result1/100.0;
			    cin>>ans;
			    if(ans!=result)flag++;
			    break;
	    	case 14:
			    cout<<"("<<a<<"-"<<b<<")"<<"*"<<c<<"="<<endl;
			    result=(a-b)*c;
			    cin>>ans;
			    if(ans!=result)flag++;
			    break;
		    case 15:
			    cout<<a<<"*"<<"("<<b<<"+"<<c<<")"<<"="<<endl;  
			    result=a*(b+c);
			    cin>>ans;
			    if(ans!=result)flag++;
			    break;
		    case 16:
			    cout<<a<<"*"<<"("<<b<<"-"<<c<<")"<<"="<<endl;  
			    result=a*(b-c);
			    cin>>ans;
			    if(ans!=result)flag++;
			    break;
		    case 17:
			    cout<<a<<"/"<<"("<<b<<"+"<<c<<")"<<"="<<endl;  
			    result=(double)a/((double)b+(double)c);
			    result1=(int)(result*100+0.5);
			    result=result1/100.0;
			    cin>>ans;
			    if(ans!=result)flag++;
			    break;
		    case 18:
			    cout<<a<<"/"<<"("<<b<<"-"<<c<<")"<<"="<<endl;  
			    result=(double)a/((double)b-(double)c);
			    result1=(int)(result*100+0.5);
			    result=result1/100.0;
			    cin>>ans;
			    if(ans!=result)flag++;
			    break;
		    case 19:
			    cout<<a<<"-"<<"("<<b<<"+"<<c<<")"<<"="<<endl;  
			    result=a-(b+c);
			    cin>>ans;
			    if(ans!=result)flag++;
			    break;
		    case 20:
			    cout<<a<<"-"<<"("<<b<<"-"<<c<<")"<<"="<<endl;  
			    result=a-(b-c);
			    cin>>ans;
			    if(ans!=result)flag++;
			    break;
        }

		}
   }
   return flag;

}


//五六年级计算 

int grade5_6()
{	//int flag = 0;
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

	}
	return flag;
}

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
		case 3: grade5_6();
		        break;
	}
	if(flag==0)
	cout<<"结束！全部正确，太棒了！"<<endl;
	else
	cout<<"结束！错了" <<flag <<"题哦" <<endl;
}
