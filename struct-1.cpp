#include <iostream>
using namespace std;

const int SIZE = 2;  

struct part
{  
    int   modelnumber;              
    float cost;
    char modelename[20];                   
};  

int main()
{  
    int n;  
    part a[SIZE];   
    
    for(n = 0; n < SIZE; n++)
    {  
        cout << endl;  
        cout << "Enter model name: "<<endl;  
        cin.get(a[n].modelename, 20);  
        cin.ignore(); 
        cout << "Enter model number: "<<endl;  
        cin >> a[n].modelnumber;
        
        cout << "Enter cost: "<<endl;  
        cin >> a[n].cost;       
        cin.ignore(); 
    }  
     
    for(n = 0; n < SIZE; n++) 
    {  
        cout << "\tModel name: \t"  << a[n].modelename << "\t Model number: "  << a[n].modelnumber << " \t Cost: "  << a[n].cost << "$" << endl; 
    }  
     
    return 0;
}