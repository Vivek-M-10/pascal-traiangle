#include<iostream>
using namespace std;

void pascal(int n)
{
    int a[n][n];
    for(int line=0;line<n;line++)
    {
        for(int col =0;col<=line;col++)
        {
            if(line == col || col ==0)
            {
                a[line][col] = 1;

            }
            else{

                a[line][col] = a[line-1][col-1] + a[line-1][col];
                
            }
            cout<<a[line][col]<<" ";
        }
        cout<<'\n';
    }
}

int main()
{
    
    int n;
    cout<<"Enter your Number ";
    cin>>n;
    pascal(n);
    return 0;
}
    

            
    