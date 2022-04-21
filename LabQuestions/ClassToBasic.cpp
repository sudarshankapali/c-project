#include<iostream>
using namespace std;
class time{
	private:
		int hour,min,sec;
		public:
			time(int t){
				min=t/60;
				sec=t%60;
				hour=min/60;
				min=min%60;
			}
			void display(){
				cout<<"hour="<<hour<<endl<<"minutes="<<min<<endl<<"second="<<sec;
			}
};
int main(){
	int duration;
	cout<<"enter time duration in second: ";
	cin>>duration;
	time t1=duration;
	t1.display();
	return 0;
}
