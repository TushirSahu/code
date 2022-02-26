#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
#define mod 1000000007
int main(){
ios_base::sync_with_stdio(false);
cin.tie(NULL);
//lambda function
auto sum=[](int x,int y){return x+y;};
cout<<sum(2,3)<<endl;


vector<int> v={1,2,-9 };
cout<<all_of(v.begin(),v.end(),[](int x){return x>0;})<<endl;//returns bool value that is 1 or 0

return 0;
}