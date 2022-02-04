#include <stdio.h>

int main()
{
    char tips;
    char test;
   
    
    int int_skaitlis,int_rezultats,i;
    int_skaitlis=int_rezultats=i = 1;
    
    long long l_skaitlis,l_rezultats,l_i;
    l_skaitlis=l_rezultats=l_i = 1;
    
    char char_skaitlis,c_i,char_rezultats;
    char_skaitlis=c_i=char_rezultats = 1;
   
    printf("Ievadiet datu tipu c=char,i=integer, l=long long \n");
    scanf(" %c",&tips);
    printf("Ievadiet skaitli \n");
    switch(tips) {
     case 'c':
        scanf("%d",&char_skaitlis);
        
        char_rezultats = c_i = 1;//abi char ir nules kautvai ieprieks pieskrta vērtiba 1.Tapėc pieskiru vertibu velreiz
        
        while(c_i<=char_skaitlis)
        {
            test = (char_rezultats*c_i); //ja tiek ielikts pa taisno ifa tad nestrada (char sasniendz lielaku vertibu neka var)
            if(test >= char_rezultats)
            {
                
                char_rezultats*=c_i;
                c_i++;
                
            }
            else
            {
                printf("Datu tips pārāk mazs priekš faktoriāla");
                return 0;
            }
           
            
        }
        printf("Faktorials no %d ir : %d",char_skaitlis,char_rezultats);
     break;
     
     case 'i':
     scanf("%d",&int_skaitlis);
        while(i<=int_skaitlis)
        {
            if((int_rezultats*i) >= int_rezultats)
            {
                int_rezultats*=i;
            i++;
            }
            else
            {
                printf("Datu tips pārāk mazs priekš faktoriāla");
                return 0;
            }
           
            
        }
        printf("Faktorials no %d ir : %d",int_skaitlis,int_rezultats);
     break;
     
     case 'l':
        scanf("%lld",&l_skaitlis);
        while(l_i<=l_skaitlis)
        {
            if((l_rezultats*l_i) >= l_rezultats)
            {
                l_rezultats*=l_i;
            l_i++;
            }
            else
            {
                printf("Datu tips pārāk mazs priekš faktoriāla");
                return 0;
            }
           
            
        }
        printf("Faktorials no %lld ir : %lld",l_skaitlis,l_rezultats);
     break;
     
     
     
    default:
    printf("Nepareizs datu tips \n");
    }
    return 0;
}
