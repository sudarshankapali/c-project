//WAP TO OVERLOAD A FUNCTION ON THE BASIS OF ARGUMENTS PASSED
#include<iostream>
#include<math.h>
using namespace std;
class test{
	int r1,r2;
	public:
		void power(const int& a,int& b){//for(a^b)
			r1=pow(a,b);
		}
		void power(const int& a,int& b,int& c){//for(a+b)^c
			int temp;
			temp=(a+b);
			r2=pow(temp,c);
		}
		void output(){
			cout<<endl<<"the result of a^b is: "<<r1;
			cout<<endl<<"the result of (a+b)^c is: "<<r2;
		}
};
int main(){
	test obj;
	int num1,num2,num3;
	cout<<"enter value of a: ";
	cin>>num1;
	cout<<"enter value of b: ";
	cin>>num2;
	cout<<"enter value of c: ";
	cin>>num3;
	obj.power(num1,num2);
	obj.power(num1,num2,num3);
	obj.output();
	return 0;
}
