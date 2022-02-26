#include<bits/stdc++.h>
using namespace std;

int main(){
ios_base::sync_with_stdio(false);
cin.tie(NULL);
int n,count=0;
cin>>n;
for (int i = 0; i < n; i++)
{
    int a,b,c;
    cin>>a>>b>>c;
    if((a==0 && b==0)||(b==0 && c==0)||(c==0&& a==0))
    {
     continue;
    }
    else{
       count++;
    }

}
  cout<<count;

return 0;
}