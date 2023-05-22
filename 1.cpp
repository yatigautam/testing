#include<bits/stdc++.h>
using namespace std;

int sum(int a, int b){
	int s1=a+b;
	return s1;
}

void print(int s2){
	cout<<"sum is:"<<s2;
}

int main(){
	int n1,n2;
	cin>>n1>>n2;
	int summ=sum(n1,n2);
	print(summ);
	return 0;
}   