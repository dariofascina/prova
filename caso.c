#include <stdio.h>
#include <stdlib.h>
#define MAX 100
#define MAXC 20	
FILE *f;

main()
{
	int fera=0;
	
	f=fopen("dati.csv","w");
	while(fera<10){
	fprintf(f,"%d;Buonasera;Fera\n",fera+1);
	fera++;
	}
	fclose(f);	
	getch();
}
