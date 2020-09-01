#ifndef ex_h
#define ex_h

#include <iostream>
#include <vector>
#include <stdlib.h>

using namespace std;

template<typename T>
class Busqueda
{
    public:

    Busqueda(){};
    ~Busqueda(){};

    int Busquedasec(vector<T> a,int b);
    int Busquedabinaria(vector<T> a,int primero, int ultimo,int N);
    int Busquedaor1(vector<T> a,int n);
    int Busquedaor2(vector<T> a, int n); 
};

template<typename T>
int Busqueda<T>::Busquedasec(vector<T>a, int b)
{
    for(size_t i=0;i<a.size();i++){
        if(a.at(i)==b)
        {
            return i;
        }
    }
    return -1;
};

template<typename T>
int Busqueda<T>::Busquedabinaria(vector<T> a,int primero,int ultimo,int N)
{
    int medio=(primero+ultimo)/2;
    int indice=0;

    if(ultimo<primero) //No encontrado
    {
        indice=-1;
        return indice;
    }

    else
    {
        if(N==a[medio])
        {
            indice=medio;
            return indice;
        }

        else if (N<a[medio])
        {

            indice=Busquedabinaria(a,primero,medio-1,N);
            return indice;
            
        }

        else
        {
            indice=Busquedabinaria(a,medio+1,ultimo,N);
            return indice;
            
        }
    }
      
}
template<typename T>
int Busqueda<T>::Busquedaor1(vector<T> a, int n)
{
    for(size_t i=0;i<a.size();i++)
    {
        if(a.at(i)==n)
        {
            return i;
        }
    }
    return -1;
};


#endif



