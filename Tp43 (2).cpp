#include <iostream>
#include <string>
using namespace std;
string ObtenerDDD(int codigo_area);
int main() {
    int cod;
    cout << "Ingrese el numero de codigo de area: ";
    cin >> cod;
    cout<<ObtenerDDD(cod)<<endl;
    return 0;
}
string ObtenerDDD(int codigo_area){
  string cartel="DDD NO ENCONTRADO";
    if (codigo_area == 61) {
        cartel="Brasilia";
    } 
    
    if (codigo_area == 71) {
      cartel="Salvador";
    }
    
     if (codigo_area == 11) {
      cartel="Sao Paulo";
    }
    
     if (codigo_area == 21) {
        cartel="Rio de Janeiro";
    }
   
     if (codigo_area == 32) {
        cartel="Juiz de Fora";
    }
   
     if (codigo_area == 19) {
       cartel="Campinas";
    }
  
     if (codigo_area == 27) {
        cartel="Vitoria";
    }
  
     if (codigo_area == 31) {
      cartel="Belo Horizonte";
    } 
    
    return cartel;

}
