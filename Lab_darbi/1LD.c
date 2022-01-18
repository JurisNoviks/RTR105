#include<stdio.h>
#include<math.h>

void main(){
 long double x,y,a,s;
 int k=0;

 printf("Funkcijas (1-x)*exp(-x) aprēķināšana: \n");
 printf("Lietotājs, lūdzu, ievadi x vērtību: ");
 scanf("%Lf",&x);
 y = exp(-x*x);
 printf("exp(-%Lf * %Lf) = %Lf\n",x,x,y);

 a = (1-x)*pow(x,0)/(1);
 s += a;

 while (k<1000)
 {
  if (k == 0)
   printf("a0 = %Le\tS0 =%Lf\n",a,s);
  k++;
  a = a*x/(k);
  s += a;
  if (k == 999)
   printf("a999 = %Le\tS999 =%Lf\n",a,s);
 }
