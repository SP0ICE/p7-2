#define rows 10
#define cols 10
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main(){
int a[cols][rows];
int i=0;
int j=0;
int sr_a=0;
double sr_a2=0;
for (i=0;i<cols;i++){
  for (j=0;j<rows;j++){
    a[i][j]=rand()%200-100+1;
    printf(" %3d ",a[i][j]);}
    printf("\n");}
  for (i=0;i<cols;i++){
    sr_a+=a[rows-i-1][i];}
  sr_a2=(double)sr_a/rows;
  printf("Average number  = %0.3lf",sr_a2);}
