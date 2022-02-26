#include<bits/stdc++.h>
using namespace std;

int main(){
ios_base::sync_with_stdio(false);
cin.tie(NULL);
int t;
cin>>t;
while(t--){
    int n;
    cin>>n;
    int g[n],f[n],max[n],max_goal=0;
    for (int i = 0; i < n; i++)
    {
        cin>>g[i];
    }
    for (int i = 0; i < n; i++)
    {
        cin>>f[i];
    }
    for (int i = 0; i < n; i++)
    {
       max[i]= (g[i]*20)-(f[i]*10);
       if(max[i]<0){
           max_goal=0;
       }
       else if(max[i]>max_goal){
           max_goal=max[i];
       }
    }
    cout<<max_goal<<endl;
    
     

}
return 0;
}