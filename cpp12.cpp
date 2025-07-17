#include <iostream>
using namespace std;
int main()
{
    int n,sum=0;
    cout<<"enter a positive number";
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        sum+=i;
    }
    cout<<"sum of the first "<<n<<"natural number is "<<sum<<endl;
    return 0;
}

// This program calculates the sum of the first n natural numbers