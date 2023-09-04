#include<bits/stdc++.h>
using namespace std;
int main(){
	int i=0,sum=0;
	int n,a;
	cin>>n;
	while(n!=0){
		a=n%10;
		n=n/10;
		sum=sum+a*pow(2,i);
		i++;
	}
	cout<<sum;
}
