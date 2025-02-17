#include <iostream>
using namespace std;

struct rectangle 
{
    int length, width, area, perimeter;
}f;

void rectangleArea(rectangle &f) 
{
    f.area = f.length * f.width;       
    f.perimeter = 2 * (f.length + f.width); 

    for (int i = 0; i < f.width ; i++)
    {
        cout<<"*\t";
    }

    for (int i = 0; i < f.length; i++)
    {
        cout<<"\n*";
        for (int j = 0; j < f.width-1; j++) 
        {
            cout<<"\t";
        }
        cout<<"*"<<endl;
    }

    for (int n = 0; n < f.width ; n++)
    {
        cout<<"*\t";
    }     
}

int main() {
     

    cout << "Enter the length :";
    cin >> f.length;
    cout << "Enter the width : ";
    cin >> f.width;

    rectangleArea(f);

    cout << "\n Area: " << f.area << endl;
    cout << "\n Perimeter: " << f.perimeter << endl;

    return 0;
}