#include<bits/stdc++.h>
using namespace std;
int main(){
	int size;
	cin>>size;
    vector<int> ans;
	vector<int> arr(size,0);
	for(int i=0;i<size;i++){
		cin>>arr[i];
  } 
	vector<int> arr1(size,0);
	for(int i=0;i<size;i++){
		cin>>arr1[i];
		ans.push_back(arr1[i]);
	} 
	 for(int i=0;i<size;i++){
     	ans.push_back(arr[i]);
	 }
	 for(int i=0;i<ans.size();i++){
	 	cout<<ans[i]<<" ";
	 }
}
