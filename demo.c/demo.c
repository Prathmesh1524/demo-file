#include<stdio.h>

int main() {
    int a,b,c;
    a=10,b=40;
    
    int c = add(a,b);
    pritnf("The sum of  %d",c);
    
    int ans = add(a,b,c);
    pritnf("Addition of three numbers %d",ans);
    return 0; 
}

int add(int &a, int &b) {
 return a+b;
}

int add(int &a, int &b, int &c) {
  return a+b+c;
}
