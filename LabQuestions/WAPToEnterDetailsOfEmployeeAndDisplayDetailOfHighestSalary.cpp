#include<iostream>
using namespace std;
class employee{
	public:
		int id,salary;
		string name;
		public:
			void setvalue(){
					fflush(stdin);
				cout<<"\nEnter id: ";
				cin>>id;
				fflush(stdin);
				cout<<"Enter name: ";
				getline(cin,name);
					fflush(stdin);
				cout<<"Enter salary: ";
				cin>>salary;
					fflush(stdin);
			}
			friend employee compare(employee a[],employee temp);
			void output(){fflush(stdin);
				cout<<"The detail of employee with highest salary is: "<<endl;
				cout<<"ID: "<<id<<endl;
				fflush(stdin);
				cout<<"Name: "<<name<<endl;
				fflush(stdin);
				cout<<"Salary: "<<salary;
				fflush(stdin);
			}
};
employee compare(employee a[],employee temp){
				int i,j;
				for(int i=0;i<4;i++){
					cout<<"Enter detail of "<<i+1<<" employee:";
		a[i].setvalue();
		fflush(stdin);
	}
				for(i=0;i<4;++i){
					for(j=1;j<4;++j){
						if(a[i].salary<a[j].salary){
							temp=a[j];
							a[j]=a[i];
							a[i]=temp;
						}
					}
				}
				return (a[0]);
			}
int main(){
	employee detail[4],result,temp;
	result=compare(detail,temp);
	result.output();
	return 0;
}
