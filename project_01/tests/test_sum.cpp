#include<bits/stdc++.h>
#include "sum.h"
#include<cassert>
using namespace std;

void test_sum()
{
    int a[] = { 1,2,3,4,5};
    int b[] = { 1,2,3,4,5};
    for(int i=1;i<=5;i++)
    {
        int actual = sum(a[i-1],b[i-1]);
        // cout<<actual<<endl;

        int expected = a[i-1]+b[i-1];
        if(actual == expected)
        {
            cout<<"Test Condition : "<<i<<" - Passed"<<endl;
        }
        else
        {
            cerr<<"Test Condition : "<<i<<" - Failed"<<endl;
            assert(false);

        }
    }
       
}
int main()
{
    test_sum();
    return 0;
}
