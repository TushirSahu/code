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
    int n;
    cin>>n;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin>>a[i];
    }
    int max=1;
    vector<int> v;
    int temp;
    for (int i = 0; i <n; i++)
    {
        for(int j=i+1;j<n;j++){
            temp=a[i]+a[j];
            if(temp>max){
                max=temp;
            }
           v.push_back(temp);   
        }
    }
    int den=(n*(n-1))/2;
    int num=0;
    for(int i=0;i<v.size();i++){
        if(v[i]==max){
            num++;
        }
    }
     float ff=(float)num/(float)den;
        cout<<fixed<<setprecision(8)<<ff<<endl;
}
return 0;
}