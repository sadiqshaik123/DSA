#include <iostream>
#include<vector>

using namespace std;

void display(int arr[],int n){
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}
void bubblesort(int arr[],int n){
    for(int i=0;i<n-1;i++){
            for(int j=0;j<n-i-1;j++){
                if(arr[j]>arr[j+1]){
                    swap(arr[j],arr[j+1]);
                }
            }

    }
}

int main()
{
    int len;
    cout<<"[Bubble Sort]"<<endl;
    cout<<"Enter length of the array: ";
    cin>>len;
    int arr[len];
    cout << "Enter elements: ";
    for(int i=0;i<len;i++){
        cin>>arr[i];
    }
    cout<<"Before sorting: ";
    display(arr,len);
    bubblesort(arr,len);
    cout<<"After sorting: ";
    display(arr,len);

    return 0;
}
