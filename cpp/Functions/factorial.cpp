#include<iostream>
using namespace std;

int fact(int n){
	int fact=1;
	for(int i=1;i<=n;i++){
		fact=fact*i;
	}
	return fact;
}

int main(){
	cout<<fact(5);
}

// output 120
