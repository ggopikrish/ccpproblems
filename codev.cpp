#include<bits/stdc++.h>
using namespace std;

int main(void)
{ int s,e,cou,k=0,t;
vector<int>c;
vector<int>::iterator i;
cin>>t;
   while(t--){cin>>s>>e;
   for(int i=s;i<=e;i++)
   {    cou=0;
    for(int j=1;j<=i;j++)
    {
        if(i%j==0){cou++;}
    }
    if(cou==2)
        {c.push_back(i);
    k++;}
   }
/*   for(i=c.begin();i!=c.end();i++)
   {
       cout<<*i;

   }*/
    cout<<c[0]<<c[c.size()-1];
    fill(c.begin(),c.end(),0);
   }

return 0;

}
