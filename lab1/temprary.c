#include <stdio.h>

 // counter for binary array 
void decToBinary(int n) 
{ 
    // array to store binary number 
    int binaryNum[1000]; 
  
    int i = 0; 
    while (n > 0) { 
  
        // storing remainder in binary array 
        binaryNum[i] = n % 2; 
        n = n / 2; 
        i++; 
    } 
  
    // printing binary array in reverse order 
    for (int j = i - 1; j >= 0; j--) 
        printf("%d", binaryNum[j]); 
        printf("\n");
} 


int sign(int x) {
    
  int s = x>>31;
  s = s<<1;
  return (s|(!!x));

}
int bang(int x) {
  int r = ~x;
  r = r >>31;
  return ~x;
}
int main(){
  // ((!!x) | (x >> 31)) ;
    int x = 3;
    printf("%d \n", bang(x));
    printf("%d \n", bang(0) );
}
