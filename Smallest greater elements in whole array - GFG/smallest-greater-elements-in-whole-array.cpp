// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

int* greaterElement(int arr[], int n);

int main()
{
    int t,n;
    cin>>t;
    while(t--)
    {
        cin>>n;
        int arr[n];
        for(int i=0;i<n;i++)
        {
            cin>>arr[i];
        }
        int *b;
        b = greaterElement(arr, n);
        for(int i=0;i<n;i++){
            if(b[i] == -10000000)
                cout << "_ ";
            else
                cout << b[i] << " ";
        }
        cout<<endl;   
        
    }
    return 0;
}
// } Driver Code Ends


int* greaterElement(int arr[], int n)
{
    // Complete the function

    set<int> s;
    for(int i=0;i<n;i++)
        s.insert(arr[i]);
     for(int i=0;i<n;i++){
        auto it=s.find(arr[i]);
        it++;
        if(it==s.end())
            arr[i]=-10000000;
        else
            arr[i]=*it;
     }
     
    return arr;
}

    // vector<int> a;
    // for(int i=0;i<n;i++)
    //     a.push_back(arr[i]);
    // sort(a.begin(), a.end());
    
    // for(int i=0;i<n;i++){

    //     auto it=upper_bound(a.begin(),a.end(), arr[i]);
    //     if(it==a.end())
    //         arr[i]=-10000000;
    //     else
    //         arr[i]=a[it-a.begin()];
    // }
