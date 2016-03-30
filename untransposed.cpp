#include<iostream>
#include<ctime>


using namespace std;

static int matrix_size = 1000;

void matrix_mult_1( double** a, double** b, double** result ){
    
    for(int i = 0; i<matrix_size;i++)
      for(int j = 0; j<matrix_size;j++){
        result[i][j]=0.;
        for(int k =0; k<matrix_size;k++)
            result[i][j]+=a[i][k]*b[k][j];
      }
      
}

void matrix_mult_2( double** a, double** b, double** result ){
    
    for(int i = 0; i<matrix_size;i++){
      for( int j = 0; j<i;j++){
        swap(b[i][j],b[j][i]);
      }
    }
    
    for(int i = 0; i<matrix_size;i++)
      for(int j = 0; j<matrix_size;j++){
        result[i][j]=0.;
        for(int k =0; k<matrix_size;k++)
            result[i][j]+=a[i][k]*b[j][k];
      }
      
}

int main(){
  
  double** matrix_a = new double*[matrix_size];
  
  for(int i=0;i<matrix_size;i++)
    matrix_a[i] = new double[matrix_size];
  
  double** matrix_b = new double*[matrix_size];
  
  for(int i=0;i<matrix_size;i++)
    matrix_b[i] = new double[matrix_size];
  
  double** matrix_c = new double*[matrix_size];
  
  for(int i=0;i<matrix_size;i++)
    matrix_c[i] = new double[matrix_size];
  
  for(int i=0;i<matrix_size;i++)
    for(int j=0;j<matrix_size;j++)
      matrix_a[i][j] = static_cast<double>(matrix_size)/(i*j);
    
  
  for(int i=0;i<matrix_size;i++)
    for(int j=0;j<matrix_size;j++)
      matrix_b[i][j] = static_cast<double>(matrix_size)/(i*j);
    
  clock_t start = clock();
  matrix_mult_1( matrix_a, matrix_b, matrix_c );
  double elapsedTime = static_cast<double>(clock() - start) / CLOCKS_PER_SEC;
  
  cout << matrix_c[2][5] << endl;
  cout << "Elapsed time: " << elapsedTime << endl;
  
  return 0;
  
}
