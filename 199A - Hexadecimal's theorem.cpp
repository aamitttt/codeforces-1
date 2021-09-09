#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    
    if(n==3)
    {
        cout<<"1"<<" "<<"1"<<" "<<"1";
        return 0;
    }
    
      if(n==2)
    {
        cout<<"0"<<" "<<"1"<<" "<<"1";
        return 0;
    }
       if(n==1)
    {
        cout<<"0"<<" "<<"0"<<" "<<"1";
        return 0;
    }
       if(n==0)
    {
        cout<<"0"<<" "<<"0"<<" "<<"0";
        return 0;
    }
    int fb[n+1];
    
    fb[0]=0;
    fb[1]=1;
    for(int i=2;i<=n;i++)
    {
        fb[i]=fb[i-1]+fb[i-2];
    }
    bool flage = false;
    for(int i=0;i<=n;i++)
    {
        if(fb[i]==n)
        {
            flage =true;
            break;
        }
    }
    if(flage==false)
    {
        cout<<" not fibonacci";
        return 0;
    }else
    {
        for(int i=5;i<=n;i++)
        {
            if(fb[i]==n)
            {
                cout<<fb[i-4]<<" "<<fb[i-3]<<" "<<fb[i-1];
                return 0;
            }
        }
    }
    
    return 0;
}
