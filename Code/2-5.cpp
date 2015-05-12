#include <iostream>
using namespace std;
int main(){
	int num;
	cin>>num;
	if (num>80){
		cout<<"Excellent";
	}else if(num>60){
		cout<<"Great";
	}else{
		cout<<"Good";
	}
}