//Chander 106116084
#include <bits/stdc++.h>
using namespace std;

void merge(int *a, int l, int h, int mid)
{
    int i, j, k, c[50];
    i = l;
    k = l;
    j = mid + 1;
    while (i <= mid && j <= h)
    {
        if (a[i] < a[j])
        {
            c[k] = a[i];
            k++;
            i++;
        }
        else
        {
            c[k] = a[j];
            k++;
            j++;
        }
    }
    while (i <= mid)
    {
        c[k] = a[i];
        k++;
        i++;
    }
    while (j <= h)
    {
        c[k] = a[j];
        k++;
        j++;
    }
    for (i = l; i < k; i++)
    {
        a[i] = c[i];
    }
}


void mergesort(int *a, int l, int h)
{
    int mid;
    if (l < h)
    {
        mid=(l+h)/2;
        mergesort(a,l,mid);
        mergesort(a,mid+1,h);
        merge(a,l,h,mid);
    }
    return;
}




int main()
{
    int a[100], i;
    cout<<"Enter number of elements in the array"<<endl;
    cin>>n;
    cout<<"Enter the elements of the array"<<endl;
    for (i = 0; i < n; i++)
    {
        cin>>a[i];
    }
    mergesort(a, 0, n-1);
    cout<<"Sorted array is"<<endl;
    for (i = 0; i < n; i++)
    {
        cout<<a[i]<<" ";
    }
    
    return 0;
}
