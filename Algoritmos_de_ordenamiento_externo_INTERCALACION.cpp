//Programa que efectua la acción de los metodos de ordenamiento externos por intercalación en C++

//______________Librerias______________________
	#include<iostream>//Libreria estandar
	#include<vector>//Libreria para utilizar variables tipo vector
	#include<algorithm>//Libreria para ordeanamiento de datos
	#include<iterator>//Libreria para hacer uso de iteradores
//_____________________________________________	

//_______________________________Función principal____________________________________________
using namespace std;int main(){
 vector<unsigned> data;//Se crea un vector donde almacenar los datos
 for(unsigned i = 0; i < 11; i++)//Arroja numeros del 0 a 10
 data.push_back(i);//Guarda los datos en la variable i
 random_shuffle(data.begin(), data.end());//Orderna los números de manera aleatoria
 cout<<"\n\n\n\n\n\t\t\t\t\tDatos desordenados: ";
 copy(data.begin(),data.end(),ostream_iterator<unsigned>(cout," "));//Imprime los numeros desordenados
 cout<<endl;
 
 for(unsigned m = 1; m <= data.size(); m *= 2)//Se van ordenando todos los datos de menor a mayor
 {
 for(unsigned i = 0; i < data.size() - m; i += m * 2)
 {
 inplace_merge(
 data.begin() + i,
 data.begin() + i + m,
 data.begin() + min<unsigned>(i + m * 2, static_cast<unsigned>(data.size())));}}//Se guardan los dsatos ordenados
 cout<<"\n\n\t\t\t\t\tDatos ordenados: ";
 copy(data.begin(),data.end(),ostream_iterator<unsigned>(cout," "));//imprime los datos ordenados
 cout << endl;
 return 0;}
//______________________________________________________________________________________________
