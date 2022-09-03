/*A permutation of an array of integers is an arrangement of its members into a sequence or 
linear order. For example, for arr = [1,2,3], the following are all the permutations of 
arr: [1,2,3], [1,3,2], [2, 1, 3],[2, 3, 1], [3,1,2], [3,2,1].
For example, the next permutation of arr = [1,2,3] is [1,3,2].
Similarly, the next permutation of arr = [2,3,1] is [3,1,2].
While the next permutation of arr = [3,2,1] is [1,2,3] because [3,2,1] does not have a lexicographical larger rearrangement.
*/
#include<bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> v={1,2,3};

    int n,k=-1,l;

    n= v.size();

    for(k=n-2; k>=0; k--)
    {
        if(v[k]< v[k+1])
            break;
    }

    if(k<0)
        reverse(v.begin(),v.end());
    else{
        for(l=n-1; l>k; l--)
        {
            if(v[l]>v[k])
                break;
        }
        swap(v[k],v[l]);
        reverse(v.begin()+k+1, v.end());
    }
    for(int i=0; i<v.size();i++)
        cout<<" "<<v[i];
    cout<<endl;
}