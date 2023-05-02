#include <stdio.h>

int main (int argc, char *argv[]) {
  char nombre[50];
  char cedula[10];
  char opcion; // se declara una variable para almacenar la opcion seleccionada

  float precioA=150, precioB=55, precioC=180, precioD=70, precioE=120;
  float numA=0, numB=0, numC=0, numD=0, numE=0;
  float subtotalA=0, subtotalB=0, subtotalC=0, subtotalD=0, subtotalE=0;
  float subtotal=0, total=0; 

  printf ("****Escoja un producto que desee facturar: \n ");
  printf ("a) Llantas (precio: $150)\n");
  printf ("b) Kit Pastillas de freno (Precio: $55) \n");
  printf ("c) Kit de embrague (Precio: $180) \n");
  printf("d) Faro (Precio: $70)\n");
  printf("e) Radiador (Precio: $120)\n");
  scanf("%c", &opcion); // se corrige la llamada a scanf

  return 0;
}

switch (opcion)
{
case 'a':
    printf("Ingrese el numero de llantas: \n")
    scanf("/f", &numA);
    break;
case 'b':
    printf("Ingrese el numero de kit de pastillas de freno: \n");
    scanf("%f", &numB);
    break;
case 'c':
    printf("Ingrese el numero de kit de embrague");
    scanf("%f", &numC);
    break;
case 'd':
    printf("Ingrese el numero de faros: \n");
    scanf("%f", &numD);
    break;
case 'e':
    printf("Ingrese el numero de radiadores: \n");
    scanf("%f", &numE);
    break;

    default;
        break;
    subtotalA=precioA*numA;
    subtotalB=precioB*numB;
    subtotalC=precioC*numC;
    subtotalD=precioD*numD;
    subtotalE=precioE*numE;

    subtotal=subtotalA+subtotalB+subtotalC+subtotalD;
    if (subtotal>100 && subtotal<=500)
    {
        total=subtotal-subtototal*0.05;    
    }
    else if (subtotal>500 && subtotal<=1000)
    {
        total=subtotal-subtototal*0.07;    
    }
    else if (subtotal>1000)
    {
        total=subtotal-subtototal*0.1;    
    }

    printf("ingrese el Nombre del cliente: \n");
    scanf("%s", &nombre);
    printf("ingrese la cedula delcliente: \n");
    scanf("%s", &cedula);
   
    printf ("****************Datos del cliente******************");
    

}