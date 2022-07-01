#include <iostream>
using namespace std;

long long power(int x, int y)
{
    // if (y == 0)
    //     return 1;
    // else {
    //     return x * power(x, y - 1);
    // }

    if(y==0) return 1;
    long long temp = power(x,y/2);
    
    if(y%2==1) return temp*temp*x;
    return temp * temp;
}

int main()
{
    int n, m;
    cin >> n;
    cin >> m;
    cout << power(n, m);
    return 0;
}