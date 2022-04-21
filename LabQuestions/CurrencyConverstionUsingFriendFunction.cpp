#include<iostream>
using namespace std;					
//class secondclass{};
class firstclass{		
	private:						
		float data1;
		float data2;
		float data3;						
		public:							
			void input(){
				cin>>data2;
				cout<<"-->The entered amount is: rs"<<data2<<endl;
			}
			friend float test(firstclass);
};

float test(firstclass a){					
	a.data1=110;
	a.data3=a.data2/a.data1;			
	return a.data3;					
}
int main(){
	firstclass obj1;
	cout<<"-->Enter nepali currency amount(rs):";
	obj1.input();				
	cout<<"-->The converted amount is: $"<<test(obj1)<<endl;
	return 0; 
}
