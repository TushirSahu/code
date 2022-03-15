#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
#define mod 1000000007
#define nl "\n"
#define all(v) v.begin(),v.end()

int main(){
ios_base::sync_with_stdio(false);
cin.tie(NULL);
int k;
cin>>k;
char c[25];
int a[25]={0};
for (int i = 0; i < 20; i++)
{
    cin>>c[i];
    if(c[i]=='.') continue;
    a[c[i]-'1']++;
}
bool flag=false;
for (int i = 0; i < 9; i++)
{
   if(a[i]>2*k) {
       flag=true;
       break;
   }
}
if(flag) cout<<"NO\n";
else cout<<"YES\n";



return 0;
}