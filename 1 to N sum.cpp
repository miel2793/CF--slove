#include <iostream>
using namespace std;

int main()
{
    int N,sum=0;
    cin>>N;
    for(int i=1;i<=N;i++)
    {
      sum=sum+ i;
    }
    cout<<sum <<endl;
    return 0;
}