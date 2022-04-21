//WAP TO ADD TWO NUMBERS USING INLINE FUNCTION
#include<iostream>
using namespace std;
class sum{
	private:
		int a,b;
		public:
		inline	void set(){
				cout<<"enter first number: ";
				cin>>a;
				cout<<"enter second number: ";
				cin>>b;
			}
			inline int add(){
				int total;
				total=a+b;
				return total;
			}
};
int main(){
	sum a;
	int result;
	a.set();
	result=a.add();
	cout<<"the sum is: "<<result;
	return 0;
}
