#include <stdio.h>
#include <stdlib.h>



int main(){
	
	char text;
	char izvele[3];
	int numb;
	int charInt = 1;
	long long charLong = 1;
	char charChar = '1';
	
	
	printf("%s", "Ievadi vienu decimalu skaitli: ");
	scanf(" %c", &text);
	printf("%c", text);	
	printf("%s", "Izvelies izejas datu tipu: char[c], int[i] vai long long [l]");

    scanf("%s", izvele);
	
	numb = text - '0';
	
	if(izvele[0] == 'c' ){
		printf("Nevar aprekinat faktorialu char datu tipam");	
		
	}else if(izvele[0] == 'i'){
		while(numb){
			charInt = charInt * numb;
			numb--;
			
		}
	printf("Rezutats:%i", charInt);
		
		
	}else if(izvele[0] == 'l'){
		while(numb){
			charLong = charLong * numb;
			numb--;
			
		}
	printf("Rezutats:%lli", charLong);	
	}
	
	
	

    
    

    return 0;
}
