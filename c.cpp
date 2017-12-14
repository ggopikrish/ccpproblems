#include<bits/stdc++.h>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    long n,c1=0,c2=0,c3=0,t;
    cin>>n;
    cout<<left<<setfill('0')<<setw(8);
    signed int a[1000];
    for(int i=0;i<n;i++)cin>>a[i];

    for(int i=0;i<n;i++)
    {
        if(a[i]>0)
        {
            c1++;
        }else if(a[i]<0)
        {
            c2++;
        }else
        {
            c3++;
        }
    }
    cout<<c1/(float)n<<"\n"<<c2/(float)n<<"\n"<<c3/(float)n;
    return 0;
}
