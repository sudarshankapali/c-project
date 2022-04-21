#include<iostream>
#include<math.h>
#include<windows.h>
using namespace std;
class account{
	public:
		string name;
		double number;
		int principal,time;
};
class saving : public account{
	public:
		float ci;
	void set_data(){fflush(stdin);
		cout<<"Enter your name"<<endl;
		getline(cin,name);
		fflush(stdin);
		cout<<"Enter your account number"<<endl;
		cin>>number;
		fflush(stdin);
		cout<<"Enter principle amount"<<endl;
		cin>>principal;
		fflush(stdin);
		cout<<"Enter time in years"<<endl;
		cin>>time;
		fflush(stdin);
	}
	void compound(){
		ci=principal*pow((1+0.1),time);
	}
	void output(){
		cout<<"......................."<<endl;
		cout<<"\tDetails: "<<endl<<".......................";
		cout<<"\nName: "<<name<<endl;
		cout<<"Account number: "<<number<<endl<<"Compound interest: "<<ci;
	}
};
class current : public account{
	public:
		float i;
	void set_data(){fflush(stdin);
		cout<<"Enter your name"<<endl;
		getline(cin,name);
		fflush(stdin);
		cout<<"Enter your account number"<<endl;
		cin>>number;
		fflush(stdin);
		cout<<"Enter principle amount"<<endl;
		cin>>principal;
		fflush(stdin);
		cout<<"Enter time in years"<<endl;
		cin>>time;
		fflush(stdin);
	}
	void interest(){
		i=(principal*time*0.05)/100;
	}
	void output(){
		cout<<"......................."<<endl;
		cout<<"\tDetails: "<<endl<<".......................";
		cout<<"\nName: "<<name<<endl;
		cout<<"Account number: "<<number<<endl<<"Simple interest: "<<i;
	}
};
int main(){
	saving obj1;
	current obj2;
	int ch1=0;
	char ch='y';
	while(ch=='y'){
		flag:
		cout<<"Enter the account type: "<<endl;
		cout<<"1->Saving account"<<endl;
		cout<<"2->Current account"<<endl;
		cout<<"Enter your choice"<<endl;
		cin>>ch1;
		switch (ch1){
			case 1:
				obj1.set_data();
				obj1.compound();
				obj1.output();
				break;
			case 2:
				obj2.set_data();
				obj2.interest();
				obj2.output();
				break;
				default:
					cout<<"\n\n!!!!!!!     WRONG INPUT      !!!!!!! "<<endl<<endl<<endl;
					goto flag;
		}
		cout<<"\n......................."<<"\n\nDo you want to choose again"<<endl<<"If yes press 'y' else press 'n' :";
		cin>>ch;
		system("cls");
	}
	return 0;
}











