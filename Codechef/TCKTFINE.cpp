#include <iostream>
using namespace std;

int main() {
// your code goes here
int t;
cin>>t;
while(t--)
{
   int x,q,p;
   cin>>x>>q>>p;
   
   int temp=q-p;
   
   cout<<x*temp<<endl;
}
return 0;
}

