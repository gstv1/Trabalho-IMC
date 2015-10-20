#include <stdio.h>

int main()
{
    float Peso, Altura, IMC;
        printf ("\nEntre com seu Peso\n");
        scanf ("%f", &Peso);
        printf ("\nEntre com sua Altura\n");
        scanf ("%f", &Altura);
    
    IMC =(Peso/(Altura*Altura));
    
    if (IMC <=19)
        printf ("\nVocê está magro, seu IMC é " "%.3f", IMC);
    
    else if (IMC <=26)
        printf ("\nVocê está com o peso ideal, seu IMC é " "%.3f", IMC);
        
    else if (IMC <=30)
        printf ("\nVocê está acima do peso, seu IMC é " "%.3f", IMC);
        
    else
        printf ("\nVocê está obeso, seu IMC é " "%.3f", IMC);
        
return 0;
}