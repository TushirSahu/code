#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
#define mod 1000000007
void solve(){
     int n; 
    cin>>n;
    vector<int> v1(n);
    for (int i = 0; i < n; i++)
    {
        cin>>v1[i];
    }
    int index1=0;
    int index2=0;
    for (int i = 0; i < n; i++)
    {
        if(v1[i]<v1[index1]){
            index1=i;        
        }
        if(v1[i]>v1[index2]){
            index2=i;       
             }
    }
    int min1=min(index1,index2);
    int max1=max(index1,index2);
    int ans1=n-min1;
    int ans2=max1+1;
    int ans3=min1+1+n-max1;
    cout<<min(ans1,min(ans2,ans3))<<endl;
}
int main(){
ios_base::sync_with_stdio(false);
cin.tie(NULL);
int t;
cin>>t;
while(t--){
   solve();
    
}
return 0;
}