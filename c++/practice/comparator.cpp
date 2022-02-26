#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
#define mod 1000000007
bool cmp(pair<int,int> a,pair<int,int> b){
    if(a.first!=b.first) return a.first<b.first;
   
   return a.second<b.second;
}
int main(){
ios_base::sync_with_stdio(false);
cin.tie(NULL);
int n;
cin>>n;
vector<pair<int,int>>a(n);
for (int i = 0; i < n; i++)
{
    cin>>a[i].first>>a[i].second;
}
sort(a.begin(),a.end(),cmp);
for (int i = 0; i < n; i++)
{
    cout<<a[i].first<<" "<<a[i].second<<"\n";
}

return 0;
}