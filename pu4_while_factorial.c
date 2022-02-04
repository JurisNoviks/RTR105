#include <stdio.h>

int main()
{
    char tips;
    
   
    
    int int_skaitlis;
    int_skaitlis = 1;
    
    long long l_skaitlis;
  
    
  
    
    switch(select()) {
     case 'c':
      
        charFactorial();
        
     break;
     
     case 'i':
     scanf("%d",&int_skaitlis);
     intFaktorial(int_skaitlis);
       
     break;
     
     case 'l':
        scanf("%lld",&l_skaitlis);
        
       
        printf("Faktorials no %lld ir : %lld",l_skaitlis,longFactorial(l_skaitlis));
     break;
     
     
     
    default:
    printf("Nepareizs datu tips \n");
    }
    return 0;
}
void charFactorial()
{
    char test;
    char char_skaitlis,c_i,char_rezultats;
    char_skaitlis=c_i=char_rezultats = 1;
    scanf("%d",&char_skaitlis);

 char_rezultats = c_i = 1;
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
}
void intFaktorial(int int_skaitlis)
{
    int int_rezultats,i;
    int_rezultats=i = 1;
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
}
int select()
{
    char tips;
    printf("Ievadiet datu tipu c=char,i=integer, l=long long \n");
    scanf(" %c",&tips);
    printf("Ievadiet skaitli \n");
    return tips;
}
int longFactorial(long long l_skaitlis)
{
    long long l_rezultats = 1;
    long long l_i = 1;
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
    return l_rezultats;
}
