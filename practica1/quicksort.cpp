#include <iostream>
using namespace std;

void quicksort(int[], int , int);
int partition(int[], int, int);

int main(){
  int array[] = {5,7,2,11,6,12,17,10,5,6,1};
  int n = sizeof(array) / sizeof(array[0]);
  for (int i = 0 ; i < n ; i++){
    cout<<array[i]<< '\t';
  } 
  cout<<endl<<endl;

  quicksort(array, 0, n-1);

  cout<<"Arreglo ordenado"<<endl; 
  for(int i = 0; i < n; i ++){
    cout<<array[i]<<"\t";
  }
  cout<<endl;
  return 0;
}

void quicksort(int array[], int ini, int n){
  if(ini < n){
    int piv =  partition(array, ini, n);
    quicksort(array, ini,  piv -1);
    quicksort(array, piv + 1, n);
  } 
}

int partition(int array[], int ini, int n){
  int piv = array[n];
  int it = (ini - 1);
  for(int j = ini; j <= n - 1; j++){
    if(array[j] <= piv){
      it++;
      swap(array[it], array[j]);
    }
  }
  swap(array[it + 1], array[n]);
  return it + 1; 
}

