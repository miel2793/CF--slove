#include<iostream>
using namespace std;
int main()
{

    int n;
    cin>>n;
    int x=0;
    for(int i=0;i<n;i++)
    {

        char o1,o2,ox;
        cin>>o1>>ox>>o2;
        if(o1=='+'||o2=='=')
        {
            x++;
        }
        else{
            x--;
        }
        cout<<x<<endl;
    }
}
