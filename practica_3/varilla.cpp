#include <iostream>
using namespace std;

int cortesV(int[],int);

int main(){
  int valor[] = {1,5,8,9,10};
  int n = sizeof(valor) / sizeof(valor[0]);  
  
  int cor;
  cout<<"Ingresa el tamanio de la varilla a cortar: ";
  cin>>cor;
  cout<<endl<<"El tamanio de varilla a cortar es: "<< cor<<endl;
  cout<<endl<<"El mejor costo es: " << cortesV(valor, n)<<endl;
  return 0;
}



int cortesV(int valor[],int n){
  if(n == 0){
    return 0; //caso base
  }
  int max = 0;
  for (int i = 1; i <= n; i++){
    int cost = valor [i -1 ] + cortesV(valor, n - i );
    if(cost > max){
      max = cost;
    }
  }
  return max;
}
