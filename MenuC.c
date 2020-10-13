#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define MAX 20


void funcionNivel1(void);
void funcionNivel2(void);
void funcionNivel3(void);

void Ejercicio1(void);
void Ejercicio2(void);
void Ejercicio3(void);
void Ejercicio4(void);
void Ejercicio5(void);
void Ejercicio6(void);
void Ejercicio7(void);
void Ejercicio8(void);
void Ejercicio9(void);


int MCD(int x, int y);


int main(void)
{
	
char dato='S';	
do
	{
	
	printf("\n"
	"\t\t\t#######################################################\n"
	"\t\t\t▓ #                                             # ▓\n"
	"\t\t\t▓ #               Ejercicio Menu                # ▓\n"
	"\t\t\t▓ #       'Introduccion a la programacion'      # ▓\n"
	"\t\t\t▓ #               Diego Cariola                 # ▓\n"
	"\t\t\t▓ #             'UTN - 2020 cat 130'            # ▓\n"
	"\t\t\t▓ #                                             # ▓\n"
	"\t\t\t#######################################################\n"
	"\t\t\t##                                                   ##\n"
	"\t\t\t##     Menu                                          ##\n"
	"\t\t\t##                                                   ##\n"
	"\t\t\t##     1) Nivel 1                             	     ##\n"
	"\t\t\t##                                                   ##\n"
	"\t\t\t##     2) Nivel 2                                    ##\n"
	"\t\t\t##                                                   ##\n"
	"\t\t\t##     3) Nivel 3                                    ##\n"
	"\t\t\t##                                                   ##\n"
	"\t\t\t##     0) Salir                                      ##\n"
	"\t\t\t##                                                   ##\n"
	"\t\t\t#######################################################\n");
	dato = getchar();
	fflush (stdin);
	switch(dato)
	{
			case '1':
				system("color 2");
				funcionNivel1();
				fflush (stdin);
				break;
			case '2':
				system("color 3");
				funcionNivel2();
				fflush (stdin);
				break;
			case '3':
				system("color 4");
				funcionNivel3();
				fflush (stdin);
				break;
			default:
				printf("\nSaliendo....\n");
				break;
			}
	}while (dato!= '0');
}


