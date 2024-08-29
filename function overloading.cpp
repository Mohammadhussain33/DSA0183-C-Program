#include<iostream>
using namespace std;
int area(int x,int y){
	return x*y;
}
float area(float x){
	return x*x;
}
int main(){
	int result1=area(5,6);
	int result2 = area(1,2);
	cout<<"Area of a result1"<<result1;
	cout<<"Area of a result2"<<result2;
	return 0;
}
