#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
#define mod 1000000007
int Union(int a[],int b[],int n,int m){
    set<int> s;
    for (int i = 0; i <n; i++)
    {
        int x;
        cin>>x;
        s.insert(x);
    }
    for (int i = 0; i <m; i++)
    {
        int y;
        cin>>y;
        s.insert(y);
    }
    return s.size();
    

}
int main(){
ios_base::sync_with_stdio(false);
cin.tie(NULL);
int n,m;
cin>>n>>m;
int a[n];
int b[m];
cout<<Union(a,b,n,m);
return 0;
}