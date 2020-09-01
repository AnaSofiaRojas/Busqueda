#include <iostream>
#include<stdlib.h>
#include<time.h>
#include <vector>
#include "ex.h"
using namespace std;

template<typename T>
void ImprimmirVector(vector<T> a,int n)
{
    for(size_t i=0; i<a.size() && i<n; i++)
    {
        cout<<a[i]<<", ";
    }
    cout<<endl;
}

int main()
{
    srand((unsigned)time(0));
    vector<int> array;
    int count=100000;
    for(size_t i=0; i<count; i++)
    {
        array.push_back((int)rand()%100+1);
    }

    cout<<"El vector es: "<<endl;
    ImprimmirVector(array,count);

    int n;
    cout<<"Numero a buscar: "<<endl;
    cin>>n;


    Busqueda<int> b;
    cout<<"Posicion: "<<b.Busquedasec(array,count)<<endl;
    cout<<"Posicion: "<<b.Busquedabinaria(array,0,count,n)<<endl;
    cout<<"Posicion: "<<b.Busquedaor1(array,count)<<endl;

    return 0;

}






    

