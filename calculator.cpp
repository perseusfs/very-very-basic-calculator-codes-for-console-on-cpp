#include<iostream>
using namespace std;
int main(){
	int a,b;
	string islem;
	

	cout<<"1st operation : addition"<<"\n"<<"2nd operation : substraction"<<"\n"<<"3rd operation : multipication"<<"\n"<<"4th operation : division"<<endl;
	
	cout<<"choose operation number :";
	cin>>islem;
	
	if(islem=="1"){
		cout<<"a :";
		cin>>a;
		cout<<"b :";
		cin>>b;
		cout<<"result :"<<a+b<<endl;
		
	}
	else if(islem=="2"){
		cout<<"a :";
		cin>>a;
		cout<<"b :";
		cin>>b;
		cout<<"result :"<<a-b<<endl;
		
	}
	else if(islem=="3"){
		cout<<"a :";
		cin>>a;
		cout<<"b :";
		cin>>b;
		cout<<"result :"<<a*b<<endl;
		
	}
	else if(islem=="4"){
		cout<<"a :";
		cin>>a;
		cout<<"b :";
		cin>>b;
		cout<<"result :"<<a/b<<endl;
		
	}
	else{
		cout<<"unvalid operation"<<endl;
	}

return 0;
}
