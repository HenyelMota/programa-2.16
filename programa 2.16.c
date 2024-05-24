#include <stdio.h>

int main()
{
    // Declara cuatro variables enteras: CLA (clave del trabajador), CAT (categoría), ANT (antigüedad) y RES (resultado)
    int CLA, CAT, ANT, RES;
    // Pide al usuario que ingrese la clave, categoría y antigüedad del trabajador
    printf("\nIngrese la clave, categoria y antiguedad del trabajador:");
    // Lee los valores ingresados por el usuario y los almacena en las variables CLA, CAT y ANT
    scanf("%d %d %d", &CLA, &CAT, &ANT);

    switch(CAT) // Inicia una estructura switch que evalúa la variable CAT
    {
    case 3:     // Caso 3: si CAT es igual a 3, ejecuta el siguiente bloque
    case 4:     // Caso 4: si CAT es igual a 4, ejecuta el mismo bloque que el caso 3
         if (ANT >= 5) // Si la antigüedad (ANT) es mayor o igual a 5
    {
        RES = 1; // Asigna 1 a RES, indicando que se cumplen las condiciones
    }else        // Si la antigüedad (ANT) es menor a 5
    {
        RES = 0; // Asigna 0 a RES, indicando que no se cumplen las condiciones
    }break;      // Termina el bloque del caso 3 y 4, y sale del switch

    // Caso por defecto: si CAT no es ni 3 ni 4
    default: RES = 0;  // Asigna 0 a RES, indicando que no se cumplen las condiciones
    break;
    }
    if(RES) // Si RES es diferente de 0 (es decir, si RES es verdadero)
    {
        // Imprime que el trabajador cumple con las condiciones
        printf("\nEl trabajador con clave %d reune las condiciones para el puesto", CLA);
    }else // Si RES es 0 (es decir, si RES es falso)
    {
        // Imprime que el trabajador no cumple con las condiciones
        printf("\nEl trabajador con clave %d no reune las condiciones para el puesto", CLA);
    }
}
