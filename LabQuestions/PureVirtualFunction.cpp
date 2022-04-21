//Assume that a bank maintains two kinds of account one is called savin a/c & another is called current a/c.
//The saving account provides compound interest at annual rate of 10%.Current a/c holders get simple interest of 5% per year.
//Create a class a/c that stores customers name and a/c no. .From this dervie the classes: current_a/c & saving a/c . 
//Include necessary member functions &calculate the total amount of money in an a/c for both types of customers.
#include<iostream>
using namespace std;
class Account
{
	public:
	string name;
	int acnum;
	int principle;
	int time;
	private:
		 virtual void Name(string n) = 0;
		 virtual void Acnum(int a) = 0;
		 virtual void PandT(int p,int t) = 0;
};
class currentAccount : public Account
{
	public:
		void Name(string n)
		{
			name=n;
		}
		void Acnum(int a)
		{
			acnum=a;
		}
		void PandT(int p,int t)
		{
			principle=p;
				time=t;
		}
	float SimpleInterest()
	{
		int rate=5;
		int SI;
		SI=(principle*time*rate)/100;
		return SI;
	}
	void display(float s)
	{
		cout<<endl<<"The money u get as simple interest of 5% rate is"<<s;
	}
	
};
int main()
{
	currentAccount object1;
	int p,t;
	float si;
	string a;
	cout<<"enter your name: ";
	getline(cin,a);
	object1.Name(a);
	cout<<"Enter principle & time"<<endl;
	cin>>p>>t;
	object1.PandT(p,t);
	si=object1.SimpleInterest();
	object1.display(si);
	return 0;
}
