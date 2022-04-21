//WAP TO FIND AREA OF SQUARE, RECTANGLE AND SQUARE USING FUNCTION OVERLOADING
#include<iostream>
using namespace std;
class overload{
	int reactangle,square;
	float circle;
	public:
		void perimeter(const int& s){
			square=s*s;
		}
		void perimeter(const int& r,int& e){
			reactangle=2*(r+e);
		}
		void perimeter(const float& c){
			circle=2*(22/7)*c;
		}
		void output(){
			cout<<"the perimete of square is: "<<square;
			cout<<endl<<"the perimeter of reactangle is: "<<reactangle;
			cout<<endl<<"the perimeter of circle is: "<<circle;
		}
};
int main(){
	overload a;
	int l,b,p;
	float r;
	cout<<"enter length of square: ";
	cin>>p;
	cout<<"enter length of rectangle: ";
	cin>>l;
	cout<<"enter breadth of reactangle: ";
	cin>>b;
	cout<<"enter radius of circle: ";
	cin>>r;
	a.perimeter(r);
	a.perimeter(p);
	a.perimeter(l,b);
	a.output();
	return 0;
}
