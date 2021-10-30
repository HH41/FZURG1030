#include<bits/stdc++.h> 
using namespace std;
int flag=0;
int result1;
int grade1_2()
{
	int number,op,i;
	srand(time(NULL));
	float a,b,c,d,result,num;
	char s;
	float ans,input;
	cout<<"请输入你的年级"<<endl; 
	cout<<"六年级"<<endl; 
	cout<<"请输入题目数"<<endl; 
	cin>>number;
	for(i=0;i<number;i++)
	{
	a=(float)rand()/RAND_MAX*(10000-0)+0;
	b=(float)rand()/RAND_MAX*(10000-0)+0;
	c=(float)rand()/RAND_MAX*(10000-0)+0;
	d=(float)rand()/RAND_MAX*(10000-0)+0;
	op=rand()%227;
	switch(op)
		{
		case 0:
			printf("%f+%f=\n",a,b);
			result = a+b;
			scanf("%f",&ans);
			result1 = (int)(result*100+0.5);
	        result = result1 /100.0;
			if(ans!=result)flag++;
			break;
		case 1:
			printf("%f-%f=\n",a,b);
			result = a-b;
			scanf("%f",&ans);
			result1 = (int)(result*100+0.5);
	        result = result1 /100.0;
			if(ans!=result)flag++;
			
			break;
		case 2:
			printf("%f*%f=\n",a,b);
			result = a*b;
			scanf("%f",&ans);
			result1 = (int)(result*100+0.5);
	        result = result1 /100.0;
			if(ans!=result)flag++;
			break;
		case 3:
			printf("%f/%f=\n",a,b);
			result = a/b;
			scanf("%f",&ans);
			result1 = (int)(result*100+0.5);
	        result = result1 /100.0;
			if(ans!=result)flag++;
			break;
		case 4:
			printf("(%d+%d)+%d=\n",a,b,c);
			result = (a+b)+c;
			scanf("%d",&ans);
			result1 = (int)(result*100+0.5);
	        result = result1 /100.0;
			if(ans!=result)flag++;
			break;			
		case 5:
			printf("%f+(%f+%f)=\n",a,b,c);
			result = a+(b+c);
			scanf("%f",&ans);
			result1 = (int)(result*100+0.5);
	        result = result1 /100.0;
			if(ans!=result)flag++;
			break;
		case 6:
			printf("(%d+%d)-%d=\n",a,b,c);
			result = (a+b)-c;
			scanf("%d",&ans);
			result1 = (int)(result*100+0.5);
	        result = result1 /100.0;
			if(ans!=result)flag++;
			break;			
		case 7:
			printf("%f+(%f-%f)=\n",a,b,c);
			result = a+(b-c);
			scanf("%f",&ans);
			result1 = (int)(result*100+0.5);
	        result = result1 /100.0;
			if(ans!=result)flag++;
			break;
		case 8:
			printf("(%f+%f)*%f=\n",a,b,c);
			result = (a+b)*c;
			scanf("%f",&ans);
			result1 = (int)(result*100+0.5);
	        result = result1 /100.0;
			if(ans!=result)flag++;
			break;			
		case 9:
			printf("%f+(%f*%f)=\n",a,b,c);
			result = a+(b*c);
			scanf("%f",&ans);
			result1 = (int)(result*100+0.5);
	        result = result1 /100.0;
			if(ans!=result)flag++;
			break;
		case 10:
			printf("(%f+%f)/%f=\n",a,b,c);
			result = (a+b)/c;
			scanf("%f",&ans);
			result1 = (int)(result*100+0.5);
	        result = result1 /100.0;
			if(ans!=result)flag++;
			break;			
		case 11:
			printf("%f+(%f/%f)=\n",a,b,c);
			result = a+(b/c);
			scanf("%f",&ans);
			result1 = (int)(result*100+0.5);
	        result = result1 /100.0;
			if(ans!=result)flag++;
			break;
		case 12:
			printf("(%f-%f)+%f=\n",a,b,c);
			result = (a-b)+c;
			scanf("%f",&ans);
			result1 = (int)(result*100+0.5);
	        result = result1 /100.0;
			if(ans!=result)flag++;
			break;			
		case 13:
			printf("%f-(%f+%f)=\n",a,b,c);
			result = a-(b+c);
			scanf("%f",&ans);
			result1 = (int)(result*100+0.5);
	        result = result1 /100.0;
			if(ans!=result)flag++;
			break;
		case 14:
			printf("(%f-%f)-%f=\n",a,b,c);
			result = (a-b)-c;
			scanf("%f",&ans);
			result1 = (int)(result*100+0.5);
	        result = result1 /100.0;
			if(ans!=result)flag++;
			break;			
		case 15:
			printf("%f-(%f-%f)=\n",a,b,c);
			result = a-(b-c);
			scanf("%f",&ans);
			result1 = (int)(result*100+0.5);
	        result = result1 /100.0;
			if(ans!=result)flag++;
			break;
		case 16:
			printf("(%df-%f)*%d=\n",a,b,c);
			result = (a-b)*c;
			scanf("%f",&ans);
			result1 = (int)(result*100+0.5);
	        result = result1 /100.0;
			if(ans!=result)flag++;
			break;			
		case 17:
			printf("%f-(%f*%f)=\n",a,b,c);
			result = a-(b*c);
			scanf("%f",&ans);
			result1 = (int)(result*100+0.5);
	        result = result1 /100.0;
			if(ans!=result)flag++;
			break;
		case 18:
			printf("(%f-%f)/%f=\n",a,b,c);
			result = (a-b)/c;
			scanf("%f",&ans);
			result1 = (int)(result*100+0.5);
	        result = result1 /100.0;
			if(ans!=result)flag++;
			break;			
		case 19:
			printf("%f-(%f/%f)=\n",a,b,c);
			result = a-(b/c);
			scanf("%f",&ans);
			result1 = (int)(result*100+0.5);
	        result = result1 /100.0;
			if(ans!=result)flag++;
			break;
		case 20:
			printf("(%f*%f)+%f=\n",a,b,c);
			result = (a*b)+c;
			scanf("%f",&ans);
			result1 = (int)(result*100+0.5);
	        result = result1 /100.0;
			if(ans!=result)flag++;
			break;			
		case 21:
			printf("%f*(%f+%f)=\n",a,b,c);
			result = a*(b+c);
			scanf("%f",&ans);
			result1 = (int)(result*100+0.5);
	        result = result1 /100.0;
			if(ans!=result)flag++;
			break;
		case 22:
			printf("(%f*%f)-%f=\n",a,b,c);
			result = (a*b)-c;
			scanf("%f",&ans);
			result1 = (int)(result*100+0.5);
	        result = result1 /100.0;
			if(ans!=result)flag++;
			break;			
		case 23:
			printf("%f*(%f-%f)=\n",a,b,c);
			result = a*(b-c);
			scanf("%f",&ans);
			result1 = (int)(result*100+0.5);
	        result = result1 /100.0;
			if(ans!=result)flag++;
			break;
		case 24:
			printf("(%f*%f)*%f=\n",a,b,c);
			result = (a*b)*c;
			scanf("%f",&ans);
			result1 = (int)(result*100+0.5);
	        result = result1 /100.0;
			if(ans!=result)flag++;
			break;			
		case 25:
			printf("%f*(%f*%f)=\n",a,b,c);
			result = a*(b*c);
			scanf("%f",&ans);
			result1 = (int)(result*100+0.5);
	        result = result1 /100.0;
			if(ans!=result)flag++;
			break;
		case 26:
			printf("(%f*%f)/%f=\n",a,b,c);
			result = (a*b)/c;
			scanf("%f",&ans);
			result1 = (int)(result*100+0.5);
	        result = result1 /100.0;
			if(ans!=result)flag++;
			break;			
		case 27:
			printf("%f*(%f/%f)=\n",a,b,c);
			result = a*(b/c);
			scanf("%f",&ans);
			result1 = (int)(result*100+0.5);
	        result = result1 /100.0;
			if(ans!=result)flag++;
			break;
		case 28:
			printf("(%f/%f)+%f=\n",a,b,c);
			result = (a/b)+c;
			scanf("%f",&ans);
			result1 = (int)(result*100+0.5);
	        result = result1 /100.0;
			if(ans!=result)flag++;
			break;			
		case 29:
			printf("%f/(%f+%f)=\n",a,b,c);
			result = a/(b+c);
			scanf("%f",&ans);
			result1 = (int)(result*100+0.5);
	        result = result1 /100.0;
			if(ans!=result)flag++;
			break;
		case 30:
			printf("(%f/%f)-%f=\n",a,b,c);
			result = (a/b)-c;
			scanf("%f",&ans);
			result1 = (int)(result*100+0.5);
	        result = result1 /100.0;
			if(ans!=result)flag++;
			break;			
		case 31:
			printf("%f/(%f-%f)=\n",a,b,c);
			result = a/(b-c);
			scanf("%f",&ans);
			result1 = (int)(result*100+0.5);
	        result = result1 /100.0;
			if(ans!=result)flag++;
			break;
		case 32:
			printf("(%f/%f)*%f=\n",a,b,c);
			result = (a/b)*c;
			scanf("%f",&ans);
			result1 = (int)(result*100+0.5);
	        result = result1 /100.0;
			if(ans!=result)flag++;
			break;			
		case 33:
			printf("%f/(%f*%f)=\n",a,b,c);
			result = a/(b*c);
			scanf("%f",&ans);
			result1 = (int)(result*100+0.5);
	        result = result1 /100.0;
			if(ans!=result)flag++;
			break;
		case 34:
			printf("(%f/%f)/%f=\n",a,b,c);
			result = (a/b)/c;
			scanf("%f",&ans);
			result1 = (int)(result*100+0.5);
	        result = result /100.0;
			if(ans!=result)flag++;
			break;			
		case 35:
			printf("%f/(%f/%f)=\n",a,b,c);
			result = a/(b/c);
			scanf("%f",&ans);
			result1 = (int)(result*100+0.5);
	        result = result1 /100.0;
			if(ans!=result)flag++;
			break;		
		case 36:
			printf("(%f+%f+%f)+%f=\n",a,b,c,d);
			result = (a+b+c)+d;
			scanf("%f",&ans);
			result1 = (int)(result*100+0.5);
	        result = result1 /100.0;
			if(ans!=result)flag++;
			break;
		case 37:
			printf("%f+(%f+%f)+%f=\n",a,b,c,d);
			result = a+(b+c)+d;
			scanf("%f",&ans);
			result1 = (int)(result*100+0.5);
	        result = result1 /100.0;
			if(ans!=result)flag++;
			break;			
		case 38:
			printf("%f+(%f+%f+%f)=\n",a,b,c,d);
			result = a+(b+c+d);
			scanf("%f",&ans);
			result1 = (int)(result*100+0.5);
	        result = result1 /100.0;
			if(ans!=result)flag++;
			break;
		
		case 39:
			printf("(%f+%f+%f)-%f=\n",a,b,c,d);
			result = (a+b+c)-d;
			scanf("%f",&ans);
			result1 = (int)(result*100+0.5);
	        result = result1 /100.0;
			if(ans!=result)flag++;
			break;
		case 40:
			printf("%f+(%f+%f)-%f=\n",a,b,c,d);
			result = a+(b+c)-d;
			scanf("%f",&ans);
			result1 = (int)(result*100+0.5);
	        result = result /100.0;
			if(ans!=result)flag++;
			break;			
		case 41:
			printf("%f+(%f+%f-%f)=\n",a,b,c,d);
			result = a+(b+c-d);
			scanf("%f",&ans);
			result1 = (int)(result*100+0.5);
	        result = result1 /100.0;
			if(ans!=result)flag++;
			break;
		
		case 42:
			printf("(%f+%f+%f)*%d=\n",a,b,c,d);
			result = (a+b+c)*d;
			scanf("%f",&ans);
			result1 = (int)(result*100+0.5);
	        result = result1 /100.0;
			if(ans!=result)flag++;
			break;
		case 43:
			printf("%f+(%f+%f)*%f=\n",a,b,c,d);
			result = a+(b+c)*d;
			scanf("%f",&ans);
			result1 = (int)(result*100+0.5);
	        result = result1 /100.0;
			if(ans!=result)flag++;
			break;			
		case 44:
			printf("%f+(%f+%f*%f)=\n",a,b,c,d);
			result = a+(b+c*d);
			scanf("%f",&ans);
			result1 = (int)(result*100+0.5);
	        result = result1 /100.0;
			if(ans!=result)flag++;
			break;
		
		case 45:
			printf("(%f+%f+%f)/%f=\n",a,b,c,d);
			result = (a+b+c)/d;
			scanf("%f",&ans);
			result1 = (int)(result*100+0.5);
	        result = result1 /100.0;
			if(ans!=result)flag++;
			break;
		case 46:
			printf("%f+(%f+%f)/%f=\n",a,b,c,d);
			result = a+(b+c)/d;
			scanf("%f",&ans);
			result1 = (int)(result*100+0.5);
	        result = result1 /100.0;
			if(ans!=result)flag++;
			break;			
		case 47:
			printf("%f+(%f+%f/%f)=\n",a,b,c,d);
			result = a+(b+c/d);
			scanf("%f",&ans);
			result1 = (int)(result*100+0.5);
	        result = result1 /100.0;
			if(ans!=result)flag++;
			break;
		
		case 48:
			printf("(%f-%f+%f)+%f=\n",a,b,c,d);
			result = (a-b+c)+d;
			scanf("%f",&ans);
			result1 = (int)(result*100+0.5);
	        result = result1 /100.0;
			if(ans!=result)flag++;
			break;
		case 49:
			printf("%f-(%f+%f)+%f=\n",a,b,c,d);
			result = a-(b+c)+d;
			scanf("%f",&ans);
			result1 = (int)(result*100+0.5);
	        result = result1 /100.0;
			if(ans!=result)flag++;
			break;			
		case 50:
			printf("%f-(%f+%f+%f)=\n",a,b,c,d);
			result = a-(b+c+d);
			scanf("%f",&ans);
			result1 = (int)(result*100+0.5);
	        result = result1 /100.0;
			if(ans!=result)flag++;
			break;
		
		case 51:
			printf("(%f-%f+%f)-%f=\n",a,b,c,d);
			result = (a-b+c)-d;
			scanf("%df",&ans);
			result1 = (int)(result*100+0.5);
	        result = result1 /100.0;
			if(ans!=result)flag++;
			break;
		case 52:
			printf("%f-(%f+%f)-%f=\n",a,b,c,d);
			result = a-(b+c)-d;
			scanf("%f",&ans);
			result1 = (int)(result*100+0.5);
	        result = result1 /100.0;
			if(ans!=result)flag++;
			break;			
		case 53:
			printf("%f-(%f+%f-%f)=\n",a,b,c,d);
			result = a-(b+c-d);
			scanf("%f",&ans);
			result1 = (int)(result*100+0.5);
	        result = result1 /100.0;
			if(ans!=result)flag++;
			break;
		
		case 54:
			printf("(%f-%f+%f)*%f=\n",a,b,c,d);
			result = (a-b+c)*d;
			scanf("%f",&ans);
			result1 = (int)(result*100+0.5);
	        result = result1 /100.0;
			if(ans!=result)flag++;
			break;
		case 55:
			printf("%f-(%f+%f)*%f=\n",a,b,c,d);
			result = a-(b+c)*d;
			scanf("%f",&ans);
			result1 = (int)(result*100+0.5);
	        result = result1 /100.0;
			if(ans!=result)flag++;
			break;			
		case 56:
			printf("%f-(%f+%f*%f)=\n",a,b,c,d);
			result = a-(b+c*d);
			scanf("%f",&ans);
			result1 = (int)(result*100+0.5);
	        result = result1 /100.0;
			if(ans!=result)flag++;
			break;
		
		case 57:
			printf("(%f-%f+%f)/%f=\n",a,b,c,d);
			result = (a-b+c)/d;
			scanf("%f",&ans);
			result1 = (int)(result*100+0.5);
	        result = result1 /100.0;
			if(ans!=result)flag++;
			break;
		case 58:
			printf("%f-(%f+%f)/%f=\n",a,b,c,d);
			result = a-(b+c)/d;
			scanf("%f",&ans);
			result1 = (int)(result*100+0.5);
	        result = result1 /100.0;
			if(ans!=result)flag++;
			break;			
		case 59:
			printf("%f-(%f+%f/%f)=\n",a,b,c,d);
			result = a-(b+c/d);
			scanf("%f",&ans);
			result1 = (int)(result*100+0.5);
	        result = result1 /100.0;
			if(ans!=result)flag++;
			break;
		
		case 60:
			printf("(%f*%f+%f)+%f=\n",a,b,c,d);
			result = (a*b+c)+d;
			scanf("%f",&ans);
			result1 = (int)(result*100+0.5);
	        result = result1 /100.0;
			if(ans!=result)flag++;
			break;
		case 61:
			printf("%f*(%f+%f)+%f=\n",a,b,c,d);
			result = a*(b+c)+d;
			scanf("%f",&ans);
			result1 = (int)(result*100+0.5);
	        result = result1 /100.0;
			if(ans!=result)flag++;
			break;			
		case 62:
			printf("%f*(%f+%f+%f)=\n",a,b,c,d);
			result = a*(b+c+d);
			scanf("%f",&ans);
			result1 = (int)(result*100+0.5);
	        result = result1 /100.0;
			if(ans!=result)flag++;
			break;
		
		case 63:
			printf("(%f*%f+%f)-%f=\n",a,b,c,d);
			result = (a*b+c)-d;
			scanf("%f",&ans);
			result1 = (int)(result*100+0.5);
	        result = result1 /100.0;
			if(ans!=result)flag++;
			break;
		case 64:
			printf("%f*(%f+%f)-%f=\n",a,b,c,d);
			result = a*(b+c)-d;
			scanf("%f",&ans);
			result1 = (int)(result*100+0.5);
	        result = result1 /100.0;
			if(ans!=result)flag++;
			break;			
		case 65:
			printf("%f*(%f+%f-%f)=\n",a,b,c,d);
			result = a*(b+c-d);
			scanf("%f",&ans);
			result1 = (int)(result*100+0.5);
	        result = result1 /100.0;
			if(ans!=result)flag++;
			break;
			
		case 66:
			printf("(%f*%f+%f)*%f=\n",a,b,c,d);
			result = (a*b+c)*d;
			scanf("%f",&ans);
			result1 = (int)(result*100+0.5);
	        result = result1 /100.0;
			if(ans!=result)flag++;
			break;
		case 67:
			printf("%f*(%f+%f)*%f=\n",a,b,c,d);
			result = a*(b+c)*d;
			scanf("%f",&ans);
			result1 = (int)(result*100+0.5);
	        result = result1 /100.0;
			if(ans!=result)flag++;
			break;			
		case 68:
			printf("%f*(%f+%f*%f)=\n",a,b,c,d);
			result = a*(b+c*d);
			scanf("%f",&ans);
		    result1 = (int)(result*100+0.5);
	        result = result1 /100.0;
			if(ans!=result)flag++;
			break;
		
		case 69:
			printf("(%f*%f+%f)/%f=\n",a,b,c,d);
			result = (a*b+c)/d;
			scanf("%f",&ans);
			result1 = (int)(result*100+0.5);
	        result = result1 /100.0;
			if(ans!=result)flag++;
			break;
		case 70:
			printf("%f*(%f+%f)/%f=\n",a,b,c,d);
			result = a*(b+c)/d;
			scanf("%f",&ans);
			result1 = (int)(result*100+0.5);
	        result = result1 /100.0;
			if(ans!=result)flag++;
			break;			
		case 71:
			printf("%f*(%f+%f/%f)=\n",a,b,c,d);
			result = a*(b+c/d);
			scanf("%f",&ans);
			result1 = (int)(result*100+0.5);
	        result = result1 /100.0;
			if(ans!=result)flag++;
			break;
		
		case 72:
			printf("(%f/%f+%f)+%f=\n",a,b,c,d);
			result = (a/b+c)+d;
			scanf("%f",&ans);
			result1 = (int)(result*100+0.5);
	        result = result1 /100.0;
			if(ans!=result)flag++;
			break;
		case 73:
			printf("%f/(%f+%f)+%f=\n",a,b,c,d);
			result = a/(b+c)+d;
			scanf("%f",&ans);
			result1 = (int)(result*100+0.5);
	        result = result1 /100.0;
			if(ans!=result)flag++;
			break;			
		case 74:
			printf("%f/(%f+%f+%f)=\n",a,b,c,d);
			result = a/(b+c+d);
			scanf("%f",&ans);
			result1 = (int)(result*100+0.5);
	        result = result1 /100.0;
			if(ans!=result)flag++;
			break;
		
		case 75:
			printf("(%f/%f+%f)-%f=\n",a,b,c,d);
			result = (a/b+c)-d;
			scanf("%f",&ans);
			result1 = (int)(result*100+0.5);
	        result = result1 /100.0;
			if(ans!=result)flag++;
			break;
		case 76:
			printf("%f/(%f+%f)-%f=\n",a,b,c,d);
			result = a/(b+c)-d;
			scanf("%f",&ans);
			result1 = (int)(result*100+0.5);
	        result = result1 /100.0;
			if(ans!=result)flag++;
			break;			
		case 77:
			printf("%f/(%f+%f-%f)=\n",a,b,c,d);
			result = a/(b+c-d);
			result1 = (int)(result*100+0.5);
	        result = result1 /100.0;
			if(ans!=result1)flag++;
			if(ans!=result)flag++;
			break;	
		
		case 78:
			printf("(%f/%f+%f)*%f=\n",a,b,c,d);
			result = (a/b+c)*d;
			scanf("%f",&ans);
			result1 = (int)(result*100+0.5);
	        result = result1 /100.0;
			if(ans!=result)flag++;
			break;
		case 79:
			printf("%f/(%f+%f)*%f=\n",a,b,c,d);
			result = a/(b+c)*d;
			scanf("%f",&ans);
			result1 = (int)(result*100+0.5);
	        result = result1 /100.0;
			if(ans!=result)flag++;
			break;			
		case 80:
			printf("%f/(%f+%f*%f)=\n",a,b,c,d);
			result = a/(b+c*d);
			scanf("%f",&ans);
			result1 = (int)(result*100+0.5);
	        result = result1 /100.0;
			if(ans!=result)flag++;
			break;
		
		case 81:
			printf("(%f/%f+%f)/%f=\n",a,b,c,d);
			result = (a/b+c)/d;
			scanf("%f",&ans);
			result1 = (int)(result*100+0.5);
	        result = result1 /100.0;
			if(ans!=result)flag++;
			break;
		case 82:
			printf("%f/(%f+%f)/%f=\n",a,b,c,d);
			result = a/(b+c)/d;
			scanf("%f",&ans);
			result1 = (int)(result*100+0.5);
	        result = result1 /100.0;
			if(ans!=result)flag++;
			break;			
		case 83:
			printf("%f/(%f+%f/%f)=\n",a,b,c,d);
			result = a/(b+c/d);
			scanf("%f",&ans);
			result1 = (int)(result*100+0.5);
	        result = result1 /100.0;
			if(ans!=result)flag++;
			break;
		
		case 84:
			printf("(%f+%f-%f)+%f=\n",a,b,c,d);
			result = (a+b-c)+d;
			scanf("%f",&ans);
			result1 = (int)(result*100+0.5);
	        result = result1 /100.0;
			if(ans!=result)flag++;
			break;
		case 85:
			printf("%f+(%f-%f)+%f=\n",a,b,c,d);
			result = a+(b-c)+d;
			scanf("%f",&ans);
			result1 = (int)(result*100+0.5);
	        result = result1 /100.0;
			if(ans!=result)flag++;
			break;			
		case 86:
			printf("%f+(%f-%f+%f)=\n",a,b,c,d);
			result = a+(b-c+d);
			scanf("%f",&ans);
			result1 = (int)(result*100+0.5);
	        result = result1 /100.0;
			if(ans!=result)flag++;
			break;
		
		case 87:
			printf("(%f+%f-%f)-%f=\n",a,b,c,d);
			result = (a+b-c)-d;
			scanf("%f",&ans);
			result1 = (int)(result*100+0.5);
	        result = result1 /100.0;
			if(ans!=result)flag++;
			break;
		case 88:
			printf("%f+(%f-%f)-%f=\n",a,b,c,d);
			result = a+(b-c)-d;
			scanf("%f",&ans);
			result1 = (int)(result*100+0.5);
	        result = result1 /100.0;
			if(ans!=result)flag++;
			break;			
		case 89:
			printf("%f+(%f-%f-%f)=\n",a,b,c,d);
			result = a+(b-c-d);
			scanf("%f",&ans);
			result1 = (int)(result*100+0.5);
	        result = result1 /100.0;
			if(ans!=result)flag++;
			break;
		
		case 90:
			printf("(%f+%f-%f)*%f=\n",a,b,c,d);
			result = (a+b-c)*d;
			scanf("%f",&ans);
			result1 = (int)(result*100+0.5);
	        result = result1 /100.0;
			if(ans!=result)flag++;
			break;
		case 91:
			printf("%f+(%f-%f)*%f=\n",a,b,c,d);
			result = a+(b-c)*d;
			scanf("%f",&ans);
			result1 = (int)(result*100+0.5);
	        result = result1 /100.0;
			if(ans!=result)flag++;
			break;			
		case 92:
			printf("%f+(%f-%f*%f)=\n",a,b,c,d);
			result = a+(b-c*d);
			scanf("%f",&ans);
			result1 = (int)(result*100+0.5);
	        result = result1 /100.0;
			if(ans!=result)flag++;
			break;
		
		case 93:
			printf("(%f+%f-%f)/%f=\n",a,b,c,d);
			result = (a+b-c)/d;
			scanf("%f",&ans);
			result1 = (int)(result*100+0.5);
	        result = result1 /100.0;
			if(ans!=result)flag++;
			break;
		case 94:
			printf("%f+(%f-%f)/%f=\n",a,b,c,d);
			result = a+(b-c)/d;
			scanf("%f",&ans);
			result1 = (int)(result*100+0.5);
	        result = result1 /100.0;
			if(ans!=result)flag++;
			break;			
		case 95:
			printf("%f+(%f-%f/%f)=\n",a,b,c,d);
			result = a+(b-c/d);
			scanf("%f",&ans);
			result1 = (int)(result*100+0.5);
	        result = result1 /100.0;
			if(ans!=result)flag++;
			break;
		
		case 96:
			printf("(%f-%f-%f)+%f=\n",a,b,c,d);
			result = (a-b-c)+d;
			scanf("%f",&ans);
			result1 = (int)(result*100+0.5);
	        result = result1 /100.0;
			if(ans!=result)flag++;
			break;
		case 97:
			printf("%f-(%f-%f)+%f=\n",a,b,c,d);
			result = a-(b-c)+d;
			scanf("%f",&ans);
			result1 = (int)(result*100+0.5);
	        result = result1 /100.0;
			if(ans!=result)flag++;
			break;			
		case 98:
			printf("%f-(%f-%f+%f)=\n",a,b,c,d);
			result = a-(b-c+d);
			scanf("%f",&ans);
			result1 = (int)(result*100+0.5);
	        result = result1 /100.0;
			if(ans!=result)flag++;
			break;
		
		case 99:
			printf("(%f-%f-%f)-%f=\n",a,b,c,d);
			result = (a-b-c)-d;
			scanf("%f",&ans);
			result1 = (int)(result*100+0.5);
	        result = result1 /100.0;
			if(ans!=result)flag++;
			break;
		case 100:
			printf("%f-(%f-%f)-%f=\n",a,b,c,d);
			result = a-(b-c)-d;
			scanf("%f",&ans);
			result1 = (int)(result*100+0.5);
	        result = result1 /100.0;
			if(ans!=result)flag++;
			break;			
		case 101:
			printf("%f-(%f-%f-%f)=\n",a,b,c,d);
			result = a-(b-c-d);
			scanf("%f",&ans);
			result1 = (int)(result*100+0.5);
	        result = result1 /100.0;
			if(ans!=result)flag++;
			break;
		
		case 102:
			printf("(%f-%f-%f)*%f=\n",a,b,c,d);
			result = (a-b-c)*d;
			scanf("%f",&ans);
			result1 = (int)(result*100+0.5);
	        result = result1 /100.0;
			if(ans!=result)flag++;
			break;
		case 103:
			printf("%f-(%f-%f)*%f=\n",a,b,c,d);
			result = a-(b-c)*d;
			scanf("%f",&ans);
			result1 = (int)(result*100+0.5);
	        result = result1 /100.0;
			if(ans!=result)flag++;
			break;			
		case 104:
			printf("%f-(%f-%f*%f)=\n",a,b,c,d);
			result = a-(b-c*d);
			scanf("%f",&ans);
			result1 = (int)(result*100+0.5);
	        result = result1 /100.0;
			if(ans!=result)flag++;
			break;
		
		case 105:
			printf("(%f-%f-%f)/%f=\n",a,b,c,d);
			result = (a-b-c)/d;
			scanf("%f",&ans);
			result1 = (int)(result*100+0.5);
	        result = result1 /100.0;
			if(ans!=result)flag++;
			break;
		case 106:
			printf("%f-(%f-%f)/%f=\n",a,b,c,d);
			result = a-(b-c)/d;
			scanf("%f",&ans);
			result1 = (int)(result*100+0.5);
	        result = result1 /100.0;
			if(ans!=result)flag++;
			break;			
		case 107:
			printf("%f-(%f-%f/%f)=\n",a,b,c,d);
			result = a-(b-c/d);
			scanf("%f",&ans);
			result1 = (int)(result*100+0.5);
	        result = result1 /100.0;
			if(ans!=result)flag++;
			break;
		
		case 108:
			printf("(%f*%f-%f)+%f=\n",a,b,c,d);
			result = (a*b-c)+d;
			scanf("%f",&ans);
			result1 = (int)(result*100+0.5);
	        result = result1 /100.0;
			if(ans!=result)flag++;
			break;
		case 109:
			printf("%f*(%f-%f)+%f=\n",a,b,c,d);
			result = a*(b-c)+d;
			scanf("%f",&ans);
			result1 = (int)(result*100+0.5);
	        result = result1 /100.0;
			if(ans!=result)flag++;
			break;			
		case 110:
			printf("%f*(%f-%f+%f)=\n",a,b,c,d);
			result = a*(b-c+d);
			scanf("%f",&ans);
			result1 = (int)(result*100+0.5);
	        result = result1 /100.0;
			if(ans!=result)flag++;
			break;
		
		case 111:
			printf("(%f*%f-%f)-%f=\n",a,b,c,d);
			result = (a*b-c)-d;
			scanf("%f",&ans);
			result1 = (int)(result*100+0.5);
	        result = result1 /100.0;
			if(ans!=result)flag++;
			break;
		case 112:
			printf("%f*(%f-%f)-%f=\n",a,b,c,d);
			result = a*(b-c)-d;
			scanf("%f",&ans);
			result1 = (int)(result*100+0.5);
	        result = result1 /100.0;
			if(ans!=result)flag++;
			break;			
		case 113:
			printf("%f*(%f-%f-%f)=\n",a,b,c,d);
			result = a*(b-c-d);
			scanf("%f",&ans);
			result1 = (int)(result*100+0.5);
	        result = result1 /100.0;
			if(ans!=result)flag++;
			break;
			
		case 114:
			printf("(%f*%f-%f)*%f=\n",a,b,c,d);
			result = (a*b-c)*d;
			scanf("%f",&ans);
			result1 = (int)(result*100+0.5);
	        result = result1 /100.0;
			if(ans!=result)flag++;
			break;
		case 115:
			printf("%f*(%f-%f)*%f=\n",a,b,c,d);
			result = a*(b-c)*d;
			scanf("%f",&ans);
			result1 = (int)(result*100+0.5);
	        result = result1 /100.0;
			if(ans!=result)flag++;
			break;			
		case 116:
			printf("%f*(%f-%f*%f)=\n",a,b,c,d);
			result = a*(b-c*d);
			scanf("%f",&ans);
			result1 = (int)(result*100+0.5);
	        result = result1 /100.0;
			if(ans!=result)flag++;
			break;
		
		case 117:
			printf("(%f*%f-%f)/%f=\n",a,b,c,d);
			result = (a*b-c)/d;
			scanf("%f",&ans);
			result1 = (int)(result*100+0.5);
	        result = result1 /100.0;
			if(ans!=result)flag++;
			break;
		case 118:
			printf("%f*(%f-%f)/%f=\n",a,b,c,d);
			result = a*(b-c)/d;
			scanf("%f",&ans);
			result1 = (int)(result*100+0.5);
	        result = result1 /100.0;
			if(ans!=result)flag++;
			break;			
		case 119:
			printf("%f*(%f-%f/%fd)=\n",a,b,c,d);
			result = a*(b-c/d);
			scanf("%f",&ans);
			result1 = (int)(result*100+0.5);
	        result = result1 /100.0;
			if(ans!=result)flag++;
			break;
		
		case 120:
			printf("(%f/%f-%f)+%f=\n",a,b,c,d);
			result = (a/b-c)+d;
			scanf("%f",&ans);
			result1 = (int)(result*100+0.5);
	        result = result1 /100.0;
			if(ans!=result)flag++;
			break;
		case 121:
			printf("%f/(%f-%f)+%f=\n",a,b,c,d);
			result = a/(b-c)+d;
			scanf("%f",&ans);
			result1 = (int)(result*100+0.5);
	        result = result1 /100.0;
			if(ans!=result)flag++;
			break;			
		case 122:
			printf("%f/(%f-%f+%f)=\n",a,b,c,d);
			result = a/(b-c+d);
			scanf("%f",&ans);
			result1 = (int)(result*100+0.5);
	        result = result1 /100.0;
			if(ans!=result)flag++;
			break;
		
		case 123:
			printf("(%f/%f-%f)-%f=\n",a,b,c,d);
			result = (a/b-c)-d;
			scanf("%f",&ans);
			result1 = (int)(result*100+0.5);
	        result = result1 /100.0;
			if(ans!=result)flag++;
			break;
		case 124:
			printf("%f/(%f-%f)-%f=\n",a,b,c,d);
			result = a/(b-c)-d;
			scanf("%f",&ans);
			result1 = (int)(result*100+0.5);
	        result = result1 /100.0;
			if(ans!=result)flag++;
			break;			
		case 125:
			printf("%f/(%f-%f-%f)=\n",a,b,c,d);
			result = a/(b-c-d);
			scanf("%f",&ans);
			result1 = (int)(result*100+0.5);
	        result = result1 /100.0;
			if(ans!=result)flag++;
			break;	
		
		case 126:
			printf("(%f/%f-%f)*%f=\n",a,b,c,d);
			result = (a/b-c)*d;
			scanf("%f",&ans);
			result1 = (int)(result*100+0.5);
	        result = result1 /100.0;
			if(ans!=result)flag++;
			break;
		case 127:
			printf("%f/(%f-%f)*%f=\n",a,b,c,d);
			result = a/(b-c)*d;
			scanf("%f",&ans);
			result1 = (int)(result*100+0.5);
	        result = result1 /100.0;
			if(ans!=result)flag++;
			break;			
		case 128:
			printf("%f/(%f-%f*%f)=\n",a,b,c,d);
			result = a/(b-c*d);
			scanf("%f",&ans);
			result1 = (int)(result*100+0.5);
	        result = result1 /100.0;
			if(ans!=result)flag++;
			break;
		
		case 129:
			printf("(%f/%f-%f)/%f=\n",a,b,c,d);
			result = (a/b-c)/d;
			scanf("%f",&ans);
			result1 = (int)(result*100+0.5);
	        result = result1 /100.0;
			if(ans!=result)flag++;
			break;
		case 130:
			printf("%f/(%f-%f)/%f=\n",a,b,c,d);
			result = a/(b-c)/d;
			scanf("%f",&ans);
			result1 = (int)(result*100+0.5);
	        result = result1 /100.0;
			if(ans!=result)flag++;
			break;			
		case 131:
			printf("%f/(%f-%f/%f)=\n",a,b,c,d);
			result = a/(b-c/d);
			scanf("%f",&ans);
			result1 = (int)(result*100+0.5);
	        result = result1 /100.0;
			if(ans!=result)flag++;
			break;
		
		case 132:
			printf("(%f+%f*%f)+%f=\n",a,b,c,d);
			result = (a+b*c)+d;
			scanf("%f",&ans);
			result1 = (int)(result*100+0.5);
	        result = result1 /100.0;
			if(ans!=result)flag++;
			break;
		case 133:
			printf("%f+(%f*%f)+%f=\n",a,b,c,d);
			result = a+(b*c)+d;
			scanf("%f",&ans);
			result1 = (int)(result*100+0.5);
	        result = result1 /100.0;
			if(ans!=result)flag++;
			break;			
		case 134:
			printf("%f+(%f*%f+%f)=\n",a,b,c,d);
			result = a+(b*c+d);
			scanf("%f",&ans);
			result1 = (int)(result*100+0.5);
	        result = result1 /100.0;
			if(ans!=result)flag++;
			break;
		
		case 135:
			printf("(%f+%f*%f)-%f=\n",a,b,c,d);
			result = (a+b*c)-d;
			scanf("%f",&ans);
			result1 = (int)(result*100+0.5);
	        result = result1 /100.0;
			if(ans!=result)flag++;
			break;
		case 136:
			printf("%f+(%f*%f)-%f=\n",a,b,c,d);
			result = a+(b*c)-d;
			scanf("%f",&ans);
			result1 = (int)(result*100+0.5);
	        result = result1 /100.0;
			if(ans!=result)flag++;
			break;			
		case 137:
			printf("%f+(%f*%f-%f)=\n",a,b,c,d);
			result = a+(b*c-d);
			scanf("%f",&ans);
			result1 = (int)(result*100+0.5);
	        result = result1 /100.0;
			if(ans!=result)flag++;
			break;
		
		case 138:
			printf("(%f+%f*%f)*%f=\n",a,b,c,d);
			result = (a+b*c)*d;
			scanf("%f",&ans);
			result1 = (int)(result*100+0.5);
	        result = result1 /100.0;
			if(ans!=result)flag++;
			break;
		case 139:
			printf("%f+(%f*%f)*%f=\n",a,b,c,d);
			result = a+(b*c)*d;
			scanf("%f",&ans);
			result1 = (int)(result*100+0.5);
	        result = result1 /100.0;
			if(ans!=result)flag++;
			break;			
		case 140:
			printf("%f+(%f*%f*%f)=\n",a,b,c,d);
			result = a+(b*c*d);
			scanf("%f",&ans);
			result1 = (int)(result*100+0.5);
	        result = result1 /100.0;
			if(ans!=result)flag++;
			break;
		
		case 141:
			printf("(%f+%f*%f)/%f=\n",a,b,c,d);
			result = (a+b*c)/d;
			scanf("%f",&ans);
			result1 = (int)(result*100+0.5);
	        result = result1 /100.0;
			if(ans!=result)flag++;
			break;
		case 142:
			printf("%f+(%f*%f)/%f=\n",a,b,c,d);
			result = a+(b*c)/d;
			scanf("%f",&ans);
			result1 = (int)(result*100+0.5);
	        result = result1 /100.0;
			if(ans!=result)flag++;
			break;			
		case 143:
			printf("%f+(%f*%f/%f)=\n",a,b,c,d);
			result = a+(b*c/d);
			scanf("%f",&ans);
			result1 = (int)(result*100+0.5);
	        result = result1 /100.0;
			if(ans!=result)flag++;
			break;
		
		case 144:
			printf("(%f-%f*%f)+%f=\n",a,b,c,d);
			result = (a-b*c)+d;
			scanf("%f",&ans);
			result1 = (int)(result*100+0.5);
	        result = result1 /100.0;
			if(ans!=result)flag++;
			break;
		case 145:
			printf("%f-(%f*%f)+%f=\n",a,b,c,d);
			result = a-(b*c)+d;
			scanf("%f",&ans);
			result1 = (int)(result*100+0.5);
	        result = result1 /100.0;
			if(ans!=result)flag++;
			break;			
		case 146:
			printf("%f-(%f*%f+%f)=\n",a,b,c,d);
			result = a-(b*c+d);
			scanf("%f",&ans);
			result1 = (int)(result*100+0.5);
	        result = result1 /100.0;
			if(ans!=result)flag++;
			break;
		
		case 147:
			printf("(%f-%f*%f)-%f=\n",a,b,c,d);
			result = (a-b*c)-d;
			scanf("%f",&ans);
			result1 = (int)(result*100+0.5);
	        result = result1 /100.0;
			if(ans!=result)flag++;
			break;
		case 148:
			printf("%f-(%f*%f)-%f=\n",a,b,c,d);
			result = a-(b*c)-d;
			scanf("%f",&ans);
			result1 = (int)(result*100+0.5);
	        result = result1 /100.0;
			if(ans!=result)flag++;
			break;			
		case 149:
			printf("%f-(%f*%f-%f)=\n",a,b,c,d);
			result = a-(b*c-d);
			scanf("%f",&ans);
			result1 = (int)(result*100+0.5);
	        result = result1 /100.0;
			if(ans!=result)flag++;
			break;
		
		case 150:
			printf("(%f-%f*%f)*%f=\n",a,b,c,d);
			result = (a-b*c)*d;
			scanf("%f",&ans);
			result1 = (int)(result*100+0.5);
	        result = result1 /100.0;
			if(ans!=result)flag++;
			break;
		case 151:
			printf("%f-(%f*%f)*%f=\n",a,b,c,d);
			result = a-(b*c)*d;
			scanf("%f",&ans);
			result1 = (int)(result*100+0.5);
	        result = result1 /100.0;
			if(ans!=result)flag++;
			break;			
		case 152:
			printf("%f-(%f*%f*%f)=\n",a,b,c,d);
			result = a-(b*c*d);
			scanf("%f",&ans);
			result1 = (int)(result*100+0.5);
	        result = result1 /100.0;
			if(ans!=result)flag++;
			break;
		
		case 153:
			printf("(%f-%f*%f)/%f=\n",a,b,c,d);
			result = (a-b*c)/d;
			scanf("%f",&ans);
			result1 = (int)(result*100+0.5);
	        result = result1 /100.0;
			if(ans!=result)flag++;
			break;
		case 154:
			printf("%f-(%f*%f)/%f=\n",a,b,c,d);
			result = a-(b*c)/d;
			scanf("%f",&ans);
			result1 = (int)(result*100+0.5);
	        result = result1 /100.0;
			if(ans!=result)flag++;
			break;			
		case 155:
			printf("%f-(%f*%f/%f)=\n",a,b,c,d);
			result = a-(b*c/d);
			scanf("%f",&ans);
			result1 = (int)(result*100+0.5);
	        result = result1 /100.0;
			if(ans!=result)flag++;
			break;
		
		case 156:
			printf("(%f*%f*%f)+%f=\n",a,b,c,d);
			result = (a*b*c)+d;
			scanf("%f",&ans);
			result1 = (int)(result*100+0.5);
	        result = result1 /100.0;
			if(ans!=result)flag++;
			break;
		case 157:
			printf("%f*(%f*%f)+%f=\n",a,b,c,d);
			result = a*(b*c)+d;
			scanf("%f",&ans);
			result1 = (int)(result*100+0.5);
	        result = result1 /100.0;
			if(ans!=result)flag++;
			break;			
		case 158:
			printf("%f*(%f*%f+%f)=\n",a,b,c,d);
			result = a*(b*c+d);
			scanf("%f",&ans);
			result1 = (int)(result*100+0.5);
	        result = result1 /100.0;
			if(ans!=result)flag++;
			break;
		
		case 159:
			printf("(%f*%f*%f)-%f=\n",a,b,c,d);
			result = (a*b*c)-d;
			scanf("%f",&ans);
			result1 = (int)(result*100+0.5);
	        result = result1 /100.0;
			if(ans!=result)flag++;
			break;
		case 160:
			printf("%f*(%f*%f)-%f=\n",a,b,c,d);
			result = a*(b*c)-d;
			scanf("%f",&ans);
			result1 = (int)(result*100+0.5);
	        result = result1 /100.0;
			if(ans!=result)flag++;
			break;			
		case 161:
			printf("%f*(%f*%f-%f)=\n",a,b,c,d);
			result = a*(b*c-d);
			scanf("%f",&ans);
			result1 = (int)(result*100+0.5);
	        result = result1 /100.0;
			if(ans!=result)flag++;
			break;
			
		case 162:
			printf("(%f*%f*%f)*%f=\n",a,b,c,d);
			result = (a*b*c)*d;
			scanf("%f",&ans);
			result1 = (int)(result*100+0.5);
	        result = result1 /100.0;
			if(ans!=result)flag++;
			break;
		case 163:
			printf("%f*(%f*%f)*%f=\n",a,b,c,d);
			result = a*(b*c)*d;
			scanf("%f",&ans);
			result1 = (int)(result*100+0.5);
	        result = result1 /100.0;
			if(ans!=result)flag++;
			break;			
		case 164:
			printf("%f*(%f*%f*%f)=\n",a,b,c,d);
			result = a*(b*c*d);
			scanf("%f",&ans);
			result1 = (int)(result*100+0.5);
	        result = result1 /100.0;
			if(ans!=result)flag++;
			break;
		
		case 165:
			printf("(%f*%f*%f)/%f=\n",a,b,c,d);
			result = (a*b*c)/d;
			scanf("%f",&ans);
			result1 = (int)(result*100+0.5);
	        result = result1 /100.0;
			if(ans!=result)flag++;
			break;
		case 166:
			printf("%f*(%f*%f)/%f=\n",a,b,c,d);
			result = a*(b*c)/d;
			scanf("%f",&ans);
			result1 = (int)(result*100+0.5);
	        result = result1 /100.0;
			if(ans!=result)flag++;
			break;			
		case 167:
			printf("%f*(%f*%f/%f)=\n",a,b,c,d);
			result = a*(b*c/d);
			scanf("%f",&ans);
			result1 = (int)(result*100+0.5);
	        result = result1 /100.0;
			if(ans!=result)flag++;
			break;
		
		case 168:
			printf("(%f/%f*%f)+%f=\n",a,b,c,d);
			result = (a/b*c)+d;
			scanf("%f",&ans);
			result1 = (int)(result*100+0.5);
	        result = result1 /100.0;
			if(ans!=result)flag++;
			break;
		case 169:
			printf("%f/(%f*%f)+%f=\n",a,b,c,d);
			result = a/(b*c)+d;
			scanf("%f",&ans);
			result1 = (int)(result*100+0.5);
	        result = result1 /100.0;
			if(ans!=result)flag++;
			break;			
		case 170:
			printf("%f/(%f*%f+%f)=\n",a,b,c,d);
			result = a/(b*c+d);
			scanf("%f",&ans);
			result1 = (int)(result*100+0.5);
	        result = result1 /100.0;
			if(ans!=result)flag++;
			break;
		
		case 171:
			printf("(%f/%f*%f)-%f=\n",a,b,c,d);
			result = (a/b*c)-d;
			scanf("%f",&ans);
			result1 = (int)(result*100+0.5);
	        result = result1 /100.0;
			if(ans!=result)flag++;
			break;
		case 172:
			printf("%f/(%f*%f)-%f=\n",a,b,c,d);
			result = a/(b*c)-d;
			scanf("%f",&ans);
			result1 = (int)(result*100+0.5);
	        result = result1 /100.0;
			if(ans!=result)flag++;
			break;			
		case 173:
			printf("%df/(%f*%f-%f)=\n",a,b,c,d);
			result = a/(b*c-d);
			scanf("%f",&ans);
			result1 = (int)(result*100+0.5);
	        result = result1 /100.0;
			if(ans!=result)flag++;
			break;	
		
		case 174:
			printf("(%f/%f*%f)*%f=\n",a,b,c,d);
			result = (a/b*c)*d;
			scanf("%f",&ans);
			result1 = (int)(result*100+0.5);
	        result = result1 /100.0;
			if(ans!=result)flag++;
			break;
		case 175:
			printf("%f/(%f*%f)*%f=\n",a,b,c,d);
			result = a/(b*c)*d;
			scanf("%f",&ans);
			result1 = (int)(result*100+0.5);
	        result = result1 /100.0;
			if(ans!=result)flag++;
			break;			
		case 176:
			printf("%f/(%f*%f*%f)=\n",a,b,c,d);
			result = a/(b*c*d);
			scanf("%f",&ans);
			result1 = (int)(result*100+0.5);
	        result = result1 /100.0;
			if(ans!=result)flag++;
			break;
		
		case 177:
			printf("(%f/%f*%f)/%f=\n",a,b,c,d);
			result = (a/b*c)/d;
			scanf("%f",&ans);
			result1 = (int)(result*100+0.5);
	        result = result1 /100.0;
			if(ans!=result)flag++;
			break;
		case 178:
			printf("%df/(%f*%f)/%f=\n",a,b,c,d);
			result = a/(b*c)/d;
			scanf("%f",&ans);
			result1 = (int)(result*100+0.5);
	        result = result1 /100.0;
			if(ans!=result)flag++;
			break;			
		case 179:
			printf("%f/(%f*%f/%f)=\n",a,b,c,d);
			result = a/(b*c/d);
			scanf("%f",&ans);
			result1 = (int)(result*100+0.5);
	        result = result1 /100.0;
			if(ans!=result)flag++;
			break;
		
		case 180:
			printf("(%f+%f/%f)+%f=\n",a,b,c,d);
			result = (a+b/c)+d;
			scanf("%f",&ans);
			result1 = (int)(result*100+0.5);
	        result = result1 /100.0;
			if(ans!=result)flag++;
			break;
		case 181:
			printf("%f+(%f/%f)+%f=\n",a,b,c,d);
			result = a+(b/c)+d;
			scanf("%f",&ans);
			result1 = (int)(result*100+0.5);
	        result = result1 /100.0;
			if(ans!=result)flag++;
			break;			
		case 182:
			printf("%f+(%f/%f+%f)=\n",a,b,c,d);
			result = a+(b/c+d);
			scanf("%f",&ans);
			result1 = (int)(result*100+0.5);
	        result = result1 /100.0;
			if(ans!=result)flag++;
			break;
		
		case 183:
			printf("(%f+%f/%f)-%f=\n",a,b,c,d);
			result = (a+b/c)-d;
			scanf("%f",&ans);
			result1 = (int)(result*100+0.5);
	        result = result1 /100.0;
			if(ans!=result)flag++;
			break;
		case 184:
			printf("%f+(%f/%f)-%f=\n",a,b,c,d);
			result = a+(b/c)-d;
			scanf("%f",&ans);
			result1 = (int)(result*100+0.5);
	        result = result1 /100.0;
			if(ans!=result)flag++;
			break;			
		case 185:
			printf("%f+(%f/%f-%f)=\n",a,b,c,d);
			result = a+(b/c-d);
			scanf("%f",&ans);
			result1 = (int)(result*100+0.5);
	        result = result1 /100.0;
			if(ans!=result)flag++;
			break;
		
		case 186:
			printf("(%f+%f/%f)*%f=\n",a,b,c,d);
			result = (a+b/c)*d;
			scanf("%f",&ans);
			result1 = (int)(result*100+0.5);
	        result = result1 /100.0;
			if(ans!=result)flag++;
			break;
		case 187:
			printf("%f+(%f/%f)*%f=\n",a,b,c,d);
			result = a+(b/c)*d;
			scanf("%f",&ans);
			result1 = (int)(result*100+0.5);
	        result = result1 /100.0;
			if(ans!=result)flag++;
			break;			
		case 188:
			printf("%f+(%f/%f*%f)=\n",a,b,c,d);
			result = a+(b/c*d);
			scanf("%f",&ans);
			result1 = (int)(result*100+0.5);
	        result = result1 /100.0;
			if(ans!=result)flag++;
			break;
		
		case 189:
			printf("(%f+%f/%f)/%f=\n",a,b,c,d);
			result = (a+b/c)/d;
			scanf("%f",&ans);
			result1 = (int)(result*100+0.5);
	        result = result1 /100.0;
			if(ans!=result)flag++;
			break;
		case 190:
			printf("%f+(%f/%f)/%f=\n",a,b,c,d);
			result = a+(b/c)/d;
			scanf("%f",&ans);
			result1 = (int)(result*100+0.5);
	        result = result1 /100.0;
			if(ans!=result)flag++;
			break;			
		case 191:
			printf("%f+(%f/%f/%f)=\n",a,b,c,d);
			result = a+(b/c/d);
			scanf("%f",&ans);
			result1 = (int)(result*100+0.5);
	        result = result1 /100.0;
			if(ans!=result)flag++;
			break;
		
		case 192:
			printf("(%f-%f/%f)+%f=\n",a,b,c,d);
			result = (a-b/c)+d;
			scanf("%f",&ans);
			result1 = (int)(result*100+0.5);
	        result = result1 /100.0;
			if(ans!=result)flag++;
			break;
		case 193:
			printf("%f-(%f/%f)+%f=\n",a,b,c,d);
			result = a-(b/c)+d;
			scanf("%f",&ans);
			result1 = (int)(result*100+0.5);
	        result = result1 /100.0;
			if(ans!=result)flag++;
			break;			
		case 194:
			printf("%f-(%f/%f+%f)=\n",a,b,c,d);
			result = a-(b/c+d);
			scanf("%f",&ans);
			result1 = (int)(result*100+0.5);
	        result = result1 /100.0;
			if(ans!=result)flag++;
			break;
		
		case 195:
			printf("(%f-%f/%f)-%f=\n",a,b,c,d);
			result = (a-b/c)-d;
			scanf("%f",&ans);
			result1 = (int)(result*100+0.5);
	        result = result1 /100.0;
			if(ans!=result)flag++;
			break;
		case 196:
			printf("%f-(%f/%f)-%f=\n",a,b,c,d);
			result = a-(b/c)-d;
			scanf("%f",&ans);
			result1 = (int)(result*100+0.5);
	        result = result1 /100.0;
			if(ans!=result)flag++;
			break;			
		case 197:
			printf("%f-(%f/%f-%f)=\n",a,b,c,d);
			result = a-(b/c-d);
			scanf("%f",&ans);
			result1 = (int)(result*100+0.5);
	        result = result1 /100.0;
			if(ans!=result)flag++;
			break;
		
		case 198:
			printf("(%f-%f/%f)*%f=\n",a,b,c,d);
			result = (a-b/c)*d;
			scanf("%f",&ans);
			result1 = (int)(result*100+0.5);
	        result = result1 /100.0;
			if(ans!=result)flag++;
			break;
		case 199:
			printf("%f-(%f/%f)*%f=\n",a,b,c,d);
			result = a-(b/c)*d;
			scanf("%f",&ans);
			result1 = (int)(result*100+0.5);
	        result = result1 /100.0;
			if(ans!=result)flag++;
			break;			
		case 200:
			printf("%f-(%f/%f*%f)=\n",a,b,c,d);
			result = a-(b/c*d);
			scanf("%f",&ans);
			result1 = (int)(result*100+0.5);
	        result = result1 /100.0;
			if(ans!=result)flag++;
			break;
		
		case 201:
			printf("(%f-%f/%f)/%f=\n",a,b,c,d);
			result = (a-b/c)/d;
			scanf("%f",&ans);
			result1 = (int)(result*100+0.5);
	        result = result1 /100.0;
			if(ans!=result)flag++;
			break;
		case 202:
			printf("%f-(%f/%f)/%f=\n",a,b,c,d);
			result = a-(b/c)/d;
			scanf("%f",&ans);
			result1 = (int)(result*100+0.5);
	        result = result1 /100.0;
			if(ans!=result)flag++;
			break;			
		case 203:
			printf("%f-(%f/%f/%f)=\n",a,b,c,d);
			result = a-(b/c/d);
			scanf("%f",&ans);
			result1 = (int)(result*100+0.5);
	        result = result1 /100.0;
			if(ans!=result)flag++;
			break;
		
		case 204:
			printf("(%f*%f/%f)+%f=\n",a,b,c,d);
			result = (a*b/c)+d;
			scanf("%f",&ans);
			result1 = (int)(result*100+0.5);
	        result = result1 /100.0;
			if(ans!=result)flag++;
			break;
		case 205:
			printf("%f*(%f/%f)+%f=\n",a,b,c,d);
			result = a*(b/c)+d;
			scanf("%f",&ans);
			result1 = (int)(result*100+0.5);
	        result = result1 /100.0;
			if(ans!=result)flag++;
			break;			
		case 206:
			printf("%f*(%f/%f+%f)=\n",a,b,c,d);
			result = a*(b/c+d);
			scanf("%f",&ans);
			result1 = (int)(result*100+0.5);
	        result = result1 /100.0;
			if(ans!=result)flag++;
			break;
		
		case 207:
			printf("(%f*%f/%f)-%f=\n",a,b,c,d);
			result = (a*b/c)-d;
			scanf("%f",&ans);
			result1 = (int)(result*100+0.5);
	        result = result1 /100.0;
			if(ans!=result)flag++;
			break;
		case 208:
			printf("%f*(%f/%f)-%f=\n",a,b,c,d);
			result = a*(b/c)-d;
			scanf("%f",&ans);
			result1 = (int)(result*100+0.5);
	        result = result1 /100.0;
			if(ans!=result)flag++;
			break;			
		case 209:
			printf("%f*(%f/%f-%f)=\n",a,b,c,d);
			result = a*(b/c-d);
			scanf("%f",&ans);
			result1 = (int)(result*100+0.5);
	        result = result1 /100.0;
			if(ans!=result)flag++;
			break;
			
		case 210:
			printf("(%f*%f/%f)*%f=\n",a,b,c,d);
			result = (a*b/c)*d;
			scanf("%f",&ans);
			result1 = (int)(result*100+0.5);
	        result = result1 /100.0;
			if(ans!=result)flag++;
			break;
		case 211:
			printf("%f*(%f/%f)*%f=\n",a,b,c,d);
			result = a*(b/c)*d;
			scanf("%f",&ans);
			result1 = (int)(result*100+0.5);
	        result = result1 /100.0;
			if(ans!=result)flag++;
			break;			
		case 212:
			printf("%f*(%f/%f*%f)=\n",a,b,c,d);
			result = a*(b/c*d);
			scanf("%f",&ans);
			result1 = (int)(result*100+0.5);
	        result = result1 /100.0;
			if(ans!=result)flag++;
			break;
		
		case 213:
			printf("(%f*%f/%f)/%f=\n",a,b,c,d);
			result = (a*b/c)/d;
			scanf("%f",&ans);
			result1 = (int)(result*100+0.5);
	        result = result1 /100.0;
			if(ans!=result)flag++;
			break;
		case 214:
			printf("%f*(%f/%f)/%f=\n",a,b,c,d);
			result = a*(b/c)/d;
			scanf("%f",&ans);
			result1 = (int)(result*100+0.5);
	        result = result1 /100.0;
			if(ans!=result)flag++;
			break;			
		case 215:
			printf("%f*(%f/%f/%f)=\n",a,b,c,d);
			result = a*(b/c/d);
			scanf("%f",&ans);
			result1 = (int)(result*100+0.5);
	        result = result1 /100.0;
			if(ans!=result)flag++;
			break;
		
		case 216:
			printf("(%f/%f/%f)+%f=\n",a,b,c,d);
			result = (a/b/c)+d;
			scanf("%f",&ans);
			result1 = (int)(result*100+0.5);
	        result = result1 /100.0;
			if(ans!=result)flag++;
			break;
		case 217:
			printf("%f/(%f/%f)+%f=\n",a,b,c,d);
			result = a/(b/c)+d;
			scanf("%f",&ans);
			result1 = (int)(result*100+0.5);
	        result = result1 /100.0;
			if(ans!=result)flag++;
			break;			
		case 218:
			printf("%f/(%f/%f+%f)=\n",a,b,c,d);
			result = a/(b/c+d);
			scanf("%f",&ans);
			result1 = (int)(result*100+0.5);
	        result = result1 /100.0;
			if(ans!=result)flag++;
			break;
		
		case 219:
			printf("(%f/%f/%f)-%d=f\n",a,b,c,d);
			result = (a/b/c)-d;
			scanf("%f",&ans);
			result1 = (int)(result*100+0.5);
	        result = result1 /100.0;
			if(ans!=result)flag++;
			break;
		case 220:
			printf("%f/(%f/%f)-%f=\n",a,b,c,d);
			result = a/(b/c)-d;
			scanf("%f",&ans);
			result1 = (int)(result*100+0.5);
	        result = result1 /100.0;
			if(ans!=result)flag++;
			break;			
		case 221:
			printf("%f/(%f/%f-%f)=\n",a,b,c,d);
			result = a/(b/c-d);
			scanf("%f",&ans);
			result1 = (int)(result*100+0.5);
	        result = result1 /100.0;
			if(ans!=result)flag++;
			break;	
		
		case 222:
			printf("(%f/%f/%f)*%f=\n",a,b,c,d);
			result = (a/b/c)*d;
			scanf("%f",&ans);
			result1 = (int)(result*100+0.5);
	        result = result1 /100.0;
			if(ans!=result)flag++;
			break;
		case 223:
			printf("%f/(%f/%f)*%f=\n",a,b,c,d);
			result = a/(b/c)*d;
			scanf("%f",&ans);
			result1 = (int)(result*100+0.5);
	        result = result1 /100.0;
			if(ans!=result)flag++;
			break;			
		case 224:
			printf("%f/(%f/%f*%f)=\n",a,b,c,d);
			result = a/(b/c*d);
			scanf("%f",&ans);
			result1 = (int)(result*100+0.5);
	        result = result1 /100.0;
			if(ans!=result)flag++;
			break;
		
		case 225:
			printf("(%f/%f/%f)/%f=\n",a,b,c,d);
			result = (a/b/c)/d;
			scanf("%f",&ans);
			result1 = (int)(result*100+0.5);
	        result = result1 /100.0;
			if(ans!=result)flag++;
			break;
		case 226:
			printf("%f/(%f/%f)/%f=\n",a,b,c,d);
			result = a/(b-c)/d;
			scanf("%f",&ans);
			result1 = (int)(result*100+0.5);
	        result = result1 /100.0;
			if(ans!=result)flag++;
			break;			
		case 227:
			printf("%f/(%f/%f/%f)=\n",a,b,c,d);
			result = a/(b/c/d);
			scanf("%f",&ans);
			result1 = (int)(result*100+0.5);
	        result = result1 /100.0;
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
	cout<<"结束！全部正确，太棒了！"<<endl;
	else
	cout<<"结束！错了" <<flag <<"题哦" <<endl;
}
