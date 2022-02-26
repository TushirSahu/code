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
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin>>a[i];
    }
    sort(a,a+n);
    int area=1,l,b;
    int c=0;
    for (int i = n-1; i >0; i--)
    {
        if(c==2){
            break;
        }
        else{
            if(a[i]==a[i-1]){
            area=area*a[i];
            c++;
            i--;
            }
        }
    }
    if(c<2){
        cout<<"-1"<<endl;

    }
    else{
        cout<<area<<endl;
    }
    
    
}
return 0;
}