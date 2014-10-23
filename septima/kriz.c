#include <stdio.h>


void opakuj(int cislo, char znak) {
    while (cislo > 0) {
        putchar(znak);
       cislo--;
        
    }
}

void napis_radek(int kolikrat) {
	for (int radek = kolikrat;radek>0;radek--) {
			opakuj(kolikrat, ' ');
        	opakuj(kolikrat, 'X');
            printf("\n");
		}
}
	


int main (void)
{
	int kolikrat;
	
	scanf("%d", &kolikrat);
	               

	napis_radek(kolikrat);
      
	opakuj(kolikrat*3, 'X');
	printf("\n");
	opakuj(kolikrat*3, 'X');
	printf("\n");
	
	napis_radek(kolikrat);
    
       
    return 0;
    
}
	
	
	
