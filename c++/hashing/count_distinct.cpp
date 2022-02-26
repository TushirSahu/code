#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
#define mod 1000000007
int Count(int arr[],int n){
    unordered_set<int> s;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin>>x;
        s.insert(x);
    }
    return s.size();
    
}
int main(){
ios_base::sync_with_stdio(false);
cin.tie(NULL);
int n;
cin>>n;
int a[n];
cout<<Count(a,n);
return 0;
}