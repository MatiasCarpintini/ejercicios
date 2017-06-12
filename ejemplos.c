//pares
#include <stdio.h>
#include <conio.h>
void main(){
 clrscr();
 int _cont;
 while(_cont<=100){
    if(_cont%2==0){
      printf("%d, ",_cont);
     }
   _cont++;
  }
 getch();
}
//impares e imprimir la cantidad de impares
#include <stdio.h>
#include <conio.h>
void main(){
 clrscr();
 int _cont;
 int _cant = 0;
 while(_cont<=100){
    if(_cont%2==0){
      printf("%d, ",_cont);
     }
   _cont++;
  }
  printf("%d, Hay ", _cont, " Impares");
 getch();
}
//imprimir del 1 al 100
#include <iostream>
#include <conio.h>
using namespace std;

int main(){
	for (int x = 1; x <= 100; x++)
	{
		cout << x << "\t";
	}
	_getch();
}
//suma de 2 números 
#include <stdio.h> 
#include <conio.h> 
void main() 
{ 
	int n1,n2; 
	printf ("Primer numero: "); 
	scanf ("%d",&n1); 
	printf ("Segundo numero: "); 
	scanf ("%d",&n2); 
	printf ("La suma es: %d",n1+n2); 
	getch (); 
}
//raiz cuadrada
#include <math.h>
int main(){
    int n;
    printf("Numero: \n");
    scanf("%i",&n);
    n = sqrt(n);
    printf("Raiz cuadrada: %i\n",n);
system("pause");
}
//promedio
#include <stdio.h>
#include <stdlib.h>
int main(){
	float a, b, c, d, e;
	printf("dame los numeros");
	scanf("%f", &a);
	scanf("%f", &b);
	scanf("%f", &c);
	d=c+a+b;
	e=d/3;
	printf("el resultado es %f\n", e);
	system("pause");
}
//código ASCII
#include <iostream>

using namespace std;


int main(void){

int i;

cout << "T" << char(160) << "bla de los numeros ASCII" << endl << endl;
cout << "----------------------------------------------"<< endl << endl;

for (i = 0; i < 257; i++)
{
cout << char(i) << " <---> " << i << endl << endl;
}

return 0;
}
//lee 4 numeros 2 enteros y 2 reales y me de la suma
#include <stdio.h>
#include <stdlib.h>
int main(){
	float a, b, c, d, e, f;
	printf("dame los numeros");
	scanf("%f", &a);
	scanf("%f", &b);
	scanf("%f", &c);
	scanf("%f", &d);
	e=a+b+c+d;
	f=e;
	printf("el resultado es %f\n", f);
	system("pause");
}
//contar palabras
#include <stdio.h>
#include <conio.h>
#include <string.h>
int main(){
	P=0;
	for(x=0;x<500;x++){
	 if(cad[x]==' ')
	  P++;
	}
	printf("\nCantidad de Palabras: %d",P+1);
}