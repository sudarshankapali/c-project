#include<iostream>
using namespace std;
template <typename t>
void swap(){
	t temp,a,b;
	cout<<"Enter value of a: ";
	cin>>a;
	cout<<"Enter value of b: ";
	cin>>b;
	cout<<"\nThe vlaue of a is: "<<a;
	cout<<"\nThe value of b is: "<<b;
	temp=a;
	a=b;
	b=temp;
	cout<<"\n\nThe swaped value of a is: "<<a;
	cout<<"\nThe swaped value of b is: "<<b;
}
int main(){
	swap <int> ();
	return 0;
}
