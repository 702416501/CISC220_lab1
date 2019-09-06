/*
 * lab1.cpp
 *
 *  Created on: Aug 29, 2019
 *      Author: Allie DeAbreu and Alex Clark
 */

#include <iostream>
using namespace std;

void func2();//p2
bool func3(int x);//p3
void func4();//p4
int func5();//p5
void func6(int x);//p6
void func7();//p7
int func8();//p8
void func9();//p9
void func10(int x);//p10
void func11(int x, int y);//p11





int main(){
	cout<<"Hello, World!!"<<endl; func2();//p1 and p2
	cout<<func3(17)<<endl; cout<<func3(-2)<<endl; cout<<func3(260)<<endl; func2();//test cases for p3 and p2
	func4(); func2();//p4 and p2
	cout<<func5()<<endl; func2();//p5 and p2
	func6(2); func6(3); func6(4); func2();//test cases for p6 and p2
	func7(); func2();//p7 and p2
	cout<<func8()<<endl; func2();//p8 and p2
	func9(); func2();//p9 and p2
	func10(5); func10(4); func10(2); func2();//p10 and p2
	func11(3,10); func11(217,220); func11(12,14);func2();//p11 and p2

}//main function





void func2(){
	cout<<"**************************"<<endl;
}//p2
bool func3(int x){
	int i=2;
	if (x<=1){
		return false;
	}else{
		while (i<=x){
			if (x%i==0){
				if (x==i){
					return true;
				}else {
					return false;
				}
			}
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
	for (int i=1;i<=12;i++){
		cout<<i*x<<endl;
	}
}//p6

void func7(){
	for (int i=1;i<=12;i++){
		func6(i);
	}
}//p7

int func8(){
	int i, lcount=0;
	cout<<"Please input a natural positive number"<<endl;
	cin>>i;
	while (i>1){
		if (i%2==0){
			i/=2;
		} else{
			i= (i*3)+1;
		}
		lcount++;
	}
	return lcount;
}//p8

void func9(){
	for (int y=2017; y<2417; y++){
		if ((y%4==0) && (y%100!=0)){
			cout<<y<<endl;
		}else if ((y%100==0) && (y%400==0)){
			cout<<y<<endl;
		}else if (y%400==0){
			cout<<y<<endl;
		}
	}
}//p9

void func10(int x){
	if (x % 2 == 0) x++; //check even
	int y = (2 * x) - 3; //formula for determining # of spaces between *s
	y--; //need this for it to work
	for (int i = 1; i <= x; i++) { //for all # in x
	    for (int j = 0; j < i; j++){
	    	cout << (" ");} //pads before the star with spaces decreasing from x
	    cout << ("*");
	    for (int k = y; k >= 0; k--){
	    	cout << (" ");} //pads after the star using y spaces
	    if (i != x){
	    	cout << ("*") << endl;} //makes it so it doesn't add an extra star
	    y = y - 2; //needed to decrement y for adding spaces
	}
	y = (2 * x)-3;//reset y var
	cout << ("\n");
	int m=0; //incrementing variable to account for increasing spaces down bottom right stars
	int j = x;
	for (int i = 1; i <= x-1; i++) {
		for (int k = j; k > i; k--){
			cout << (" ");}//pads bottom left diagonal of *
	    cout << ("*");
	    for (int l = 0; l < i+m; l++){
	    	cout << (" "); }//pads bottom right diagonal of *
	    cout<<"*"<<endl;
	    m++;//increments to make bottom right *'s at diagonal
	}
}

void func11(int x, int y){
	for(int i=x+1; i<y; i++) {
		int a=i;
		cout<<a<<endl;
		while (a>1){
			if (a%2==0){
				a/=2;
			} else{
				a= (a*3)+1;
			}
		}
		cout<<"Collatz Conjecture is still working"<<endl;
	}
}//p11
