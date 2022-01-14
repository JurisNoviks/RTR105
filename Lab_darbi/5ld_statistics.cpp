#include <stdio.h>

int main()
{
    char array[100] = "";
    char uniqueArray[100] = "";
    char counterArray[100] = "000";
    char min, max, median;
    char flip;
    int i,n,k,modeCounter = 0, counter=0;
    
    printf("Lūdzu ievadiet sakārtojamo simbolu virkni (<100 simboliem): ");
    scanf(" %s", &array);
    printf("\n");
    //Saskaita cik simbolu ir virknē
    while(array[counter] != 0)
    {
      counter++;   
    }
    // Sakārto simbolus augošā secībā
    for(n=0;n<counter;n++)
    {
        for(i=0;i<counter-1;i++)
        {
            if(array[i]>array[i+1])
            {
                flip = array[i];
                array[i] = array[i+1];
                array[i+1] = flip;
            }
        }
    }
    //Katru unikālo simbolu ieliek citā virknē
    n=0;
    for(i=0;i<counter;i++)
    {
        if(array[i] != array[i-1])
        {
            uniqueArray[n] = array[i];
            n++;
        }
    }
    // Saskaita cik katra veida simbolu ir
    for(i=0; i<n;i++)
    {
        for(k=0;k<counter;k++)
        {
            if(uniqueArray[i] == array[k]) modeCounter++;
        }
        counterArray[i] = modeCounter;
        modeCounter = 0;
    }
    //Sakārto unikālo simbolu virkni augošā secībā, balstoties uz katra simbola skaitu
    for(i=0;i<n;i++)
    {
        for(k=0; k<n-1;k++)
        {
            if(counterArray[k]>counterArray[k+1])
            {
                flip = counterArray[k];
                counterArray[k] = counterArray[k+1];
                counterArray[k+1] = flip;
                flip = uniqueArray[k];
                uniqueArray[k] = uniqueArray[k+1];
                uniqueArray[k+1] = flip;
            }
        }
    }
    //Izdruka
    printf("MAX vērtība ir %c\n", array[counter]);
    printf("MIN vērtība ir %c\n", array[0]);
    if(counter%2 !=0)
    {
        printf("Mediāna ir %c\n", array[counter/2-1]);
    }else{ 
        printf("Mediāna nav\n");
    }
    printf("Moda/as ir ");
    if(counterArray[n] = counterArray[n-1])
    {
        if(counterArray[n] = counterArray[n-2])
        {
            printf("%c %c %c\n", uniqueArray[n], uniqueArray[n-1], uniqueArray[n-2]);
        }
    }
    else if(counterArray[n] = counterArray[n-1])
    {
        printf("%c %c\n", uniqueArray[n], uniqueArray[n-1]);
        
    }else
    {
        printf("%c\n", uniqueArray[n]);
    }
    for(i=0;i<counter;i++)
    {
        printf("%c ", array[i]);
    }
    printf("\n");
    for(i=0;i<counter;i++)
    {
        printf("%d ", array[i]);
    }
    return 0;
}
