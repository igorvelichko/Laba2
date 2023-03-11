#include <stdio.h>  
#include <stdlib.h>  
#include <math.h>   
 
int main() 
{ 
 int n, p, i, j; 
 printf("Enter size your matrix: "); 
 scanf("%d \n", &n); 
  double matrix[n][n]; 
  printf("Enter your numbers in mas:\n"); 
  for(int i = 0; i < n; i++){ 
    for(int j = 0; j < n; j++){ 
      scanf("%lf", &matrix[i][j]); 
    } 
  } 
  double sum1 = 0, sum2 = 0; 
  for(int i = 0; i < n; i++) 
  { 
    sum2 += matrix[i][2-i]; 
    sum1 += matrix[i][i]; 
  } 
  printf("Your sum on first line: %lf\n", sum1); 
  printf("Your sum on second line: %lf\n", sum2);  
   
  int mas[n][n]; 
  int res[n][n];
  printf("Enter your nambers in mas:\n"); 
  for(int i = 0; i < n; i++){ 
   for(int j = 0; j < n; j++){ 
    scanf("%d", &mas[i][j]); 
   } 
   } 
    for (int i=0; i < n; i++){
        for(int j = 0; j<n; j++){
            res[i][j] = 0;
            for(int p=0; p<n; p++){
                res[i][j] += mas[i][p]*mas[p][j];

            }
        }
    }

    printf ("Result:\n");
    for (i=0; i<n; i++){
            for(j=0; j<n; j++)
            {
                printf("%d ", res[i][j]);
            }
        printf("\n");
        }
}