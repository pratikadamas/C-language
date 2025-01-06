
#include <bits/stdc++.h>
 using namespace std;
 void fun(int l, int arr[],int n){
    if(l>=n/2)
        return;

    swap(arr[l],arr[n-l-1]);
    fun(l+1,arr,n);

}
int main(){
    int n;
    cout<<"size of the array : ";
    cin>>n;
    int arr[n];
    cout<<"Insert mElement:\n";
    for (int i=0;i<n;i++) {
       cout<<" Element at index : "<<i<<" :- ";
       int x;
       cin>>x;
       arr[i]=x;
    }

    cout<<"Display the array----\n";
    cout<<"[ ";
    for (int i=0;i<n;i++) {
        cout<<arr[i]<<" ";

    }
    cout<<" ]";
int l;
cout<<"Enter index : \n";
cin>>l;
    fun(l,arr,n);
    cout<<"After revese :\n";


    cout<<"[ ";
    for (int i=0;i<n;i++) {
        cout<<arr[i]<<" ";

    }
    cout<<"]";

    return 0;

}

