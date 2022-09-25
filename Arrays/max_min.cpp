#include <iostream>
#include <climits>
using namespace std;

int getMax(int arr[],int size){
    int ma=INT_MIN;
    for (int i = 0; i < size; i++)
    {
        if(arr[i]>ma)
        ma=arr[i];
    }
    return ma;
}

int getMin(int arr[], int size){
    int mi=INT_MAX;
    for (int i = 0; i < size; i++)
    {
        if(arr[i]<mi)
        mi=arr[i];
    }

    return mi;
}

int main(){
    int n;
    cin>>n;
    int arr[100];
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }

    cout<<getMin(arr,n)<<" "<<getMax(arr,n)<<endl;

    return 0;
}
