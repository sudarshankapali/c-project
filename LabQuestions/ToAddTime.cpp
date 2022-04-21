//TO ADD TWO TIME OBJECT BY PASSING OBJECT AS ARGUMENT
#include<iostream>
using namespace std;
class time{
	private:
		int hour;
		int minutes;
		public:
			void set_time(){
				cout<<"Enter time in hour: ";
				cin>>hour;
				cout<<"Enter time in minutes: ";
				cin>>minutes;
				cout<<endl;
			}
			time add_time(time& t){
				int extra=0;
				time temp;
				temp.minutes=(this->minutes%60) + (t.minutes%60);
				if(temp.minutes>=60){
					extra=temp.minutes/60;
					temp.minutes=temp.minutes%60;
				}
				temp.hour=(this->hour+(this->minutes/60) ) + (t.hour+(t.minutes/60) ) + extra;
				return temp; 
			}
			void output(){
				cout<<endl<<"The total sum of hour is: "<<hour<<" hrs";
				cout<<endl<<"The total sum of minutes is: "<<minutes<<" min";
			}
};
int main(){
	time t1,t2,result;
	t1.set_time();
	t2.set_time();
	result=t1.add_time(t2);
	result.output();
	return 0;
}
