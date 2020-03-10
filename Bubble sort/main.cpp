#include <iostream>
#include <bits/stdc++.h>
using namespace std;
// by Kwame Agyenim Boateng
// 10679301

void BubbleSort (int arr[], int n){
int a,b,c;
   for(a=0;a<n-1;a++){
        for(b=0;b<n-a-1;b++){
            if(arr[b] > arr[b+1]){ //compares each element adjacent to each other
                c = arr[b]; //does the swapping
                arr[b] = arr[b+1];
                arr[b+1] = c;
            }
        }
   }

}
void PrintArray(int arr[],int arrSize){
    for(int i=0;i<arrSize;i++){
        cout << arr[i] << " ";

    }
}
int main(void)
{
   int arr[] = {53,54,65,23,83,28,73,48};
   int n = sizeof(arr)/sizeof(arr[0]);
   cout <<"Unsorted array is: ";
    for(int x=0;x<n;x++){
        cout << arr[x] << " ";
    }
    BubbleSort(arr,n);
    cout << "\nSorted array is: ";
    PrintArray(arr,n);
    return 0;
}

