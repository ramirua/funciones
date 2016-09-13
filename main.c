#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define t 30
#define F 15
#define C 15

//ARGUMENTO DEl LLAMADO DE LA FUNCION
  void cargar_vect(int vector[t], int x);
  void imp_vectores(int v1[t], int v2[t], int v3[t]);
  void carga_matriz(int matriz[F][C], int x);
  void imp_m1(int m1[F][C]);
  void imp_m2(int m2[F][C]);
  void reves(int v1[t]);
  void intercalar(int v2[t], int v3[t], int vin[60]);
  void imp_intercalar(int vin[60]);
  void ordenar(int v1[t]);
  void intercambiar(int v2[t], int v3[t], int e[t]);
  void imp_inter(int e[t]);
 
int main()
{
	int op, a[t], b[t], c[t], m1[F][C], m2[F][C], vin[60],e[t];
	srand(time(0));
	do{
		system("cls");
		do{
				printf("\t\t ** MENU ** \n");
		    printf("\n\t Presiona 1 Para los vectores A, B y C");
		    printf("\n\t Presiona 2 para la matriz m1");
		    printf("\n\t Presiona 3 Para la matriz m2");
			printf("\n\t Presiona 4 Para el vector A al reves");
			printf("\n\t Presiona 5 para intercalar el vector B y C");
			printf("\n\t Presiona 6 Para ordenar el vector A");
			printf("\n\t Presiona 7 Para cambiar las posiciones de los vectores de B y C");
			printf("\n\t Presiona 8 Para SALIR");
			printf("\n\t Cual es su opcion?:  ");
			scanf("%d",&op);
		}while(op<1 || op>8);
		
		system("cls");
		switch(op)
		{
			case 1: printf("\t\t vectores \n\n");
			  cargar_vect(a,1);
			  cargar_vect(b,2);
			  cargar_vect(c,3);
		      imp_vectores(a,b,c);
			break;
			
			case 2: printf(" \t\tla matriz m1 es: \n\n");
			   carga_matriz(m1,1);
			   imp_m1(m1);
			break;
			
			case 3: printf(" \t\tla matriz m2 es: \n\n");
			   carga_matriz(m2,2);
			   imp_m2(m2);
			break;
			
			case 4: printf(" \t\tla vector A: \n\n");
			  reves(a);
			break;
			
			case 5: printf(" \t\t intercalando el vector B y C: \n\n");
			   intercalar(b,c,vin);
			   imp_intercalar(vin);
			break;
			
			case 6: printf(" \t\t Ordenando el vector A: \n\n");
			   ordenar(a);
			break;
			
			case 7: printf("\t\t Cambiar las posiciones de los vectores de B y C \n\n");
			   intercambiar(b,c,e);
			   imp_inter(e);
			break;
		
			case 8:
		    	printf("\n\n\t\t GRACIAS POR VER EL SISTEMA =) \n\n\n");
		    break;
		    
		    default:
		    	break;
		}
	system("pause");
	}while(op!=8);
	return 0;
}

//FUNCIONES
         // vectores A,B,C
 void cargar_vect(int vector[t], int x)
 {
 	int i;
 	for(i=0; i<t; i++)
 	{
 		if(x==1) //vector A con numeros aleatorios de 100 a 999
 		{
 			vector[i]=rand()%900+100;
 		}
 	   
 	   else
 	   {
 	   	 if(x==2) //vector B con numeros aleatorios pares de 100 a 999 
 	 	 {
 			vector[i]=(rand()%450+50)*2;
 		 }

 		else
 		  {
 		     //vector C con numeros aleatorios impares de 100 a 999 
 		     vector[i]=((rand()%450+50)*2)+1;
 		  } 
 	   }
    }
 }
 
 void imp_vectores(int v1[t], int v2[t], int v3[t])
 {
 	int i;
 	printf("  A \t  B\t  C\n");
 	for(i=0; i<t; i++)
 	{
 		printf("\n %d \t %d \t %d\n",v1[i],v2[i],v3[i]);
 	}
 }
 
    // cargar imprimir las matrices m1 y m2
 void carga_matriz(int matriz[F][C], int x)
 {
 	int i,j;
 	for(i=0; i<F; i++)
 	{
 		for(j=0; j<C; j++)
 		{
 			if(x==1) //carga la matriz m1 con numeros aleatoreos de 100 a 999
 			{
 				matriz[i][j]=rand()%900+100;
 			}
 			else //carga la matriz m1 con numeros aleatoreos de 1000 a 9999
 			{
 				matriz[i][j]=rand()%9000+1000;
 			}
 		}
 	}
 }
 
 void imp_m1(int m1[F][C])
 {
 	int i,j;
 	
 	for(i=0; i<F; i++)
 	{
 		for(j=0; j<C; j++)
 		{
 			printf(" %d",m1[i][j]);
 		}
 		printf("\n");
 	}
 	 //matriz transpuesta
 	  printf(" \n\n\t\t la matriz m1 transpuesta es: \n\n");
 	for(i=0; i<F; i++)
 	{
 		for(j=0; j<C; j++)
 		{
 			printf(" %d",m1[j][i]);
 		}
 		printf("\n");
 	}
 }

void imp_m2(int m2[F][C])
 {
 	int i,j;
 	
 	for(i=0; i<F; i++)
 	{
 		for(j=0; j<C; j++)
 		{
 			printf(" %d",m2[i][j]);
 		}
 		printf("\n");
 	}
 }
 
    // vector A al reves
void reves(int v1[t])
{
	int i;
	printf(" V[A] \t reves \n");
	for(i=0; i<t; i++)
	{
		printf("\n %d \t %d\n",v1[i], v1[t-i]);
	}
}

      //intercalando el vector B y C
void intercalar(int v2[t], int v3[t], int vin[60])
{
	int i, g=0; 
	for(i=0; i<60; i++)
	{
		vin[g]=v2[i];
		g++;
		vin[g]=v3[i];
		g++;
	}
}

void imp_intercalar(int vin[60])
{
	int i;
	for(i=0; i<60; i++)
	{
		printf(" \t %d \n",vin[i]);
	}
}

 // ordenando de menor a mayor el vector A
 void ordenar(int v1[t])
 {
 	int i,j,aux=0;
 	for(i=0; i<t; i++)
 	{
 		for(j=0; j<t-1; j++)
 		{
 			if(v1[j]>v1[j+1])
 			{
 				aux=v1[j];
 				v1[j]=v1[j+1];
 				v1[j+1]=aux;
 			}
 		}
 	}
 	printf("\t \n");
 	for(i=0; i<t; i++)
 	{
 		printf(" %d\n",v1[i]);
 	}
 	
 }
 
//intercambiar las 15 posiciones de los vectores B y C
void intercambiar(int v2[t], int v3[t], int e[t])
{
	int i;
	for(i=0; i<t; i++)
	{
		if(i<5)
		{
			e[i]=(i+15);
			e[i]=v2[i];
		}
		else
		{
			e[i]=(i-15);
			e[i]=v3[i];
		}
	}
}

void imp_inter(int e[t])
{
	int i;
	for(i=0; i<t; i++)
	{
		printf("\n [%d] = %d\n",i,e[i]);
	}
}
