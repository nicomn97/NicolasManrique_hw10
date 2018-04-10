#include <iostream>
#include <math.h>

using namespace std;

double** matrix_product(int f1, int c1, int f2, int c2, double m1, double m2);

int main(){

    cout<<"Este programa multiplica la matriz A por la matriz B\n";
    int rowA;
    int colA;
    int rowB;
    int colB;
    double elemento;
    cout<<"Ingresar numero de filas de matriz A: ";
    cin>>rowA;
    cout<<"Ingresar numero de columnas de matriz A: ";
    cin>>colA;
    cout<<"Ingresar numero de filas de matriz B: ";
    cin>>rowB;
    cout<<"Ingresar numero de columnas de matriz B: ";
    cin>>colB;
    cout<<"Ingresar elemento: ";
    cin>>elemento;
    double** prod = matrix_product(rowA,colA,rowB,colB,elemento,elemento);
    for ( int i=0; i<rowA; i++){
        for (int j=0; j<colB; j++){
            cout << prod[i][j]<<" ";
        }
        cout << "\n";
    }
}


double** matrix_product(int rowA, int colA, int rowB, int colB, double A, double B){

    
    double **mat = new double*[colB];
    int i;
    int j;
    for ( i=0; i<rowA; i++){
        for (j=0; j<colB; j++){
            mat[i][j]=i*j;
        }
    }

}
