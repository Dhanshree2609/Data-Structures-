#include <iostream>
#include<string>
using namespace std;

int main() {
// your code goes here
int t;
cin>>t;
while(t--)
{
   string s;
   cin>>s;
   int n=s.length();
   
   int count=0;
   int max_count=0;
   
   for(int i=0; i<n; i++)
   {
       if( (s[i]=='a') || s[i]=='e' || s[i]=='i' || s[i]=='o' || s[i]=='u')
       {
           count++;
           max_count=max(max_count,count);
       }
       else
       {
           count=0;
       }
       
   }
   
   if(max_count>2)
   {
       cout<<"HAPPY"<<endl;
   }
   else
   {
       cout<<"SAD"<<endl;
   }
   
}
return 0;
}
