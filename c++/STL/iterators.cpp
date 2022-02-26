#include<bits/stdc++.h>
using namespace std;
int main(){
vector<pair<int,int>> v_pair;
v_pair={{1,2},{2,4},{4,5},{6,7}};
vector<pair<int,int>>::iterator it;
for (it=v_pair.begin() ; it!= v_pair.end(); it++)
{
cout<<(*it).first<<" "<<(*it).second<<endl;
//cout<<(*(it+1)).first<<" "<<(*(it+1)).second<<endl;
}
return 0;
}