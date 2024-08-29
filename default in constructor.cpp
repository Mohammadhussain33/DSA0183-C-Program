#include<iostream>
using namespace std;
class student{
	private:
		int a;
		public:
			student(){
				a=0;
				cout<<"default constructor"<<a;
			}
};
int main(){
	student obj;
}
