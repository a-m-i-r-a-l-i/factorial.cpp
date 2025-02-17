#include <iostream>
using namespace std;

void moratab( int x[],int n);

int main()
{
    int a[5] , b[8] , c[13] ;
    int i = 0, j = 0, k = 0;
    int acount = 5, bcount = 8;


    for ( i = 0; i <acount ; i++)
    {
        cout<<"Enter the num (a)"<<i+1<<":"<<endl;
        cin>>a[i];
    }

    moratab(a, acount);

    for ( j = 0; j < bcount; j++)
    {
        cout<<"Enter the num (b) "<<j+1<<":"<<endl;
        cin>>b[j];
    }
    
    moratab(b,bcount);

    int h=0,l=0;                                    

    while (h < acount && l < bcount)
    {
        if (a[h]<b[l])
        {
            c[k++]=a[h++];
            
        }
        else
        {
            c[k++]=b[l++];
            
        }
        while (h < acount) {
            c[k++] = a[h++];
        }
    
        
        while (l < bcount) {
            c[k++] = b[l++];
        }
    }  
        k=0;
    for ( k = 0; k < 13; k++)
    {
        cout<<"\t"<<c[k];
    }
    return 0;
}
    
//*************************** */

void moratab(int x[],int n)
{
    int temp=0;
    for ( int k  = 0; k <n; k++)
    {
        for ( int j = 0; j <n-1; j++)
        {
            if (x[j]>x[j+1])
            {
                temp = x[j];
                x[j] = x[j+1];
                x[j+1] = temp;
            }
        } 
    }
}
