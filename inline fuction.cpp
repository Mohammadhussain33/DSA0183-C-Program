#include<iostream>
using namespace std;

inline int max(int a ,int b ){
	if(a>b)
	return a;
	else
	return b;
}
int main(){
	int a,b;
	cout<<"Enter  the values of a abd b:";
	cin>>a;
	cin>>b;
	cout<<"The greater number of two number is"<<max(a,b);
	return 0;
}

