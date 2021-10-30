#include<bits/stdc++.h> 
using namespace std;
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
int main()
{
	grade1_2();
	if(flag==0)
	cout<<"结束！全部正确，太棒了！"<<endl;
	else
	cout<<"结束！错了" <<flag <<"题哦" <<endl;
}
