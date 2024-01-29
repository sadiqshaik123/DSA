#include <iostream>
#include<vector>

using namespace std;

void display(int arr[],int n){
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}
void Insertionsort(int arr[],int n){
    for(int i=1;i<n;i++){
        int key=arr[i];
        int j=i-1;
        while(j>=0 && arr[j]>key){
            arr[j+1]=arr[j];
            j--;
        }
        arr[j+1]=key;

    }
}

int main()
{
    int len;
    cout<<"[Insertion Sort]"<<endl;
    cout<<"Enter length of the array: ";
    cin>>len;
    int arr[len];
    cout << "Enter elements: ";
    for(int i=0;i<len;i++){
        cin>>arr[i];
    }
    cout<<"Before sorting: ";
    display(arr,len);
    Insertionsort(arr,len);
    cout<<"After sorting: ";
    display(arr,len);

    return 0;
}
