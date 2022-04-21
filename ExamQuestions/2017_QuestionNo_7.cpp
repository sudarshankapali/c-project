#include<iostream>
#include<math.h>
using namespace std;
class account{
	public:
		string name;
		double number;
		int p,t;
};
class saving : public account{
	public:
	void setvalue(){
		fflush(stdin);
			cout<<"Enter your name: ";
			getline(cin,name);
			fflush(stdin);
			cout<<"Enter your account number: ";
			cin>>number;
			fflush(stdin);
			cout<<"Enter principle amount: ";
			cin>>p;
			fflush(stdin);
			cout<<"Enter time in years: ";
			cin>>t;
			fflush(stdin);
	}
	void compound(){
		float ci,result;
		ci=p*pow((1+0.1),t);
		result=ci-p;
		cout<<"......................."<<endl;
		cout<<"\tDetails: "<<endl<<".......................";
		cout<<"\nName: "<<name<<endl<<"Account Number: "<<number<<endl;
		cout<<"Compound Interest Amount : "<<result;
	}
};
class current : public account{
	public:
	void setdata(){
		fflush(stdin);
			cout<<"Enter your name: ";
			getline(cin,name);
			fflush(stdin);
			cout<<"Enter your account number: ";
			cin>>number;
			fflush(stdin);
			cout<<"Enter principle amount: ";
			cin>>p;
			fflush(stdin);
			cout<<"Enter time in years: ";
			cin>>t;
	}
	void interest(){
		float i;
		i=(p*t*5)/100;
		cout<<"......................."<<endl;
		cout<<"\tDetails: "<<endl<<".......................";
		cout<<"\nName: "<<name<<endl<<"Account Number: "<<number<<endl;
		cout<<"Simple Interest : "<<i;
	}
};
int main(){
	int ch=0;
	saving obj1;
	current obj2;
	cout<<"Enter your account type: "<<endl<<"1-> Saving "<<endl<<"2-> Current "<<endl;
	cout<<"Enter your choice: ";
	cin>>ch;
	if(ch==1){
		obj1.setvalue();
		obj1.compound();
	}
	else if(ch==2){
		obj2.setdata();
		obj2.interest();
	}
	else{
		cout<<"\n\n\t\t!!!!!!!     WRONG INPUT      !!!!!!! ";
	}
	return 0;
}
