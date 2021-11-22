#ifndef TRABAJO_PRACTICO_N1_H_INCLUDED
#define TRABAJO_PRACTICO_N1_H_INCLUDED

/*Funci�n men�*/
/**\brief presenta un men� de opciones
  *\param se ingresa la opci�n indicada
  *\return escanea la opcion y realiza la operaci�n indicada.
  */
int menu(){
    int opcion;
    system("color B1");
    printf( "1.Suma\n"
            "2.Resta\n"
            "3.Multiplicacion\n"
            "4.Division\n"
            "5.Factorial\n"
            "6.Todas las operaciones \n"
            "0.Salir\n"
            "Ingrese una opcion:\n");

    scanf("%d",&opcion);
     system("cls");
    return(opcion);
}
/*Funci�n que lee los valores con las que se va a operar*/
/**\brief lee los valores que se ingresan
  *\param valores ingresados
  *\return retorna los valores escaneado
  */
void leeNumero(int *a,int *b){
    printf("Ingrese un valor:\n");
    /*No se necesita & porque a es una direcci�n de memoria
     *(*a) que es lo que yo le daba con el ampersan*/
    scanf("%d",a);
    printf("Ingrese otro valor:\n");
    scanf("%d",b);
}


/*Funci�n suma*/
/**\brief resuelve una suma
  *\param valores ingresados por el usuario
  *\return resultado de la suma
  */
int suma(int a, int b){
    int suma;
    suma=a+b;
    return(suma);

}
/*Funci�n resta*/
/**\brief resuelve una resta
  *\param valores ingresados por el usuario
  *\return resultado de la resta
  */
int resta(int a, int b){
    int resta;
    resta=a-b;
    return(resta);
}
/*Funci�n multiplicaci�n*/
/**\brief resuelve una multiplicaci�n
  *\param valores ingresados por el usuario
  *\return resultado de la multiplicaci�n
  */
void multiplicacion(int a, int b, float *resultado){
    *resultado=a*b;
}
/*Funci�n divisi�n*/
/**\brief resuelve una divisi�n
  *\param valores ingresados por el usuario
  *\return resultado de la divisi�n
  */
float division(int a, int b){

    float division;
    division=(float)a/b;
    return(division);
}

//funcion factorial/
/**\brief resuelve un factorial
  *\param valores ingresados por el usuario
  *\return devuelve el factorial
  */
long int factorial(int a){
    int resultado;
    if(a==1){
        return(1);
    }
    resultado=a*factorial(a-1);
    return(resultado);

}

#endif // TRABAJO_PRACTICO_N1_H_INCLUDED
