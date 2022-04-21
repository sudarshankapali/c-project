//WAP TO OVERLOAD A FUNCTION AND CALCULATE AREA OF RECTANGLE AND CIRCLE
#include<iostream>
using namespace std;
class area{
	public:
		int result;
		float are;
		int func_area(const int &l,int &b){
			result=l*b;
			return result;	
		}
		float func_area(const float& r){
			are=2*(22/7)*r*r;
			return are;
		}
		void output(){
			cout<<endl<<"the area of reactangle is: "<<result;
			cout<<endl<<"the area of circle is: "<<are;
		}
};
int main(){
	area a;
	int b,c;
	float cc;
	cout<<"enter length of reactangle:";
	cin>>b;
	cout<<"enter breadth of reactangle: ";
	cin>>c;
	cout<<"enter radius of circle: ";
	cin>>cc;
	a.func_area(b,c);
	a.func_area(cc);
	a.output();
	return 0;
}
