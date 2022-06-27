#include <iostream>
using namespace std;

int facto(int n)
{
    if (n == 0)             //Base function
        return 1;
    else
    {
        return n * facto(n - 1);         //Main function
    }    
}

int main(){
    int x;
    cout<<"Enter the number : ";
    cin>>x;
    cout<<facto(x);
    return 0;
}