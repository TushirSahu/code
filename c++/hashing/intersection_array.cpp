#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
#define mod 1000000007
int Intersection(int a[],int b[],int n,int m){
    set<int> s;
    int x;
    for (int i = 0; i < n; i++)
    {
        
        cin>>x;
        s.insert(x);
    }
    int count=0;
    for (int i = 0; i < m; i++)
    {
        int y;
        cin>>y;
        s.insert(y);
        if(s.find(x)!=s.end()){
            count++;
            s.erase(x);
        }
    }
    return count;
    
}
int main(){
ios_base::sync_with_stdio(false);
cin.tie(NULL);
int n,m;
cin>>n>>m;
int a[n],b[m];
cout<<Intersection(a,b,n,m);
return 0;
}