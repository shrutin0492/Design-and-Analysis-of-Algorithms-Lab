#include <stdio.h>
#include<time.h>
#define size 10
int recursiveBinarySearch(int array[], int start_index, int end_index, int element){
   
   if (end_index >= start_index){
      int middle = start_index + (end_index - start_index )/2;
      if (array[middle] == element)
         return middle;
      if (array[middle] > element)
         return recursiveBinarySearch(array, start_index, middle-1, element);
      return recursiveBinarySearch(array, middle+1, end_index, element);
   }
   return -1;
}
int main(void){
   int array[size];
   int n;
   int element;
   int i = 0;
   int j;
   int temp;
   printf("Total number of elements: ");
   scanf("%d", &n);
   printf("Enter elements to the array: ");
   for (i; i < n; i++){
       scanf("%d", &array[i]);
   }
   for (i = 0; i < n; i++){
       for (j = i + 1; j < n; j++){
           if(array[i] > array[j]){
               temp = array[i];
               array[i] = array[j];
               array[j] = temp;
           }
       }
   }
   printf("Sorted array: ");
   for (i = 0; i < n; i++){
       printf("%d\t", array[i]);
   }
   printf("\nEnter element to search: ");
   scanf("%d", &element);
   clock_t start = clock();
   int found_index = recursiveBinarySearch(array, 0, n-1, element);
   clock_t end = clock();
   if(found_index == -1 ) {
      printf("Element not found in the array ");
   }
   else {
      printf("Element found at index : %d\n",found_index);
      printf("Starting Time: %ldms\n", start);
      printf("Ending Time: %ldms\n", end);
      printf("Total time taken: %ldms ", end - start);
   }
   
   return 0;
}





