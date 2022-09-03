#include<bits/stdc++.h>

using namespace std;

int main()
{
    vector<char> v={'a','b','c','d'};
    int n= v.size();
    for(int i=0; i<=pow(2,n)-1; i++ )
    {
        string str="";
        for(int j=0; j<n; j++)
        {
            if(i&(1<<j))
            {
                str+=v[j];
                
            }
        }
        cout<<str<<" ,";

    }
    cout<<endl;

}