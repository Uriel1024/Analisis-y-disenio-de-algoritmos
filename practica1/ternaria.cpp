/* Búsqueda ternaria.
Dado un arreglo ordenado de números de tamaño n y un número x, busca el elemento x en el
arreglo. Para la búsqueda divide el arreglo en 3 partes y como en búsqueda binaria, identifica
en cual de las 3 partes del arreglo seguirás haciendo la búsqueda, descartando así 2/3 del
espacio de búsqueda.*/

#include <iostream>
using namespace std;
#include <cmath>

int busqueda_ternaria(int[], int, int ,int);


int main(){
  int  array [] = {1,2,3,4,5,6,7,8,9,10};
  int target = 8;
  
  int f = (sizeof(array) / sizeof(array[0])) -1 ;
  int pos = busqueda_ternaria(array, target, 0 , f);

  cout<<"La posicion de "<<target <<" en el arreglo es: "<< pos<<endl;

  return 0;
}

int busqueda_ternaria(int array[], int target, int i ,int f){
  int pos = -1;
  if(i <= f){
    int tam = f - i;
    int t1 = i +  floor(tam / 3);
    int t2 = t1  * 2;
    if(array[t1] == target) return t1;
    if(array[t2] == target) return t2;
    
    if(target < array[t1]){
      pos =  busqueda_ternaria(array, target, i, t1);
    }
    if(target > array[t2]){
      pos =  busqueda_ternaria(array,target, t2,f);
    }
  }
  return pos; 
}
