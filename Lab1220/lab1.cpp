/*
 * lab1.cpp
 *
 *  Created on: Aug 29, 2019
 *      Author: Allie DeAbreu,
 */

#include <iostream>
using namespace std;

void func1(){
	cout<<"**************************"<<endl;
}//p2
bool func2(int x){
	int i=2;
	if (x<=1){
		return false;
	}
	while (i<=x){
		if (x%i==0){
			if (x==i){
				return true;
			}else {
				return false;
			}
		}else {
			i++;
		}
	}

}//p3

void func3(){
	int total=0;
	for (int i=1;i<=300;i++){
		total+=i;
		if (i%20==0){
			cout<<total<<endl;
		}
	}
}//p4

int func4(){
	int i=1;
	int sum=0;
	while (sum<=100000){
		sum+=i;
		i++;
	}
	return i;
}//p5


int main(){
	cout<<"Hello, World!!"<<endl;//p1
	func1();//p1
	cout<<func2(17)<<endl; cout<<func2(-4)<<endl; cout<<func2(260)<<endl;
	func1();//p1
	func3();//p4
	func1();//p1
	cout<<func4()<<endl;//p5


}//main



