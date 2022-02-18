// Program treba pozitivne i negativne elemente u polju ispisat u vlastita polja.

#include<stdio.h>
void broj_poz_brojeva(int M[], int velicina);
void broj_neg_brojeva(int M[], int velicina);
void ispis_polja(int M[], int velicina);

int main()
{
 int velicina, i, M[10];
 
 printf("\n unesi velicinu polja  :  ");
 scanf("%d", &velicina);
 
 printf("\nUnesi elemente polja :  ");
 for(i = 0; i < velicina; i++)
 {
      scanf("%d", &M[i]);
 }
 
 broj_poz_brojeva(M, velicina);
 broj_neg_brojeva(M, velicina);
  
 return 0;
}
void broj_poz_brojeva(int M[], int velicina)
{
	int i, pozitivan[10], poz_brojac = 0;
	printf("\n Pozitivni elementi u pozitivnom polju:  ");
	for(i = 0; i < velicina; i ++)
	{
	 	if(M[i] >= 0)
 		{
 			pozitivan[poz_brojac] = M[i];
 			poz_brojac++;
		}
	}
	ispis_polja(pozitivan, poz_brojac);
	printf(" Ukupan broj pozitivnih brojeva u polju = %d ", poz_brojac);
}
void broj_neg_brojeva(int M[], int velicina)
{
	int i, negativan[10], negativan_brojac = 0;
	printf("\n Negativni elemnti u negativnom polju: ");
	for(i = 0; i < velicina; i ++)
	{
	 	if(M[i] < 0)
 		{
 			negativan[negativan_brojac]  = M[i];
 			negativan_brojac++;
		}
	}
	ispis_polja(negativan, negativan_brojac);	
	printf(" Ukupan broj negativnih brojeva u polju = %d ", negativan_brojac);
}
void ispis_polja(int M[], int velicina)
{
	int i;		
 	for(i = 0; i < velicina; i++)
  	{
      printf("%d \t ", M[i]);
    }
    printf("\n");
}
