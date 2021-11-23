#include <iostream>  
 
using namespace std;
 
int main()
{
    int arr[10];
    int n,i;
    cout<<"enter number of elements";
    cin>>n;
 for(int i=0; i<n; i++)
 {cin>>arr[i];}
 int key;
 cout<<"enter number to search";
 cin>>key;
 for(i=0; i<n; i++)
 {
     if(key==arr[i])
     {
         cout<<"found at index"<<i<<endl;
         break;
     }
     }if(i==n)
 {
     cout<<"not found"<<endl;
 }
  
 return 0;
}