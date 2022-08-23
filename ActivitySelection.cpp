#include<bits/stdc++.h>

using namespace std;

int main()
{
    vector<vector<int>>v;

    int n; cin>>n;
    for(int i=0; i<n; i++)
    {
        int start,end;
        cin>>start>>end;
        v.push_back({start,end});
    }

    sort(v.begin(),v.end(),[&](vector<int> &a,vector<int>&b){
        return a[1]<b[1];
    });

    int take=1;
    int end=v[0][1];
    for(int i=1; i<v.size();i++)
    {
        if(end<=v[i][0])
        {
            take++;
            end=v[i][1];
        }
    }

    cout<<"take-->"<<take<<endl;

}