#include<bits/stdc++.h>
using namespace std;

int factors(int num){
    int ret=0;
    for (int  i = 1; i <= num; i++)
    {
        if(num%i==0){
            ret++;
        }
    }
    return ret;
    
}
int main(){
ios_base::sync_with_stdio(false);
cin.tie(NULL);
int n;
cin>>n;
int min=0,ans;
for (int i = 0; i < n; i++)
{
   int a;
   cin>>a;
   int f=factors(a);
   if(f>min){
       min=f;
       ans=i;
   }

}
cout<<ans+1<<endl;

return 0;
}