//Find left most index of an element in sorted array
#include<iostream>
using namespace std;

int binarySearch(int a[], int l, int h, int x);
int main()
{
    int a[] = {1,2,2,2,3,3,3,3,4,5,6,7};
    int n = sizeof(a)/sizeof(a[0]);
    int index = binarySearch(a, 0, n-1, 3);
    if(index == -1)
    {
        cout<<"Not found";
    }
    else
    {
        cout<<"Found at position: "<<index +1;
    }
    return 0;
    
}

int binarySearch(int a[], int l, int h, int x)
{
    int mid = l + (h-l)/2;
    
    if(l > h)
        return -1;
    
    if(a[mid] == x && (mid == 0 || a[mid-1] !=x))
    {
        return mid;
    }
    if(a[mid] >= x)
    {
        return binarySearch(a, l, mid-1, x);
    }
    else
        return binarySearch(a, mid+1, h, x);
}