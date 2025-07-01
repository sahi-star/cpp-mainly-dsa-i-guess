#include<iostream>
using namespace std;

int digsum(int n){
	int sum=0;
	int num=n;
	while(num>0){
		int last_digit=num%10;
		num=num/10;
		
		sum=sum+last_digit;
	}
	return sum;	
}

int main(){
	cout<<digsum(123);
}

// output 1+2+3=6
