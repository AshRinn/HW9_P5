#include <iostream>
using namespace std;

int main() {
 int matrix[2][2], i, j;
  float Detr = 0;
  int Adj[2][2];
  cout << "Enter the top row of the matrix, then the bottom row of matrix: \n";
  for (i = 0; i < 2; i++)
  for (j = 0; j < 2; j++)
  cin >> matrix[i][j];
printf("\nGiven martix is:");
  for(i = 0; i < 2; i++)
  {
  cout<<"\n";
  for (j = 0; j < 2; j++)
  cout<< matrix[i][j]<<"\t";
  }
// finding the determinant of a
  Detr = 1/( (matrix[0][0] * matrix[1][1]) - (matrix[1][0] * matrix[0][1]));

// finding the adjoint of a 
  Adj[0][0]= matrix[1][1];
  Adj[0][1]= -matrix[0][1];
  Adj[1][1]= matrix[0][0];
  Adj[1][0]= -matrix[1][0];

  
  
    
   

}