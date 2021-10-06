#include <stdio.h>
int main()
{	//Datos Entrada
	int anchoPAN,altoPAN,cordx1,cordy1,cordx2,cordy2;
	 float x, y, pAN, pAL;
	  scanf_s("%i %i %f %f %f %f", &anchoPAN, &altoPAN, &x, &y, &pAN, &pAL);
	//Proceso1
	  cordx1 = anchoPAN*x;
	  cordy1 = altoPAN*y;
	  //Proceso 2
	    cordx2 = cordx1 + anchoPAN*pAN;
	     cordy2 = cordy1 + altoPAN*pAL;
	//Datos Salida
	      printf("%i %i %5.2f %5.2f %5.2f %5.2f %d %d %d %d", anchoPAN, altoPAN, x, y, pAN, pAL,cordx1,cordy1,cordx2,cordy2);
	
		  return(0);
}

