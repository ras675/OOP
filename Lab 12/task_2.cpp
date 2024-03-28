#include<iostream>
using namespace std;
const int size=5;

template<class T>
T nth_max (T *arr,int n)
{
    for(int i=0;i<size;i++)
    {
        for(int j=i+1;j<size;j++)
        {
            if(arr[i]<arr[j]){
                T temp=arr[i];
                arr[i]=arr[j];
                arr[j]=temp;
            }
        }
    }
    return arr[n-1];
}

int main()
{
    int a1[]={5,7,3,2,1};
    cout<<nth_max(a1,1)<<endl;
    cout<<nth_max(a1,2)<<endl;
    cout<<nth_max(a1,5)<<endl;
    cout<<endl;

    float a2[]={5.5,7.2,3.1,2.3,1.2};
    cout<<nth_max(a2,1)<<endl;
    cout<<nth_max(a2,2)<<endl;
    cout<<nth_max(a2,5)<<endl;
    cout<<endl;

    return 0;
}