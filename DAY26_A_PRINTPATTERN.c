//Write a program to print the following pattern:
    //5
   //45
  //345
 //2345
//12345

#include <stdio.h>

int main() {
    int n=5;

    for(int i=1; i<=n; i++){
        for(int j=1; j<=n-i; j++){
            printf(" ");
        }
        for(int k=n-i+1; k<=5; k++){
            printf("%d",k);
        }
        printf("\n");
    }
    return 0;
}
