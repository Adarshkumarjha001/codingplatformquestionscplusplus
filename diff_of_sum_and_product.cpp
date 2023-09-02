#include<bits/stdc++.h>
using namespace std;
void product(int n,int a,int pro=1){
	int t=n;
	while(n!=0){
		a=n%10;
		pro=pro*a;
		n=n/10;
	}
	cout<<pro<<endl;
	int sum=0;

	while(t!=0){
		a=t%10;
		sum+=a;
		t=t/10;
	}
	cout<<sum<<endl;
	cout<<pro-sum;
}

int main(){
	int n;
	int a;
	cin>>n;
	product(n,a,1);
	
	
	
}
