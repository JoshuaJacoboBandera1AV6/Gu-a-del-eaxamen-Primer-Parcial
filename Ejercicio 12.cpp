#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
int main (void){
int n,a=1;
printf("Crea una matriz a partir de un numero.\n");
printf("Introduzca un numero entero:");
scanf("%d",&n);
for(int i=1;i<=n;i++){
 for(int j=1;j<=i;j++){
 printf("%d",a);
 a++; 
  }
 a=a/a;  
 printf("\n");
 }	
}
