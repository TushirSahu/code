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
    int n,k;
    cin>>n>>k;
    multiset<ll> bags;
    for (int  i = 0; i <n; i++)
    {
        ll candy_count;
        cin>>candy_count;
        bags.insert(candy_count);
    }
    ll total_candies=0;
    for (int i = 0; i < k; i++)
    {
        auto last_it=(--bags.end());//for getting last element in a set
        ll candy_ct=*last_it;
        total_candies+=candy_ct;
        bags.erase(last_it);
        bags.insert(candy_ct/2);
    }
    cout<<total_candies<<"\n";
    
    

}
return 0;
}