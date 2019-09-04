/*
 * lab1.cpp
 *
 *  Created on: Aug 29, 2019
 *      Author: Allie DeAbreu,
 */

#include <iostream>
using namespace std;

void func2(){
	cout<<"**************************"<<endl;
}//p2
bool func3(int x){
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

void func4(){
	int total=0;
	for (int i=1;i<=300;i++){
		total+=i;
		if (i%20==0){
			cout<<total<<endl;
		}
	}
}//p4

int func5(){
	int i=1;
	int sum=0;
	while (sum<=100000){
		sum+=i;
		i++;
	}
	return i;
}//p5
void func6(int x){
	for (int i=1;i<x;i++){
		if ()
	}
}

int main(){
	cout<<"Hello, World!!"<<endl;//p1
	func2();//p2
	cout<<func3(17)<<endl; cout<<func3(-4)<<endl; cout<<func3(260)<<endl;
	func2();//p2
	func4();//p4
	func2();//p2
	cout<<func5()<<endl;//p5


}//main



