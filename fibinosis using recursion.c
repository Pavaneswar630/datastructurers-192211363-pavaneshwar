#include <stdio.h>
int fibno(int n){
int n1=0,n2=1,n3;
printf("%d\n%d\n",n1,n2);
for(int i=2;i<n;i++){
n3=n1+n2;
printf("%d\n",n3);
n1=n2;
n2=n3;}
}
int main(){
int n;
printf("Enter the range for fibnosis : ");
scanf("%d",&n);
fibno(n);}
