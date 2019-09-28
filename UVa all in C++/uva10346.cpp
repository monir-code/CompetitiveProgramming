#include<stdio.h>
int main() {
  long int n,i;
  while(scanf("%ld%ld",&n,&i)!=EOF) {
    printf("%ld\n",n+(n-1)/(i-1));
  }
  return 0;
}

