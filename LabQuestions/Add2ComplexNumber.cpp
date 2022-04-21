#include<iostream>
using namespace std;
class first;
class second{
	private:
		int data1;
		int data2;
		public:
			void setvalue1();
			friend void add(first a,second b);
};
class first{
	private:
		int data1;
		int data2;
		public:
			void setvalue();
			friend void add(first a,second b);
};
void second::setvalue1(){
	cout<<endl<<"Enter a number: ";
	cin>>data1;
	cout<<"Enter second number: ";
	cin>>data2;
	cout<<"Your second complex numbers is: ("<<data1<<" + "<<data2<<"i)"<<endl;
}
void first::setvalue(){
	cout<<"Enter a number: ";
	cin>>data1;
	cout<<"Enter second number: ";
	cin>>data2;
	cout<<"Your first complex numbers is: ("<<data1<<" + "<<data2<<"i)"<<endl;
}
void add(first a,second b){
	a.setvalue();
	b.setvalue1();
	cout<<endl<<"The sum of above complex number is:--> ("<<a.data1+b.data1<<" + "<<a.data2+b.data2<<"i)";
}
int main(){
	first a;
	second b;
	add(a,b);
	return 0;
}
