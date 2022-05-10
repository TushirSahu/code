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
   unsigned int factorial(unsigned int n)
{
    if (n == 0)
        return 1;
    return n * factorial(n - 1);
} 
    
int main(){
ios_base::sync_with_stdio(false);
cin.tie(NULL);
//  #ifndef ONLINE_JUDGE
//         freopen("/home/tushir/coding/inputf.in", "r", stdin);
//         freopen("/home/tushir/coding/outputf.in", "w", stdout);
//     #endif
string s1,s2;
cin>>s1>>s2;
int pos=0,neg=0;
for (int i = 0; i < s1.size(); i++)
{
    if(s1[i]=='+') pos++;
    else neg++;
}
int ques=0;
for (int i = 0; i < s2.size(); i++)
{
    if(s2[i]=='+') pos--;
    else if(s2[i]=='-')neg--;
    else ques++;
}
// cout<<pos<<" "<<neg<<nl;
if(pos<0 || neg<0) cout<<fixed<<setprecision(12)<<(double)0<<nl;
else{
    double c=0;
    // if(neg>ques || pos>ques){
    //  c=0;
    //   cout<<fixed<<setprecision(12)<<c<<nl;
    // }
     if(pos==0 && neg==0){
         c=1;
          cout<<fixed<<setprecision(12)<<c<<nl;
    }
    else{
    // cout<<c<<nl;
    double p=pow(2,ques);
    double res=factorial(ques);
    double res1=factorial(neg)*factorial(pos);
    double final=res/res1;
    c=final/p;
    cout<<fixed<<setprecision(12)<<c<<nl;
    }

    
}
return 0;
}