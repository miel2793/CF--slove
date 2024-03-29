 #include<iostream>
using namespace std;
int main()
{
    int n,k,b,c;
    cin>>n>>k;
    if (k <= (n + 1) / 2)
    {
      b=2 * (k - 1) + 1;
      cout<<b<<endl;
    }
       
    else
    {
         c= 2 * (k - (n + 1) / 2);
         cout<<c<<endl;
    }
       
}