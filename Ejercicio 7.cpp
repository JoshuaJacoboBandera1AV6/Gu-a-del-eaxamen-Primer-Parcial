#include<stdlib.h>
#include<stdio.h>
#include<conio.h>
int main (void){
int a,b,c;
printf("Introduce un numero entero:\n");
scanf("%d",&a);
printf("Introduce un segundo numero entero:\n");
scanf("%d",&b);
printf("Introduce un tercer numero entero:\n");
scanf("%d",&c);
if(a>b&&a>c){
printf("%d es el numero de mayor valor.\n",a);	
 }
else{
 if(b>c){
 printf("%d es el numero de mayor valor.\n",b); 
  }
 else{
  printf("%d es el numero de mayor valor.\n",c);
   } 
  }
 }
