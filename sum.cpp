#include<bits/stdc++.h>
using namespace std;

int main(void)
{ int input,sum,mi,mx;
 vector<int>a,b,c;
   while(cin>>input){a.push_back(input);b.push_back(input);}

    for(int i=0;i<a.size();i++)
    {
        b[i]=0;sum=0;
        for(int j=0;j<a.size();j++)
        {
            sum+=b[j];
        }
        c.push_back(sum);
        b[i]=a[i];
    }

    cout<<*min_element(c.begin(), c.end())<<" "<<*max_element(c.begin(), c.end());
  // cout<<mi<<" "<mx;

  return 0;
}
