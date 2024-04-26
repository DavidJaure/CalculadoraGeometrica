/*TALLER 2 Y 3 SEGUNDO CORTE
        DAVID ALEJANDRO JÁUREGUI MERCHÁN
        TECNOLOGIA EN DESARROLLO DE SOFTWARE
        SEMESTRE 2024-1
        LENGUAJE DE PROGRAMACION, DOCENTE GEOVANNY POVEDA
         UNIVERSIDAD DE SAN BUENAVENTURA*/

#include <stdio.h>
#include <math.h> //Libreria importada para dar el valor de PI y así poder calcular el area del cilindro.
int main() {
  int opcion;

  //Opciones de la calculadora
  printf(
    "Bienvenido a la calculadora de áreas para figuras geométricas.\n"
     

    "1. Área de un trapezoide.\n"
    "2. Área de un cilindro.\n"
    "3. Salir.\n"
    "Elige una opción(1 a 3): ");
    

    scanf("%d", &opcion);

  //Inicio calculo para encontar el area de un trapezoide 
if(opcion==1) {
      printf( "\n\n---[CALCULA EL ÁREA DE UN TRAPEZOIDE]---\n\n"
        "\n ¿Cómo podemos calcular el área de un trapezoide?\n\n"
      "->El area de un trapezoide parte desde el valor de la base mayor hasta "
      "la base menor para después multiplicar la suma de las bases por la altura y luego dividir el resultado entre dos y así encontrar el área del trapezoide\n"
      "->El calculo lo realizamos con la formula de área=1/2 x (base mayor + base menor) x "
      "altura \n\n"
        
        "Ahora, calculemos el área de un trapezoide.\n");
  
        float base_mayor, base_menor, altura, area;

        // Solicitar al usuario que ingrese las dimensiones del trapezoide
        printf("Ingrese la longitud de la base mayor del trapezoide: ");
        scanf("%f", &base_mayor);

        printf("Ingrese la longitud de la base menor del trapezoide: ");
        scanf("%f", &base_menor);

        printf("Ingrese la altura del trapezoide:");
        scanf("%f", &altura);

        /* Calcular el área del trapezoide usando la fórmula área=1/2 x (base mayor +
        base menor) x altura*/
        area = 0.5 * (base_mayor + base_menor) * altura;

        // Impresión del resultado al usuario
        printf("///////////////////////////////////////\n"
          "Recuerde, los valores ingresados son:\n"
          "Base mayor: %.2f\n"
          "Base menor: %.2f\n"
          "Altura: %.2f\n\n"
          "El área de su trapezoide es: %.2f unidades cuadradas\n", base_mayor, base_menor, altura, area);
          printf("///////////////////////////////////////\n\n");

          return main();
}


  //Inicio calculo para encontar el area de un cilindro
     else if(opcion==2){
        printf("\n\n---[CALCULAR EL ÁREA DE UN CILINDRO]---\n\n"
           "\n¿Cómo podemos calcular el área de un cilindro?\n\n"
           "El área de un cilindro se compone de dos componentes principales:\n Las áreas de sus dos bases circulares y su superficie lateral.\n Para calcular el área total del cilindro, sumamos el área de las bases circulares y el área de la superficie lateral.\n\n"
           "Para calcular el área, utilizamos la fórmula: A = 2πr^2 + 2πrh\n"
           "Donde:\n"
           "   r = radio de la base del cilindro\n"
           "   h = altura del cilindro\n"
           "   π (pi) ≈ 3.14159\n\n");


            float radio, altura;
            float area_base, area_lateral, area_total;
          // Se le solicita al usuario ingresar los valores de radio y altura.
       
          printf("Ahora, vamos a calcular el área de un cilindro\n"
            "Ingrese el radio de la base del cilindro: ");
          scanf("%f", &radio);

          printf("Ingrese la altura del cilindro: ");
          scanf("%f", &altura);

       //Calculo del area de la base del cilindro
          area_base = M_PI * radio * radio;//  área de la base del cilindro 
          area_lateral = 2 * M_PI * radio * altura; //  área lateral del cilindro
          area_total = 2 * area_base + area_lateral; //área total del cilindro

          // Mostrar el resultado del cálculo al usuario
       printf("///////////////////////////////////////\n\n");
       printf("Recuerde, los valores ingresados son:\n");
       printf("Radio: %.2f\n", radio);
       printf("Altura: %.2f\n", altura);
       printf("El área total del cilindro es: %.2f unidades cuadradas\n", area_total);
      printf("///////////////////////////////////////\n\n");

            return main();
  }

  else if (opcion==3){

    printf("•◘•◘•◘•◘•◘•◘•◘•◘•◘•◘•◘•◘•◘•◘•◘•◘•◘•◘•◘•◘•◘•◘•◘•◘•◘•◘\n\n"
      "|Gracias por usar la calculadora de áreas|\n\n"
      "•◘•◘•◘•◘•◘•◘•◘•◘•◘•◘•◘•◘•◘•◘•◘•◘•◘•◘•◘•◘•◘•◘•◘•◘•◘•◘\n\n");
    
  }
  else {
    // Opción inválida
    printf("x-x-x-x-x-x-x-x-x-x-x-x\n\n"
        "Opción no válida\n\n"
        "x-x-x-x-x-x-x-x-x-x-x-x\n\n");
    return main();
  }
  return 0;
}


  

