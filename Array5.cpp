//Move all negative numbers to beginning and positive to end with constant extra space

#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;

    while(t--)
    {
        int n;
        vector<int> v;
        int value;

        cin>>n;
        for(int i=0; i<n; i++ )
        {
            cin>>value;
            v.push_back(value);
        }
        
        int low=0, high=n-1;
        while(low<high)
        {
            
            if(v[low]<0)
                low++;
            else if(v[high]>0)
                high--;
            else{
                swap(v[low],v[high]);
            }

        }

        for(int i=0;i<n; i++)
            cout<<v[i]<<" ";
    }
}