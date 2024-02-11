#include<iostream>
using namespace std;
int main()
{

    long long A,B,C,D;

    cin>>A>>B>>C>>D;

    if((A^B)>(C^D))
    {

        cout<<"YES"<<endl;
    }
    else if((C^D)>(A^B))
    {
        cout<<"NO"<<endl;
    }

   else if((A^B)<(C^D) )
    {

        cout<<"YES"<<endl;
    }
    else if((C^D)<(A^D))
    {
         cout<<"NO"<<endl;
    }



    else
    {
        cout<<("NO")<<endl;
    }

}
