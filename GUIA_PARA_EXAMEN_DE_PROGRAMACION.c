#include <stdio.h>
 /* Lopez Sanchez Gustavo_Guia para examen de tercer departamental_Saber cuanta gasolina gasta el carro  */

int main(){
    int carro;
    char decision;
    char opcion;
    decision = 's';
    opcion = 's';
    printf ("SOLO COLOCAR EN CADA CASO S O N\n");
    printf ("\n¿Tienes coche?");
    scanf ("%s",&opcion);
    if ( ( opcion == 's' ) || ( opcion == 'S' ) )
    {
    
    printf ("Escoje el numero donde este la marca de tu coche\n");
    printf ("¿Sabes cuanta gasolita gasta el coche que tu manejas?\n\n");
    
        do
        { 
            printf ("1.Nissan X-Trail Hybrid\n");
            printf ("2.Toyota Yaris R\n");
            printf ("3.Ford Figo\n");
            printf ("4.Chevrolet Beat\n");
            printf ("5.Audi A1\n");
        
            printf ("¿Que marca de carro tienes?");
            scanf ("%d",&carro);

            switch(carro)
            {
        
                case 1:
                    printf ("tu carro tiene un motor a gasolina de 2.0L con 141 caballos, el cual puede recorrer 17.10 kilometros por litro este coche");
                    printf ("\n\n¿quieres probarlo con otro coche?");
                    scanf ("%s",&decision);
                    break;
                case 2:
                    printf ("tu carro tiene un rendimiento de 17.10 kilometros por litro con caja de 6 velocidades, con un motor de 1.5L con 106 HP");
                    printf ("\n\n¿quieres probarlo con otro coche?");
                    scanf ("%s",&decision);              
                    break;
                case 3:
                    printf ("Tu carro tiene un motor de 3 cilindros de 1.5L de 121 Hp, pude recorres 16 kilometros por litro con transmisison manual");
                    printf ("\n\n¿quieres probarlo con otro coche?");
                    scanf ("%s",&decision);                
                    break;
                case 4:
                    printf ("tu carro tiene un motor de 1.4L de 98 Hp de 4 cilindros, con el que se puede reccorres 17.17 kilometros por litro");
                    printf ("\n\n¿quieres probarlo con otro coche?");
                    scanf ("%s",&decision);                
                    break;
                case 5:
                    printf ("tu carro tiene un motor de 1.5L de 150 Hp, que da de rendimiento 16 kilometros por litro");
                    printf ("\n\n¿quieres probarlo con otro coche?");
                    scanf ("%s",&decision);                
                    break;                

               }
        


        } while ( decision != 'n' && decision != 'N' );
    
    }
    else 
    {
    printf ("Sigue participando");
    }



    return 0;
}