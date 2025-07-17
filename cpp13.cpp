#include <iostream>
using namespace std;
int main()
{
    int n,sum=0;
    cout<<"enter a positive number";
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=1;j++)
        {
            sum+=i;
        }
    }
    cout<<"sum of the first "<<n<<"natural number is "<<sum<<endl;
    return 0;
}

// The code calculates the sum of the first n natural numbers. using nested loops