void funcionNivel1(void)
{	
char dato='S';	
do
	{
	system("cls");	
	printf("\n"
	"\t\t\t#######################################################\n"
	"\t\t\t##                                                   ##\n"
	"\t\t\t##                 Ejercicio Menu                    ##\n"
	"\t\t\t##         'Introduccion a la programacion'          ##\n"
	"\t\t\t##	           Diego Cariola                     ##\n"
	"\t\t\t##               'UTN - 2020 cat 130'                ##\n"
	"\t\t\t##                                                   ##\n"
	"\t\t\t#######################################################\n"
	"\t\t\t##                                                   ##\n"
	"\t\t\t##     Nivel 1                                       ##\n"
	"\t\t\t##                                                   ##\n"
	"\t\t\t##     1) Ejercicio 1                                ##\n"
	"\t\t\t##                                                   ##\n"
	"\t\t\t##     2) Ejercicio 2                                ##\n"
	"\t\t\t##                                                   ##\n"
	"\t\t\t##     3) Ejercicio 3                                ##\n"
	"\t\t\t##                                                   ##\n"
	"\t\t\t##     4) Ejercicio 4                                ##\n"
	"\t\t\t##                                                   ##\n"
	"\t\t\t##     5) Ejercicio 5                                ##\n"
	"\t\t\t##                                                   ##\n"
	"\t\t\t##     0) Salir                                      ##\n"
	"\t\t\t##                                                   ##\n"
	"\t\t\t#######################################################\n");
	dato = getchar();
	fflush (stdin);
		switch(dato)
			{
			case '1':
				system("color 2");
				Ejercicio1();
				fflush (stdin);
				break;
			case '2':
				system("color 3");
				Ejercicio2();
				fflush (stdin);
				break;
			case '3':
				system("color 4");
				Ejercicio3();
				fflush (stdin);
				break;
			case '4':
				system("color 5");
				Ejercicio4();
				fflush (stdin);
				break;
			case '5':
				system("color 6");
				Ejercicio5();
				fflush (stdin);
				break;	
			default:
				printf("\nSaliendo....\n");
				break;
			}
	}while (dato!= '0');
			system("cls");
			fflush (stdin);
}
void funcionNivel2(void)
{	
char dato='S';	
do
	{
		system("cls");	
		printf("\n"
	"\t\t\t#######################################################\n"
	"\t\t\t##                                                   ##\n"
	"\t\t\t##                 Ejercicio Menu                    ##\n"
	"\t\t\t##         'Introduccion a la programacion'          ##\n"
	"\t\t\t##	           Diego Cariola                     ##\n"
	"\t\t\t##               'UTN - 2020 cat 130'                ##\n"
	"\t\t\t##                                                   ##\n"
	"\t\t\t#######################################################\n"
	"\t\t\t##                                                   ##\n"
	"\t\t\t##     Nivel 2                                       ##\n"
	"\t\t\t##                                                   ##\n"
	"\t\t\t##     1) Ejercicio 6                                ##\n"
	"\t\t\t##                                                   ##\n"
	"\t\t\t##     2) Ejercicio 7                                ##\n"
	"\t\t\t##                                                   ##\n"
	"\t\t\t##     0) Salir                                      ##\n"
	"\t\t\t##                                                   ##\n"
	"\t\t\t#######################################################\n");
	dato = getchar();
	fflush (stdin);
		switch(dato)
			{
			case '1':
				system("color 2");
				Ejercicio6();
				fflush (stdin);
				break;
			case '2':
				system("color 3");
				Ejercicio7();
				fflush (stdin);
				break;
			default:
				printf("\nSaliendo....\n");
				break;
			}
	}while (dato!= '0');
			system("cls");
			fflush (stdin);
}
void funcionNivel3(void)
{	
char dato='S';	
do
	{
		system("cls");	
		printf("\n"
	"\t\t\t#######################################################\n"
	"\t\t\t##                                                   ##\n"
	"\t\t\t##                 Ejercicio Menu                    ##\n"
	"\t\t\t##         'Introduccion a la programacion'          ##\n"
	"\t\t\t##	           Diego Cariola                     ##\n"
	"\t\t\t##               'UTN - 2020 cat 130'                ##\n"
	"\t\t\t##                                                   ##\n"
	"\t\t\t#######################################################\n"
	"\t\t\t##                                                   ##\n"
	"\t\t\t##     Nivel 3                                       ##\n"
	"\t\t\t##                                                   ##\n"
	"\t\t\t##     1) Ejercicio 8                                ##\n"
	"\t\t\t##                                                   ##\n"
	"\t\t\t##     2) Ejercicio 9                                ##\n"
	"\t\t\t##                                                   ##\n"
	"\t\t\t##     0) Salir                                      ##\n"
	"\t\t\t##                                                   ##\n"
	"\t\t\t#######################################################\n");
	dato = getchar();
	fflush (stdin);
		switch(dato)
			{
			case '1':
				system("color 4");
				Ejercicio8();
				fflush (stdin);
				break;
			case '2':
				system("color 9");
				Ejercicio9();
				fflush (stdin);
				break;
			default:
				printf("\nSaliendo....\n");
				break;
			}
	}while (dato!= '0');
	system("cls");
	fflush (stdin);
}

