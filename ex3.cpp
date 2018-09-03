#include<bits/stdc++.h>

using namespace std;

int UCLN(int m,int n)
{
    if(m==n) return m;
    else {
        if(m>n) UCLN(m-n,n);
        else UCLN(m,n-m);
    }
}

int main()
{
    int m,n;
    cin >> m >> n;
    cout << UCLN(m,n);
    return 0;
}
