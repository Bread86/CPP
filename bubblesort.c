#include<iostream>
using namespace std;
void BubbleSort(int arr[],int n){
    for (int i=0;i<n-1;i++){
        for(int j=0;j<n-1-i;j++){
            if(arr[j]>arr[j+1]) swap(arr[j],arr[j+1]);
        }
}
}
int main(){
int arr[]={4,6,2,8,0,7,3,1,9,5};
int n=10;

BubbleSort(arr,n);
for (int i=0;i<n;i++)
    cout<<arr[i]<<" ";
cout<<endl;

}

