#include<bits/stdc++.h> 
using namespace std;
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
}

	return flag ; 
}
int main()
{
	grade1_2();
	if(flag==0)
	cout<<"������ȫ����ȷ��̫���ˣ�"<<endl;
	else
	cout<<"����������" <<flag <<"��Ŷ" <<endl;
}
