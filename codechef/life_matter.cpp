#include<bits/stdc++.h>
using namespace std;

int main(){
ios_base::sync_with_stdio(false);
cin.tie(NULL);
int t;
cin>>t;
while(t--){
  int arr[30];
  bool flag=false;
  for(int i=0;i<30;i++){
      cin>>arr[i];
  }
  for (int  i = 0; i < 30; i++)
  {
     if(arr[i]==1&&arr[i+1]==1 && arr[i+2]==1 && arr[i+3]==1 && arr[i+4]==1 && arr[i+5]==1){
         flag=true;
         break;
     }
  }
  if(flag){
      cout<<"#coderlifematters\n";
  }
  else{
      cout<<"#allcodersarefun\n";
  }
}
return 0;
}