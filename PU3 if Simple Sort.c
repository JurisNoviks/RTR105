#include <stdio.h>
#include <stdlib.h>

int comp (const void * elem1, const void * elem2) 
{
    return (strcmp((char *)elem1,(char *)elem2));
}

int main()
{
	char izvele[1];
	char text[3];
	
	printf("%s", "Izvelies secibu: alfabeta[a] vai preteji[p]");

    scanf("%s", izvele);
	
	if(izvele[0] == 'a' ){
		printf("%s", "Ievadi 3 burtus: ");
		scanf("%s", text);
		qsort (text,3, sizeof(char), comp);
		printf("%s%.*s", "Alfabeta seciba: ", (int)sizeof(text), text);
	}
	
	if(izvele[0] == 'p'){
		printf("%s", "Ievadi 3 burtus: ");
		scanf("%s", text);
		qsort (text,3, sizeof(char), comp);
		printf("%s%.*s", "Preteji alfabeta secibai: ", (int)sizeof(text), text);
	}

	
	

    
    

    return 0;
}
