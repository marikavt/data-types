/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>

using namespace std;

int main()
{
    char symbol = 'T';
    cout<<symbol<<endl;
    
    int numb=100;
    cout<<numb<<endl;
    
    float numb2=10.10;
    cout<<numb2<<endl;
    
    double numb3=50.23;
    cout<<numb3<<endl;
    
    int array [5] = {5, 10, 15, 20, 30};
    int sum = array[0]+array[1]+array[2]+array[3]+array[4];
    int average = (array[0]+array[1]+array[2]+array[3]+array[4])/5;
    cout<<sum<<endl;
    cout<<average<<endl;

    return 0;
}