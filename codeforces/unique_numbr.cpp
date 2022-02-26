#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
#define mod 1000000007
int main(){
ios_base::sync_with_stdio(false);
cin.tie(NULL);
int t;
cin>>t; 
while(t--){
    int n;
    cin>>n;
    vector<int> ans;
    int sum=0;
    int last=9;
    while(sum<n && last>0){
        ans.push_back(min(n-sum,last));
        sum+=last;
        last--;
    }
    if(sum<n) cout<<-1<<endl;
    else{
        reverse(ans.begin(),ans.end());
        for(int i: ans) cout<<i;
        cout<<endl;
    }

    
    }
return 0;
}