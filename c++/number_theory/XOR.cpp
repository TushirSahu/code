#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
#define mod 1000000007
#define nl "\n"
#define all(v) v.begin(),v.end()

int main(){
ios_base::sync_with_stdio(false);
cin.tie(NULL);
int a=4,b=6;
a=a^b;
b=b^a;//b==a
//b==b^a^b==b^b^a==0^a==a
a=a^b;//a==b
//a=(a^b)^a==a^a^b==b

return 0;
}