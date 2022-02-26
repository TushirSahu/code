#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
#define mod 1000000007
int main(){
ios_base::sync_with_stdio(false);
cin.tie(NULL);
vector<int> v;
stack<int> st;
int n;
cin>>n;
int arr[n];
for (int i = 0; i < n; i++)
{
    cin>>arr[i];
}
for (int i = n-1; i >=0; i--)
{
    if(st.size()==0){
        v.push_back(-1);
    }
    else if(st.size()>0 && st.top()>arr[i]){
        v.push_back(st.top());
    }
    else if(st.size()>0 && st.top()<=arr[i]){
        while(st.size()>0 && st.top()<=arr[i]){
            st.pop();
        }
        if(st.size()==0){
            v.push_back(-1);
        }
        else{
            v.push_back(st.top());
        }
    }
    st.push(arr[i]);
}
reverse(v.begin(),v.end());
for (int i = 0; i < v.size(); i++)
{
    cout<<v[i]<<" ";
}


return 0;
}