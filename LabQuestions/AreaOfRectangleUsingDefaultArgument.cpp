//	WAP TO FIND AREA OF RECTANGLE USING DEFAUlT ARGUMENT
#include<iostream>
using namespace std;
class area{
	int l,b;
		public:
			int are(int l=5,int b=5){
				int result;
				result=l*b;
				return result;
			}
};
int main(){
	area a;
	int r;
	r=a.are();
	cout<<"the area of the rectangle is: "<<r;
	return 0;
}
