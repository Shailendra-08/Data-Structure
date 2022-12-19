#include <bits/stdc++.h>
using namespace std;

class smallest{

    public:

    int kthSmallest(int arr[], int N, int k) {
        
         sort(arr,arr+N);
         
         return arr[k-1];

    }

};
 
int main()
{

    smallest s;
    int k;
    int arr[] = { 7,10, 4, 20, 15 };

    cout<<"Enter the value of kth element-->\n";
    cin>>k;

    int N=sizeof(arr)/sizeof(arr[0]);

     cout<<s.kthSmallest(arr,N,k);

 
    return 0;
}