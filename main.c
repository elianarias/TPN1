    /* Calculadora en C*/

#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
#include "Trabajo practico n1.h"

/*Definici�n de funciones*/

int menu();
void leeNumero(int *a,int *b);
int suma(int a, int b);
int resta(int a, int b);
void multiplicacion(int a, int b, float*resultado);
float division(int a, int b);
long int factorial(int a);



/*Funci�n principal*/
/**\brief muestra un men� donde solicita dos nros
  *\param determinan los nros que se van a utilizar en la operaci�n
  *\return retorna el resultado de una operaci�n
  */
int main(void){
    /*Definici�n de variables*/
    float resultado,d;
    int men,s,r,a,b,f;
    men=menu(); //Asigno la opci�n que devuelve el men� a men

    /*La variable men que almacena el valor que devuelve la funci�n men�
      se usa para elegir la constante que determinar� el caso que elige el
      switch. Se a�ade de nuevo la asignaci�n dentro de cada caso del switch
      para que no termine el programa hasta que no se elija la opci�n salir,
      lo cual rompe la condici�n del while y sale del bucle*/
    while(men!=0){
        switch(men){
            case 1 :{
                leeNumero(&a,&b); //Funcion que lee los numeros
                s=suma(a,b);
                printf("%d+%d=%d\n\n",a,b,s);
                men=menu();
            }
            break;
            case 2 :{
                leeNumero(&a,&b);
                r=resta(a,b);
                printf("%d-%d=%d\n",a,b,r);
                men=menu();
            }
            break;
            case 3 :{
                leeNumero(&a,&b);
                multiplicacion(a,b,&resultado);
                printf("%d*%d=%f\n",a,b,resultado);
                men=menu();
            }
            break;
            case 4 :{
                leeNumero(&a,&b);
                d=division(a,b);
                if(b<=0){
                    printf("ERROR!");
                }
                else{
                printf("%d:%d=%f\n",a,b,d);
                men=menu();
            }}
            break;
            case 5:{
                printf("Ingrese un valor:\n");
                scanf("%d",&a);
                f=factorial(a);
                printf("%d!=%d\n",a,f);
                men=menu();
            }
            case 6:{
                leeNumero(&a,&b);
                s=suma(a,b);
                printf("suma %d+%d=%d\n",a,b,s);
                r=resta(a,b);
                printf("resta %d-%d=%d\n",a,b,r);
                multiplicacion(a,b,&resultado);
                printf("multiplicacion %d*%d=%f\n",a,b,resultado);
                d=division(a,b);
                printf("division %d:%d=%f\n",a,b,d);
                printf("Ingrese un valor:\n");
                scanf("%d",&a);
                f=factorial(a);
                printf("%d!=%d\n",a,f);
                men=menu();

            }

          default :
                printf("Opcion incorrecta\n");
                men=menu();
        }
    }

    printf("Hasta luego!\n");
    system("PAUSE");
}
