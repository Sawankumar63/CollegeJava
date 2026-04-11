#include<iostream>
using namespace std;
int main(){
    int n ,num=1; 
    cout<<"Enter the number :";
    cin>>n;
     
    //1st method

    // for(int i=0;i<n;i++){
    //     for(int j=0;j<=i;j++)
    //     {
    //         cout<<num<<" ";
    //     }
    //     num++;
    //     cout<<endl;
    // }

    
    //2nd method

    for(int i=0;i<n;i++)
    {
        for(int j=0; j<=i;j++)
        {
            cout<<i+1;
        }
        cout<<endl;
    }

   return 0;
}