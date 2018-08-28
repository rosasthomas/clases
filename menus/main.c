#include <stdio.h>
#include <stdlib.h>

float sumar(float);
float restar(float);
float multiplicar(float);
float dividir(float);

int main()
{
    int opcion;
    do
    {
        printf("1.Sumar\n");
        printf("2.Restar\n");
        printf("3.Multiplicar\n");
        printf("4.Dividir\n");
        printf("5.Salir\n");
        printf("Ingrese una opcion: ");
        scanf("%d", &opcion);

        switch(opcion)
        {
        case 1:
            Sumar();
            break;
        case 2:
            Restar();
            break;
        case 3:
            Multiplicar();
            break;
        case 4:
            Dividir();
            break;
        case 5:
            opcion = 5;
            break;
        default:
            printf("No ingreso una opcion correcta");
        }
        system("pause");
        system("cls");
    }
    while(opcion != 5);



    return 0;
}
