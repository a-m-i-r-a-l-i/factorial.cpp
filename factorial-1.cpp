#include <iostream>
#include <conio.h>
#include <string.h>
#include <cstring>
#include <cstdlib>
using namespace std;
int Mfactorial(int n);
int main()
{
 int num;
 cout<<"Enter the number: ";

 cin>>num;
if (num<0)
{
    cout<<"numer nadrost"<<endl;
}
 else{
 cout<<"Factorial of "<<num<<" is :"<<Mfactorial(num);

 return 0;
 }
}

int Mfactorial(int n)

{

 if(n==0||n==1)

 return 1;

 else

 return n*Mfactorial(n-1);

}

