#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
#define mod 1000000007
int main(){
ios_base::sync_with_stdio(false);
cin.tie(NULL);
vector<int> v={-1,-2,-3,4,-6};
cout<<any_of(v.begin(),v.end(),[](int x){return x>0;})<<endl;
cout<<none_of(v.begin(),v.end(),[](int x){return x>0;})<<endl;//return not value
return 0;
}