void Ejercicio1(void)
{
	system("cls");
	fflush (stdin);
	int array_final[MAX]={15,8,51,74,9,12,35,17,15,23,99,33,62,24,83,21,7,99,15,46};
	int contador=0;
	printf("\n\nPunto 1: \nDado el array con estos valores -> ");
	for (contador = 0; contador < MAX; contador++)
	{
	
	printf("%d ",array_final[contador]);
	}
	printf("\nAverigua si el valor ubicado en [0] se repite y cuantas veces");
	int encontrado=0;
	int datocero=array_final[0];
	int j=0;
	for(j=0;j<MAX;j++)
	{
		if (datocero == array_final[j])
		{
		encontrado=encontrado+1;
		}
	}
	printf("\n\n");
	system("pause");
	printf("\n\n\nEl numero %d se repite %d veces\n",datocero, encontrado); // valor array_final [0]	
	printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n");
	system("pause");
}
void Ejercicio2(void)
{

	system("cls");
	fflush (stdin);
	int i=0;
	int array_final[MAX]={15,8,51,74,9,12,35,17,15,23,99,33,62,24,83,21,7,99,15,46};
	int contador=0;
	printf("\n\nPunto 2: \nDado el array con estos valores -> ");
	for (contador = 0; contador < MAX; contador++)
	{
	
	printf("%d ",array_final[contador]);
	}
	printf("\nAverigua la media y la varianza de los elementos del vector.");
	printf("\n\n");
	int sumaTotalArray=0;
	int promedio=0;
	
	for(i=0;i<MAX;i++)
	{
		sumaTotalArray=sumaTotalArray+array_final[i]; 
		
	}
	promedio=sumaTotalArray/20;
	system("pause");
	printf("\n\n\nLa media de los elementos es %d \n",promedio); // Media
	
	
	///////////////////////////////////////////////////////////////////////////////
	
	int diferenciaIndex=0;
	int diferenciaIndexAcum=0;
	float varianza=0;
	
	for (i=0;i<MAX;i++)
	{
		
		diferenciaIndex=pow((array_final[i]-promedio),2);
		
		diferenciaIndexAcum=diferenciaIndexAcum+diferenciaIndex;
	}
	varianza=diferenciaIndexAcum/20-1;
	printf("\nLa varianza es: %f \n", varianza); //varianza 
	printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n");
	system("pause");
}	
void Ejercicio3(void)
{
	system("cls");
	fflush (stdin);
	int i,j=0;
	int array_final[MAX]={15,8,51,74,9,12,35,17,15,23,99,33,62,24,83,21,7,99,15,46};
	int contador=0;
	printf("\n\nPunto 3: \nDado el array con estos valores -> ");
	for (contador = 0; contador < MAX; contador++)
	{
	
	printf("%d ",array_final[contador]);
	}	
	
	printf("\nGenera uno nuevo ordenando los elementos del vector de mayor a menor valor.");
	printf("\n\n");
	system("pause");
	printf("\n\n\nEl nuevo array es : ");
	int aux=0;
	for(i=0;i<MAX;i++)
	{
		for(j=0;j<MAX-1;j++)
		{
			if(array_final[j]<array_final[j+1])
			{
			aux=array_final[j];
			array_final[j]=array_final[j+1];
			array_final[j+1]=aux;
			}
			
		}	
	}
	for (contador = 0; contador < MAX; contador++)
	{
	printf("%d ",array_final[contador]);
	}	
	printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n");
	system("pause");
	
	
}
void Ejercicio4(void)
{

	system("cls");
	fflush (stdin);
	printf("\n\nPunto 4: \nDado el array con estos valores -> ");	
	int i,j=0;
	int array_final[MAX]={15,8,51,74,9,12,35,17,15,23,99,33,62,24,83,21,7,99,15,46};
	int contador=0;	
	int aux=0;
	for(i=0;i<MAX;i++)
	{
		for(j=0;j<MAX-1;j++)
		{
			if(array_final[j]<array_final[j+1])
			{
			aux=array_final[j];
			array_final[j]=array_final[j+1];
			array_final[j+1]=aux;
			}
			
		}	
	}
	for (contador = 0; contador < MAX; contador++)
	{
	printf("%d ",array_final[contador]);
	}	
	printf("\nGenera uno nuevo invirtiendo los elementos, el ultimo al primero y viceversa.");
	printf("\n\n");
	system("pause");
	
	printf("\n\n\nEl nuevo array invertido en su orden es : ");
	for(i=0;i<MAX;i++)
	{
		for(j=0;j<MAX-1;j++)
		{
			if(array_final[j]>array_final[j+1])
			{
			aux=array_final[j];
			array_final[j]=array_final[j+1];
			array_final[j+1]=aux;
			}
			
		}	
	}
	for (contador = 0; contador < MAX; contador++)
	{
	printf("%d ",array_final[contador]);
	}
	printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n");
	system("pause");	
	
}
void Ejercicio5(void)
{
	system("cls");
	fflush (stdin);
	int enteroInput;
	int i,j=0;
	int array_final[MAX]={15,8,51,74,9,12,35,17,15,23,99,33,62,24,83,21,7,99,15,46};
	int contador=0;	
	int aux=0;	
	for(i=0;i<MAX;i++)
	{
		for(j=0;j<MAX-1;j++)
		{
			if(array_final[j]<array_final[j+1])
			{
			aux=array_final[j];
			array_final[j]=array_final[j+1];
			array_final[j+1]=aux;
			}
			
		}	
	}
	printf("\n\nPunto 5: \nDado el array con estos valores -> ");
	for(i=0;i<MAX;i++)
	{
		for(j=0;j<MAX-1;j++)
		{
			if(array_final[j]>array_final[j+1])
			{
			aux=array_final[j];
			array_final[j]=array_final[j+1];
			array_final[j+1]=aux;
			}
			
		}	
	}
	for (contador = 0; contador < MAX; contador++)
	{
	printf("%d ",array_final[contador]);
	}	
	printf("\nIngresar un numero entero, imprimirlo y averiguar si esta en el array. ");
	printf("\n\n");
	system("pause");
	printf("\n\nIngrese un numero entero : ");
	scanf("%i", &enteroInput);
	printf("\nUd ingreso el numero entero : %d ", enteroInput);
	int enteroEncontrado=0;
	for(i=0;i<MAX;i++)
	{
		if(array_final[i]==enteroInput)
		{
		enteroEncontrado=enteroEncontrado+1	;
		}
	}	
	if (enteroEncontrado!=0)
		{printf("\nEl numero %d esta en el array", enteroInput);}
	else
		{printf("\nEl numero %d no esta en el array", enteroInput);}
	printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n");
	system("pause");	

}
void Ejercicio6(void)
{

	system("cls");
	fflush (stdin);
	int i,j=0;
	int array_final[MAX]={15,8,51,74,9,12,35,17,15,23,99,33,62,24,83,21,7,99,15,46};
	int contador=0;	
	int aux=0;	
	for(i=0;i<MAX;i++)
	{
		for(j=0;j<MAX-1;j++)
		{
			if(array_final[j]<array_final[j+1])
			{
			aux=array_final[j];
			array_final[j]=array_final[j+1];
			array_final[j+1]=aux;
			}
			
		}	
	}
	printf("\n\nPunto 6: \nDado el array con estos valores -> ");
	for(i=0;i<MAX;i++)
	{
		for(j=0;j<MAX-1;j++)
		{
			if(array_final[j]>array_final[j+1])
			{
			aux=array_final[j];
			array_final[j]=array_final[j+1];
			array_final[j+1]=aux;
			}
			
		}	
	}
	for (contador = 0; contador < MAX; contador++)
	{
	printf("%d ",array_final[contador]);
	}	
	printf("\nCual es su Maximo Comun divisor: ");
	int num1,num2,result;
	num1=array_final[0];
	for(j=0;j<MAX-1;j++)
	{
		num2=array_final[j+1];
		result=MCD(num1,num2);
		num1=result;
	}
	printf("\n\n\n\n");
	system("pause");
	printf("\n\nEl Maximo Comun divisor del array es: %d",result);
	printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n");
	system("pause");
	


}
void Ejercicio7(void)
{
	system("cls");
	fflush (stdin);
	int i,j=0;
	int array_final[MAX]={15,8,51,74,9,12,35,17,15,23,99,33,62,24,83,21,7,99,15,46};
	int contador=0;	
	int aux=0;	
	for(i=0;i<MAX;i++)
	{
		for(j=0;j<MAX-1;j++)
		{
			if(array_final[j]<array_final[j+1])
			{
			aux=array_final[j];
			array_final[j]=array_final[j+1];
			array_final[j+1]=aux;
			}
			
		}	
	}
	printf("\n\nPunto 7: \nDado el array con estos valores -> ");
	for(i=0;i<MAX;i++)
	{
		for(j=0;j<MAX-1;j++)
		{
			if(array_final[j]>array_final[j+1])
			{
			aux=array_final[j];
			array_final[j]=array_final[j+1];
			array_final[j+1]=aux;
			}
			
		}	
	}
	for (contador = 0; contador < MAX; contador++)
	{
	printf("%d ",array_final[contador]);
	}
	printf("\nCual es su Minimo Comun Multiplo: ");
	int num1,num2,result,mcd,mcm;
	unsigned long multi;
	num1=array_final[0];
	for(j=0;j<MAX-1;j++)
	{
		num2=array_final[j+1];
		result=MCD(num1,num2);
		mcd=result;
	}
	multi = (array_final[0]* array_final[1]);
	for (i=2; i<MAX; i++) 
	{
	    multi = multi * array_final[i];
	}
	mcm = multi / mcd;	
		
	printf("\n\n\n\n");
	system("pause");
	printf("\n\nEl Minimo Comun multiplo del array es: %d",mcm);
	printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n");
	system("pause");
}
void Ejercicio8(void)
{
	system("cls");
	fflush (stdin);
	int i,j=0;
	int array_final[MAX]={15,8,51,74,9,12,35,17,15,23,99,33,62,24,83,21,7,99,15,46};
	int contador=0;	
	int aux=0;	
	for(i=0;i<MAX;i++)
	{
		for(j=0;j<MAX-1;j++)
		{
			if(array_final[j]<array_final[j+1])
			{
			aux=array_final[j];
			array_final[j]=array_final[j+1];
			array_final[j+1]=aux;
			}
			
		}	
	}
	printf("\n\nPunto 8: \nDado el array con estos valores -> ");
	for(i=0;i<MAX;i++)
	{
		for(j=0;j<MAX-1;j++)
		{
			if(array_final[j]>array_final[j+1])
			{
			aux=array_final[j];
			array_final[j]=array_final[j+1];
			array_final[j+1]=aux;
			}
			
		}	
	}
	for (contador = 0; contador < MAX; contador++)
	{
	printf("%d ",array_final[contador]);
	}
	printf("\nIngresa un numero entero e imprime cual es el numero mas cercano menor y mayor del array\ncon respecto a su numero ingresado: ");
	int enteroInput2;
	scanf("%i", &enteroInput2);
	printf("\nUd ingreso el numero entero : %d ", enteroInput2);
	int difMay,difMen,dif1,dif2;
	for(j=0;j<MAX;j++) 
	{
		if (enteroInput2 < array_final[0])
		{	
			difMen = array_final[0];
			difMay = array_final[0];
			break;
		}
		else if (enteroInput2 > array_final[19]) 
		{
			difMen = array_final[19];
			difMay = array_final[19];
			break;			
		}
		else if (enteroInput2 == array_final[0])
		{	
			difMen = array_final[0];
			difMay = array_final[1];
			break;
		}
		else if (enteroInput2 == array_final[19])
		{	
			difMen = array_final[17];
			difMay = array_final[19];
			break;
		}	
		else if (enteroInput2 > array_final[j]) // mas cercano menor
		{
			dif1 = enteroInput2 - array_final[j]; 
			difMen = enteroInput2 - dif1;
			
		}	
		else if (enteroInput2 < array_final[j]) // mas cercano mayor
		{
			dif2 = array_final[j] - enteroInput2;
			difMay = enteroInput2 + dif2;
			break;
		}	
			
	}
	
	printf("\n\n\nEl numero de la lista mas cercano menor a input es: %d \nEl numero de la lista mas cercano mayor a input es: %d ", difMen, difMay);
	printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n");
	system("pause");
}
void Ejercicio9(void)
{
	system("cls");
	fflush (stdin);
	int i,j=0;
	int array_final[MAX]={15,8,51,74,9,12,35,17,15,23,99,33,62,24,83,21,7,99,15,46};
	int contador=0;	
	int aux=0;	
	for(i=0;i<MAX;i++)
	{
		for(j=0;j<MAX-1;j++)
		{
			if(array_final[j]<array_final[j+1])
			{
			aux=array_final[j];
			array_final[j]=array_final[j+1];
			array_final[j+1]=aux;
			}
			
		}	
	}
	printf("\n\nPunto 9: \nDado el array con estos valores -> ");
	for(i=0;i<MAX;i++)
	{
		for(j=0;j<MAX-1;j++)
		{
			if(array_final[j]>array_final[j+1])
			{
			aux=array_final[j];
			array_final[j]=array_final[j+1];
			array_final[j+1]=aux;
			}
			
		}	
	}
	for (contador = 0; contador < MAX; contador++)
	{
	printf("%d ",array_final[contador]);
	}	
	printf("\nImprime si cada posicion del array es la mitad o el doble de algun otro valor de los 20 elementos de array");
	printf("\n\n");
	system("pause");
	
	for(i=0;i<MAX;i++)
	{
		for(j=0;j<MAX;j++)
		{
			if (array_final[i]/2 == array_final[j] && array_final[i]%2 == 0) 
			{
			printf("\nEl dato %i de la posicion %i es el doble que el dato %i de la posicion %i ", array_final[i], i, array_final[j], j); 
			}
			if (array_final[i]*2 == array_final[j])
			{
			printf("\nEl dato %i de la posicion %i es la mitad que el dato %i de la posicion %i ", array_final[i], i, array_final[j], j);
			}
		}
	}
	printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n");
	system("pause");
	
}

int MCD(int x, int y)
	{
	int result1;
	while((x%y)!=0)
	{
		result1=x%y;
		x=y;
		y=result1;
	}
return y;
}
