#include<stdio.h>
void printFibonacci(int m){
static int m1=1,m2=1,m3;
if(m>0){
m3 = m1 + m2;
m1 = m2;
m2 = m3;
printf("%d " ,m3);
printFibonacci(m-1);
}

}
int main(){
int m;
printf("Input of terms for the series(<20):");
scanf("%d",&m);
printf(" %d %d ",1,1);
printFibonacci(m-2); 
return 0;

}
