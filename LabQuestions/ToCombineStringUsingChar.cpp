//WAP TO COMBINE 2 STRING USING BINARY OPETATOR (+) OVERLOADING
//(USING CHAR)
#include<iostream>
#include<cstring>
using namespace std;
class str{
	private:
		char first[30];
		public:
			void set(){
			cout<<"Enter a string: ";
			cin.getline(first,30);
			}
			void operator +(const str& a){
				strcat(first,a.first);
				cout<<"The combined string is: "<<first;
			}
};
int main(){
	str a,b;
	a.set();
	b.set();
	a+b;
	return 0;
}
