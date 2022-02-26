#include<bits/stdc++.h>
using namespace std;
void print (map<int,string> &v){
    cout<<v.size()<<endl;
for(auto it = v.begin(); it!= v.end(); it++)// or can written as for(auto &value:it)
{
    cout<<(*it).first<<" "<<(*it).second<<endl;
}

}
int main(){
ios_base::sync_with_stdio(false);
cin.tie(NULL);
map<int,string> m;//map<key,value> sorts the key in ascending order ny default
unordered_map<int,string> m1;//unorderd_map<key,value> in this key cannot take value as pair,vector,sets
m[1]="abc";
m1[1]="abc";
m[5];
m1[5]="cba";
m[4]="bca";
m1[4]="bca";
m[7]="acb";
m.insert({4,"acb"});//can use make_pair inside insert
m.erase(1);
auto it=m.find(5);//if value x in find(x) is not present in map then it returns the end value of map
//auto it=m.erase(4);
if(it==m.end()){
    cout<<"NO VALUE"<<endl;
}
else{
cout<<(*it).first<<" "<<(*it).second<<endl;
}
//print(m1);
return 0;
}