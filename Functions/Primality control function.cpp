/*
Prime number
tunagrskn
*/
#include <iostream>
using namespace std;

bool Prime(int n)
{
    for(int i=2; i<n; i++)
    {
        if(n%i == 0)
            return 0;
    }
    return 1;
}

int main()
{
    cout<<"Please enter an integer:"<<endl;
    int n;
    cin>>n;
    cout<<(Prime(n)?"Yes":"No");

    return 0;
}
