#include<iostream>
using namespace std;
class time{
	private:
		int hrs,min;
		public:
			int getdata(){
				return ((hrs*60)+min);
			}
			void setdata(){
				cout<<"enter time in hour: ";
				cin>>hrs;
				cout<<"enter time in minutes: ";
				cin>>min;
			}
			void display(){
				cout<<"hrs= "<<hrs<<endl<<"min= "<<min;
			}
};
class duration{
	private:
		int min;
		public:
			duration(){
				min=0;
			}
			int operator = (time t){
				min=t.getdata();
				return min;
			}
			void dispaly(){
				cout<<endl<<"total minutes= "<<min;
			}
};
int main(){
	time t1;
	duration d1;
	t1.setdata();
	t1.display();
	d1=t1;
	d1.dispaly();
	return 0;
}
