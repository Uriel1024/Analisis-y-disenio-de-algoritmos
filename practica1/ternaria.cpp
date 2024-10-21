/* Búsqueda ternaria.
Dado un arreglo ordenado de números de tamaño n y un número x, busca el elemento x en el
arreglo. Para la búsqueda divide el arreglo en 3 partes y como en búsqueda binaria, identifica
en cual de las 3 partes del arreglo seguirás haciendo la búsqueda, descartando así 2/3 del
espacio de búsqueda.*/

#include <iostream>
using namespace std;

int busqueda_ternaria(int[], int, int ,int);


int main(){
  int  array [] = {1,2,3,4,5,6,7,8,9,10};
  int target;
  cout<<"Ingresa el numero a buscar entre 1-10."<<endl;
  cin>>target;
  int f = (sizeof(array) / sizeof(array[0]));
  int pos = busqueda_ternaria(array, target, 0, f);

  if(pos != -1){
    cout<<"La posicion de "<<target <<" en el arreglo es: "<< pos<<endl;
  }else{
    cout<<target<<"\t no se encuentra en el arreglo."<<endl;
  }
  
   return 0;
 }

int busqueda_ternaria(int array[], int target, int i ,int f){
  if(i <= f){
    int t1 = i + ((f - i) * 1/3);
    int t2 = i + ((f - i) * 2/3);
    if(array[t1] == target) return t1;
    if(array[t2] == target) return t2;
    
    if(target < array[t1]){
      return busqueda_ternaria(array, target, i, t2 - 1);
    }
    else if(target > array[t2]){
      return busqueda_ternaria(array,target, t1 + 1,f);
    }else{
      return  busqueda_ternaria(array, target, i + 1, f - 1);
    } 
  }
  return -1; 
}
