#include<bits/stdc++.h>
 using namespace std;

int main(){
char a[20];
cin>>a;

for (int i = 0; a[i]!= '\0'; i++)
{
    if(a[i]=='a' || a[i]=='e' || a[i]=='i' || a[i]=='o' || a[i]=='i' || a[i]=='u' )
    {
        a[i]=' ';
    }
}
cout<<a;
return 0;
}
// int main()
// {
//         char str[100];
//         cout<<"\n Enter String : ";
//         cin>>str;

//         for(int i=0; str[i]!='\0'; i++)
//         {
//                 if (str[i]=='a' || str[i]=='e' || str[i]=='i' || str[i]=='o' || str[i]=='u' || str[i]=='A' || str[i]=='E' || str[i]=='I'
// || str[i]=='O' || str[i]=='U')
//                 {
//                         str[i]=' ';
//                 }
//         }
//         cout<<"\n String After Deleting Vowels : "<<str;
//         return 0;
// }