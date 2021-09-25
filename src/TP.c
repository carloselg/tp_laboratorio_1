/*
 ============================================================================
 Name        : TP1.c
 Author      : Carlos Lopez
 Version     : DIVISION G
 Copyright   :
 Description :
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
void calcularSuma(int *x, int *y, int *totalSuma);
void calcularResta(int *x, int *y, int *totalResta);
void calcularDiv(int *x, int *y, float *totalDiv);
void calcularMult(int *x, int *y, int *totalResta);
void calcularFact(int *n, int *totalFact);

int main()
{
	setbuff(stdout,NULL);
    int x = 0, y=0, totalSuma=0, totalResta= 0, totalMult= 0, op, totalFactX= 0, totalFactY= 0;
    float totalDiv;

    /*printf("Ingrese el valor de A \n");
    scanf("%d", &x);

    printf("Ingrese el valor de B \n");
    scanf("%d", &y);*/

/*    calcularSuma(&x,&y,&totalSuma);
    printf("La suma de A + B es: %d \n",totalSuma);

    calcularResta(&x,&y,&totalSuma);
    printf("La resta de A - B es: %d \n",totalResta);

    calcularDiv(&x,&y,&totalDiv);
    printf("La division de A / B es: %.2f \n",totalDiv);

    calcularMult(&x,&y,&totalMult);
    printf("La multiplicacion de A * B es: %d \n",totalMult);

    calcularFact(&x,&y,&totalFact);
    printf("La resta de A + B es: %d \n",totalFact);*/


    do{
        printf("1. - Ingrese el valor de A \n");
        printf("2. - Ingrese el valor de B \n");
        printf("3.- Calcular todas la operaciones \n");
        printf("4.- Informar resultados\n");
        printf("5.- Salir\n\n");

        printf("Ingresa la opcion: \n");
        scanf("%d", &op);
        while(op <1 || op > 5){
            printf("Opcion invalida, ingrese nuevamente:");
            scanf("%d", &op);
        }

        switch(op)
        {
            case 1:
                printf("1. - Ingrese el valor de A: \n");
                scanf("%d", &x);
                break;
            case 2:
                 printf("2. - Ingrese el valor de B: \n");
                    scanf("%d", &y);
              while(y == 0){
                    printf("2. - El valor de B tiene que ser distinto de 0 \n", y);
                    scanf("%d", &y);
                }
                break;
            case 3:
                 calcularSuma(&x,&y,&totalSuma);
                 calcularResta(&x,&y,&totalResta);
                 calcularMult(&x,&y,&totalMult);
                 calcularDiv(&x,&y,&totalDiv);
                 calcularFact(&x,&totalFactX);
                 calcularFact(&y,&totalFactY);

                break;
            case 4:
                  printf("\t La suma de A + B es: %d \n\n",totalSuma);
                  printf("\t La resta de A - B es: %d \n\n",totalResta);
                  printf("\t La multiplicacion de A * B es: %d \n\n",totalMult);
                  printf("\t La division de A / B es: %.2f \n\n",totalDiv);
                  printf("\t El factorial de A = %d y B = %d \n\n",totalFactX, totalFactY);

                break;
            case 5:
                printf("El proceso ha finalizado :)");
                break;
        }
    }while(op != 5);


    return 0;
}
void calcularSuma(int *x, int *y, int *totalSuma){
    *totalSuma = *x + *y;
}

void calcularResta(int *x, int *y, int *totalResta){
    *totalResta = *x - *y;
}
void calcularDiv(int *x, int *y, float *totalDiv){
      *totalDiv = *x / float(*y);

}
void calcularMult(int *x, int *y, int *totalMult){
    *totalMult = (*x )* (*y);
}
void calcularFact(int *n, int *totalFact){
  int p = 0, i;
  if(*n >= 0){
        p=1;
        for(i =1; i<= *n; i++){
            p = p * i;
        }
  }
  *totalFact = p;
}



