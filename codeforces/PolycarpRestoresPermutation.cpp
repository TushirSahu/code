#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<ll> ve;
#define mod 1000000007
#define nl "\n"
#define all(v) v.begin(),v.end()
#define pb push_back
#define eb emplace_back
    
ll gcd(ll a,ll b){
 if(b==0)return a;
return gcd(b,a%b);}
    
void digits(int n){
 cout<<floor(log10(n)) + 1;}
    
 bool sortingdescending(pair<int,int> a,pair<int,int> b){
if( a.second<b.second) return false;
return true;
}
    
bool poweroftwo(ll x) {
return x && (!(x & (x-1)));
}
    
    
int main(){
ios_base::sync_with_stdio(false);
cin.tie(NULL);
 #ifndef ONLINE_JUDGE
        freopen("/home/tushir/coding/inputf.in", "r", stdin);
        freopen("/home/tushir/coding/outputf.in", "w", stdout);
    #endif
int t;
cin>>t;
while(t--){
int n;
    cin>>n;
    vector<int>v(n-1); 
    for(int i=0;i<n-1;i++)
    {
        cin>>v[i];
    }
    vector<int>ans1(n);
    ans1[0]=1;
    for(int i=1;i<n;i++)
    {
        ans1[i]=ans1[i-1]+v[i-1];
    }
    int x=*min_element(all(ans1));
    // cout<<x<<endl;
    int temp=0;
    if(x<=0)
    {
        temp=abs(x)+1; 
    }
    for(int i=0;i<n;i++)
    {
        ans1[i]=ans1[i]+temp;
    }
    vector<int>ans(n);
    for(int i=0;i<n;i++)
    {
        ans[i]=ans1[i];
    }
    sort(all(ans));
    vector<int>ans2(n);
    for(int i=0;i<n;i++)
    {
        ans2[i]=i+1;
    }
        // for(int i=0;i<n;i++)
        // {
        //     cout<<ans1[i]<<" ";
        // }
    if(ans==ans2)
    {
        for(int i=0;i<n;i++)
        {
            cout<<ans1[i]<<" ";
        }
    }
    else
    {
        cout<<-1<<endl;
    }
    cout<<endl;
 

}
return 0;
}