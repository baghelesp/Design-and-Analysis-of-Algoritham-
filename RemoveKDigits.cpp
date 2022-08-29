#include<iostream>
#include<bits/stdc++.h>

using namespace std;

int main()
{
    string num;
    int k;
    cout<<"Enter a number";
    cin>>num;
    cout<<"Enter a k value :";
    cin>>k;
    int n=num.length();

    stack<char> s;

    for(int i=0; i<n; i++)
    {
        while(!s.empty() && k!=0 && s.top()>num[i] )
        {
            s.pop();
            k--;
        }

        if(!s.empty() || num[i]!=0)
        {
            s.push(num[i]);
        }
    }

    while(k!=0 && !s.empty())
    {
        s.pop();
        k--;
    }

    if(s.empty())
        return 0;

    while(!s.empty())
    {
        num[n-1]=s.top();
        s.pop();
        n--;
    }
    cout<<"Largest Number is "<<num.substr(n)<<endl;
}