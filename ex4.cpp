#include<bits/stdc++.h>

using namespace std;

void Quick_Sort(int a[], int left, int right)
{
    if(left<right) {
        int i=left+1, j=right, temp=0;
        while(i<=j) {
            while(a[i]<=a[left] && i<=right) i++;
            while(a[j]>a[left]) j--;
            if(i<j) {
                temp=a[i];
                a[i]=a[j];
                a[j]=temp;
            }
        }
        temp=a[left];
        a[left]=a[j];
        a[j]=temp;
        if(left<j-1) Quick_Sort(a,left,j-1);
        if(j+1<right) Quick_Sort(a,j+1,right);
    }
}

int main()
{
    int n;
    cin >> n;
    int a[n];
    for(int i=0;i<n;i++)
    {
        cin >> a[i];
    }
    Quick_Sort(a,0,n-1);
    for(int i=0;i<n;i++)
    {
        cout << a[i] << " ";
    }
    return 0;
}
