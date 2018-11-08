#include <iostream>
#include <math.h>

int main() {
   int n;
   std::cout <<"Hello, please enter number N" ;
   std::cin >> n;
   bool arr[n+1];
   for (int i = 0 ; i < n+2 ; i++) {
	arr[i] = true;
	}
   arr[0] = false;
   arr[1] = false;
   int a = 0;
   for (int i = 2; i < sqrt (n) ; i++)  {
      
      if (arr[i] == true) {
         
         a++;
         for (int j = pow(i,2); j < n+1 ; j = j + i) {
            
            arr[j] = false;
            
         }
         
      }
      
   }
   
   int ar[a];
   int j = 2;
   int k = 0;
   for (int i = 0 ; i<a ; i++){
      while (k<1 && j <n+1) {
         if(arr[j] == true){
            ar[i] = j;
            j++;
            k++;
         }
         else {
            j++;
         }
      }
      k=0;
   }
   std::cout<< ar;
   return 0;
}
