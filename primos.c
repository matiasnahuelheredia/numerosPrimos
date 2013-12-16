#include <stdio.h>
#include<string.h>


int main()
{	
FILE* miarchivo;
char* nombrearchivo = "Primos.txt";
char* numerotemp;
int termino=0;
unsigned i;
int esprimo;

/*codigo de apertura e 
inicializacion
*/
unsigned ultimonumeroprimo;
miarchivo = fopen(nombrearchivo,"r");
while(termino!=EOF)
	{
        ultimonumeroprimo = atoi(&numerotemp);//convierte a entero
	termino= fscanf(miarchivo," %[^\n]",&numerotemp);
	}
fclose(miarchivo);




for (i=ultimonumeroprimo+1;i<9999999999;i++)
{
esprimo= 1;//suponemos que es primo

miarchivo = fopen(nombrearchivo,"r");
termino = fscanf(miarchivo," %[^\n]",&numerotemp);
	while(termino!=EOF && esprimo!=0)
	{
        int numeroentero;
        numeroentero = atoi(&numerotemp);//convierte a entero

        if ((i%numeroentero)==0 && numeroentero!=1 && numeroentero!=i)//si i se puede dividir por un numero primo
        {
          esprimo=0;//no es primo
        }
        
	termino= fscanf(miarchivo," %[^\n]",&numerotemp);
	}
fclose(miarchivo);
//si es primo lo agrega a la lista
if (esprimo==1)
{
/*//miarchivo = fopen(nombrearchivo,"a");
char* numerotemporal;
//numerotemporal= itoa(&i,10);
sprintf(numerotemporal,"%*s",i);
 
//fprintf(miarchivo,numerotemporal);
//fclose(miarchivo);*/
printf("%d \n",i);
}


}
return 0;//en caso de que exista un error, el compilador nos regresara un 1, en ves de 0
}
