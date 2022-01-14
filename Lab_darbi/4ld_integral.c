#include<stdio.h>
#include<math.h>
void main(){
 float a=0.,b=0,x=0.,delta_x=0,width,y1=0.,int1=0.,int2=0.,int3=0.;

  printf("Lietotājs,lūdzu, ievadi sākuma robežu: ");
  scanf ("%f", &a);

  printf("Lietotājs,lūdzu, ievadi beigas robežu: ");
  scanf ("%f", &b);

  printf("Lietotājs,lūdzu, ievadi precizitāti: ");
  scanf ("%e", &delta_x);

 width= (b-a)*delta_x;
 x = a;
 while(x <= b){
  y1 = (1+x)*exp(x);
  int1+= width*y1;
  x+= width;
 }
 x = a;
 for (int i=0;x <= b;i++){
  y1 = (1+x)*exp(x);
 if (i==0)
  int2+=y1;
 if (i%2==1)
  int2+=4*y1;
 if (i%2==0)
  int2+=2*y1;
 if (x==b)
  int2+=y1;
  x+= width;
  }
 x = a;
 for (int i=0;x <= b;i++){
  y1 = (1+x)*exp(x);
 if (i==0)
  int3+=2*y1;
 else if (x==b)
  int3+=2*y1;
 else
  int3+=y1;
  x+= width;
  }
  int2*=width/3;
  int3*=width;
 printf("\nintegral, using rectangle rule: %.5f\n",int1);
 printf("integral, using Simpson's rule: %.5f\n",int2);
 printf("integral, using trapezoidal rule: %.5f\n",int3);
}
