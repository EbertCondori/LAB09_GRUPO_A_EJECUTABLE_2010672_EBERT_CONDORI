
/*
//EJERCICIO 1

#include <iostream>
using namespace std;

template <class T, class X ,class Y>
float GetMax (T a, X b, Y c) {
	double result;
	
	if(a>b && a>c){
		result=a;
	}
	else if(b>a && b>c){
		result=b;
	}
	else if(c>a && c>b){
		result=c;
	}
	return (result);
}

int main () {
	
	int i=54;
	long l=19;
	double k=154.3,n;

	n=GetMax(i,l,k);
	cout << n << endl;
	return 0;
}
*/


/*
//EJERCICIO 2

#include <iostream>
using namespace std;

template <class T, class D>

void suma(T a, D b){
	D result1,result2,result3,result4;
	result1 = a+b;
	result2 = a-b;
	result3 = a*b;
	result4 = a/b;

	cout<<"Suma es "<<a<<" + "<<b<<"           : "<<result1<<endl;
	cout<<"Resta es "<<a<<" - "<<b<<"          : "<<result2<<endl;
	cout<<"Multiplicacion es "<<a<<" * "<<b<<" : "<<result3<<endl;
	cout<<"Divicion es "<<a<<" / "<<b<<"       : "<<result4<<endl;
}

	
int main(){
	
	int a=4;
	float b=2.5,c;
	
	suma(a,b);
	
	return 0;
}
*/


/*
//EJERCICIO 3
#include <iostream>
using namespace std;

template <class T , class D>

class correo{
private:
	T charr;
	D stringg;
public:
	correo(T,D);
	void mostrar();
};

template <class T , class D>
correo<T,D>::correo(T charr,D stringg){
	this->charr = charr;
	this->stringg = stringg;

}

template <class T , class D>
void correo<T,D>::mostrar(){
	cout<<charr<<stringg<<"@unsa.edu.pe"<<endl;
}

int main(){
	
	correo<char,string>correo1('e',"condori");
	correo1.mostrar();
	correo<char,string>correo2('h',"casquino");
	correo2.mostrar();
	correo<char,string>correo3('a',"fura");
	correo3.mostrar();
	correo<char,string>correo4('g',"alvares");
	correo4.mostrar();
	correo<char,string>correo5('p',"torres");
	correo5.mostrar();
	
	
	return 0;
}
*/


/*

//EJERCICIO 4
#include <iostream>
using namespace std;
template <class T>
void Imprimir(T a[]){
	for(int i=0;i<5;i++){
		cout<<a[i]<<" ";
	}
	cout<<endl;
}

template <class T>
void Mayor(T a[]){
	T max=0;
	for(int i=0;i<5;i++){
		if(a[i]>max){
			max=a[i];
		}
	}
	cout<<"Mayor numero del array es : "<<max<<endl;
}
template <class T>
void Menor(T a[]){
	T min=20;
	for(int i=0;i<5;i++){
		if(a[i]<min){
			min=a[i];
		}
	}
	cout<<"Menor numero del array es : "<<min<<endl;
}


int main(){
	int ArrayEntero [5] = {10,7,2, 8, 6};
	Imprimir(ArrayEntero);
	Mayor(ArrayEntero);
	Menor(ArrayEntero);
	cout<<endl;
	float ArrayFloat [5] = {12.1, 8.7, 5.6, 8.4, 1.2};
	Imprimir(ArrayFloat);
	Mayor(ArrayFloat);
	Menor(ArrayFloat);
	
	return 0;
}
*/




/*

//EJERCICIO 5
#include <iostream>
using namespace std;
template <class T>

void Imprimir(T a[],int n){
	for(int i=0;i<n;i++){
		cout<<a[i]<<" ";
	}
}

template <class T>
void ascendente(T a[],int n){
	int aux1,aux2;
	
	for(int i=0;i<n;i++){
		aux1=a[i];
		aux2=i;
		while((aux2>0) && (a[aux2-1]>aux1)){
			a[aux2]=a[aux2-1];
			aux2=aux2-1;
		}
		a[aux2]=aux1;
		
	}
}
template <class T>
void descendente(T a[], int n){
	int aux1,aux2;
	for(int i=0;i<n;i++){
		aux1=a[i];
		aux2=i;
		while((aux2>0)&& (a[aux2-1]<aux1)){
			a[aux2]=a[aux2-1];
			aux2=aux2-1;
		}
		a[aux2]=aux1;
		
	}
}

int main(){
	int ArrayEntero []= {5,7,2,8,6,1,3,4,9};
	Imprimir(ArrayEntero,9);
	
	ascendente(ArrayEntero,9);
	cout<<endl;
	cout<<"Ascendente : "<<endl;
	Imprimir(ArrayEntero,9);
	descendente(ArrayEntero,9);
	cout<<endl;
	cout<<"Descendente : "<<endl;
	Imprimir(ArrayEntero,9);
	
	cout<<endl<<endl<<endl;
	float ArrayFloat [] = {10.1, 8.4, 3.6, 4.4, 11.2};
	Imprimir(ArrayFloat,5);
	ascendente(ArrayFloat,5);
	cout<<endl;
	cout<<"Ascendente : "<<endl;
	Imprimir(ArrayFloat,5);
	descendente(ArrayFloat,5);
	cout<<endl;
	cout<<"Descendente : "<<endl;
	Imprimir(ArrayFloat,5);
	
	return 0;
}

*/

