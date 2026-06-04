
#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter nof element\n";
    cin>>n;
    int arr[n];
    for (int i = 0; i < n; ++i)
    {
        int x;
        cout<<"\n element at index "<<i;
        cin>>x;
        arr[i]=x;

    }
    int temp[n];
    int i=0;
    for (int j = 0; j < n; ++j) {
        if(arr[j]==0){
            temp[i]=arr[j];
            i++;
        }
        else{
            arr[j-i]=arr[j];

        }


    }
    cout<<" number of Zero in the  array "<<i;
    int k=n-i;
    for (int j = 0; j < i; ++j) {
        arr[k]=temp[j];
        k++;

    }
    cout<<" \nfinal array\n";
    for (int j = 0; j < n; ++j) {
   cout<< " \n" <<arr[j];
    }


}