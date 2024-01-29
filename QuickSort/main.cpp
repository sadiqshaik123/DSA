#include <iostream>
#include<vector>

using namespace std;

void display(int arr[],int n){
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

int partitionpivot(int arr[],int low,int high){
    int pivot=arr[high];
    int i=low-1;
    for(int j=low;j<=high-1;j++){
        if(arr[j]<pivot){
            i++;
            swap(arr[i],arr[j]);
        }
    }
    swap(arr[i+1],arr[high]);
    return i+1;
}

void quicksort(int arr[],int low,int high){
    if(low<high){
        int pi=partitionpivot(arr,low,high);
        quicksort(arr,low,pi-1);
        quicksort(arr,pi+1,high);
    }
}


int main()
{
    int len;
    cout<<"[Quick Sort]"<<endl;
    cout<<"Enter length of the array: ";
    cin>>len;
    int arr[len];
    cout << "Enter elements: ";
    for(int i=0;i<len;i++){
        cin>>arr[i];
    }
    cout<<"Before sorting: ";
    display(arr,len);
    quicksort(arr,0,len-1);
    cout<<"After sorting: ";
    display(arr,len);

    return 0;
}
