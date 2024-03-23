#include <bits/stdc++.h>
using namespace std;

int fib(int n)
{
    if(n<2)
    {
        return 1;
    }
    return fib(n-2) + fib(n-1);
}

int main(){
    int f;
    cout<<"\nFIBOSEQUENCE ENGINE || BY ARINDAM SAMANTA\n"<<"This is an engine which can search fibonacci number according to its position like on 1st position the fibonacci number is 1..\n"<<"Enter the position where you want to find the Fibonacci Number:\n";
    cin>>f;
    cout<<"The Fibonacci number at "<<f<<"th position is "<<fib(f)<<".\n"<<"ACTION TERMINATED\n";

    return 0;
}