#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
#define mod 1000000007
#define nl "\n"
#define all(v) v.begin(),v.end()

int main(){
ios_base::sync_with_stdio(false);
cin.tie(NULL);
int t;
cin>>t;
while(t--){
    int n;
    cin>>n;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin>>a[i];
    }
    //sort(a,a+n);
    bool flag=false;
    int ind1,ind2;
    for (int i = 0; i < n-1; i++)
    {
        if(abs(a[i+1]-a[i])>=2){
            ind1=i+1;
            ind2=i+2;
            flag=true;;
            break;
        }
        else flag;
    }
    if(flag){
        cout<<"YES\n";
        cout<<ind1<<" "<<ind2<<nl;
    }
    else cout<<"NO\n";
    
}
return 0;
}