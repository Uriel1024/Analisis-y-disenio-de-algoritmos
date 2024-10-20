/* Búsqueda ternaria.
Dado un arreglo ordenado de números de tamaño n y un número x, busca el elemento x en el
arreglo. Para la búsqueda divide el arreglo en 3 partes y como en búsqueda binaria, identifica
en cual de las 3 partes del arreglo seguirás haciendo la búsqueda, descartando así 2/3 del
espacio de búsqueda.
En este programa el usuario define el arreglo y el elemento a buscar
*/

#include <iostream>
using namespace std;
#include <cmath>

int busqueda_ternaria(int[], int, int ,int);


int main(){
  cout<<"Ingresa el tamnio de la lista: ";
  int f;
  cin>>f;
  int array[f];
  cout<<"Ingresa los elementos de manera ascendente"<<endl;
  for(int i = 0 ; i < f; i++){
    cout<<"Ingresa el elemento "<<i<<':';
    cin>>array[i];
  }
  int target;
  cout<<endl<<"Ingresa el numero a buscar: ";
  cin>>target;
  int pos = busqueda_ternaria(array, target, 0 , f - 1 );

  cout<<endl<<"La posicion de "<<target <<" en el arreglo es: "<< pos<<endl;

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
