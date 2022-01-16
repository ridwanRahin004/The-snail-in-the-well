#include<iostream>
#include<cmath>
using namespace std;
//functions
int first_loop();
int second_loop();
	float deep_feet;
	int i=0;
	int day_number=1;
int main(){
	int action;
	cout<<"How deep is the well: ";
	cin>>deep_feet;
	first_loop();
	day_number--;
	cout<<"\n"<<endl;
	cout<<"\t\tSum Day: "<<day_number<<endl;
	cout<<"\n\n"<<endl;
	cout<<"[1] try again"<<endl;
	cout<<"[0] EXIT"<<endl;
	cout<<" Enter Action: "<<endl;
	cin>>action;
	if(action==1){
		main();
	}
	else if(action==0){
		cout<<"\n\n"<<endl;
		cout<<"BYE!"<<endl;
		cout<<"\n\n"<<endl;
	}
}
int first_loop(){
		while(i<=deep_feet){
		i=i+7;
		cout<<"\n day "<<day_number<<" DAY: "<<i<<endl;
		day_number++;
		second_loop();
	}
}
int second_loop(){
	while(i<=deep_feet){
			i=i-2;
			cout<<"\tNight: "<<i<<endl;
			first_loop();
	}
}
