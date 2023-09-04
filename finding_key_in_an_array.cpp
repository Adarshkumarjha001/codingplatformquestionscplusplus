#include<iostream>
using namespace std;
int main(){
	int size;
	cin>>size;
	int arr[100];
	for(int i=0;i<size;i++){
		cin>>arr[i];
	}
	int key;
	bool flag=0;
	cin>>key;
	for(int i=0;i<size;i++){
		if(arr[i]==key){
			flag=1;
		
		}
			cout<<key<<" value is at"<<i<<"index"<<endl;
	}
	for(int i=size-1;i>=0;i--){
		if(key==arr[i]){
			flag=1;
			
		}
		cout<<key<<" last value is at"<<i<<"index"<<endl;
	
	}
	     
		
	}
