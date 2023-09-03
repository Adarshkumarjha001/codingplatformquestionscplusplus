#include <bits/stdc++.h>
using namespace std;
int main(){
    int size;
    int Min=0,Max=0;
    cin>>size;
    vector<int> ans;
    vector<int> arr(size,0);
    for(int i=0;i<size;i++){
        cin>>arr[i];
        ans.push_back(arr[i]);
    }
    sort(ans.begin(),ans.end());
    for(int i=0;i<size-1;i++){
        Min+=ans[i];

    }
    for(int i=1;i<size;i++){
        Max+=ans[i];

    }
    cout<<Min<<" "<<Max;
    
}
