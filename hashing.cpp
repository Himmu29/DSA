#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;                        // size of array
    cin>>n;
    int arr[n];                   // array input 
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    //precompute
    // int hash[13] = {0};
    // for(int i=0;i<n;i++){
    //     hash[arr[i]] += 1;
    // }

    map<int , int>mpp;
    for(int i=0;i<n;i++){
        mpp[arr[i]]++;
    }


    int q;      // no of quesries (how many times the user wants to check the frequency of a specific number)
    cin>>q;
    while(q--){           //For each query, the user inputs a number (e.g., 1, 3, 5) and the program outputs how many times it appears in the original array (using hash[number]
        int number;
        cin>>number;
        //fetch
        cout<<mpp[number]<<endl;
    }
    return 0;
}
