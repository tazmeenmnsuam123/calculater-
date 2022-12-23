#include<iostream>
#include<math.h>                                   //Include header file in which store Built in functions//
using namespace std;
int sum(int num1,int num2);                      //functions declaration//
int sub(int num1,int num2);                     //Functions defined by user//
int mul(int num1,int num2);
int div(int num1,int num2);
int mod(int num1,int num2);
int main()
{
	int num1,num2,res1,res2,res3,res4,res5,res6,res7;
	cout<<"enter two numbers:"<<endl;
	cin>>num1>>num2;
	res1=sum(num1,num2);                     //Function calling(user defined functions)//
	cout<<"Addition="<<res1<<endl;
	res2=sub(num1,num2);
	cout<<"Difference="<<res2<<endl;
	res3=mul(num1,num2);
	cout<<"Product="<<res3<<endl;
	res4=div(num1,num2);
	cout<<"Quotient="<<res4<<endl;
	res5=mod(num1,num2);
	cout<<"Remainder="<<res5<<endl;
	res6=sqrt(num1);                         //function calling (Built in functions//
	cout<<"square Root="<<res6<<endl;
	res7=log(num1);
	cout<<"Log="<<res7<<endl;
	return 0;
}
     int sum(int num1,int num2)            //use parameter to increase the flexibility of program//
	 {
	return num1+num2;
}
     int sub(int num1,int num2)
{
	return num1-num2;
}
int mul(int num1,int num2)
{
	return num1*num2;
}
int div(int num1,int num2)
{
	return num1/num2;
}
int mod(int num1,int num2)
{
	return num1%num2;
}
