//WAP TO COMBINE 2 STRING USING BINARY OPETATOR (+) OVERLOADING
#include<iostream>
using namespace std;
class str{
	private:
		string first;
		public:
			void set(){
			cout<<"Enter a string: ";
			getline(cin,first);
			}
			string operator +(const str& a){
				string temp;
				temp=first+a.first;
				return temp;
			}
};
int main(){
	str a,b;
	string result;
	a.set();
	b.set();
	result=a+b;
	cout<<"The combined string is: "<<result;
	return 0;
}
