#include<iostream>

using namespace std;

bool prime(int x)
{
    if(x<=1)
        return false;
    for(int i=2;i<=x/2;i++)
    {
        if(x%i==0)
            return false;
    }

    return true;
}

void sum(int n)
{
    for(int i=2;i<=n/2;i++)
    {
        if(prime(i) && prime(n-i))
        {
            cout<<n<<" = "<<i<<" + "<<n-i<<endl;
        }
    }
}

int main()
{
    int n;
    cout<<"Enter a no.:"<<endl;
    cin>>n;
    sum(n);
    return 0;
}
