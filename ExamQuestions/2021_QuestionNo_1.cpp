#include<iostream>
using namespace std;
class Employee_Info{
	public:
		int Emp_Id;
		string Emp_Name;
};
class Finance_Info : public Employee_Info{
	public:
		int Bas_sal;
		int Ot_sal;
};
class Extra_allowance{
	public:
		int Tray_all;
		int House_all;
		int Dail_all;
};
class Total_Info : public Finance_Info, public Extra_allowance{
	public:
		int Total_sal;
		void set_value();
		void output();
};
void Total_Info :: set_value(){
	fflush(stdin);
	cout<<"Enter the employee ID: ";
	cin>>Emp_Id;fflush(stdin);
	cout<<"Enter employee name: ";
	getline(cin,Emp_Name);fflush(stdin);
	cout<<"Enter the basic salary of employee: ";
	cin>>Bas_sal;fflush(stdin);
	cout<<"Enter the over time salary: ";
	cin>>Ot_sal;fflush(stdin);
	cout<<"Enter all tray allowance of employee: ";
	cin>>Tray_all;fflush(stdin);
	cout<<"Enter all house allowance of employee: ";
	cin>>House_all;fflush(stdin);
	cout<<"Enter all dail allowance of employee: ";
	cin>>Dail_all;fflush(stdin);
}
void Total_Info :: output(){
	Total_sal=(Bas_sal+Ot_sal+Tray_all+House_all+Dail_all);
	cout<<endl<<"............................\n"<<"Employee Details: \n"<<"ID: "<<Emp_Id<<"\nName: "<<Emp_Name<<"\nTotal salary: "<<Total_sal;
}
int main(){
	Total_Info obj;
	obj.set_value();
	obj.output();
	return 0;
}
