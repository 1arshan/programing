#include <stdio.h>
void main (){
   int num[20];
   int i, j, a, n;
   
   scanf("%d", &n);
   for (i = 0; i < n; ++i)
      scanf("%d", &num[i]);
   for (i = 0; i < n; ++i){
      for (j = i + 1; j < n; ++j){
         if (num[i] > num[j]){
            a = num[i];
            num[i] = num[j];
            num[j] = a;
         }
      }
   }

printf("%d", num[n-1]*num[n-2]);
}