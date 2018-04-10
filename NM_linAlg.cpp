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
    cout<<"Ingresar elementos de matriz A\n";

    double **A = new double*[rowA];
    int i;
    for ( i=0; i<rowA; i++){
        A[i] = new double[colA];
    }
    int j;
    int k;
    for ( j=0; j<rowA; j++){
        for (k=0; k<colA; k++){
            cout<<"Elemento "<<j<<","<<k<<": ";
            cin>>A[j][k];
        }
    }

    cout<<"Ingresar elementos de matriz B\n";
    double **B = new double*[rowB];
    int l;
    for ( l=0; l<rowB; l++){
        B[i] = new double[colB];
    }
    int m;
    int n;
    for ( m=0; m<rowB; m++){
        for (n=0; n<colB; n++){
            cout<<"Elemento "<<m<<","<<n<<": ";
            cin>>A[m][n];
        }
    }

    double** prod = matrix_product(rowA,colA,rowB,colB,elemento,elemento);
    for ( int i=0; i<rowA; i++){
        for (int j=0; j<colB; j++){
            cout << prod[i][j]<<" ";
        }
        cout << "\n";
    }
}


double** matrix_product(int rowA, int colA, int rowB, int colB, double A, double B){

    
    double **mat = new double*[rowA];
    int i;
    for ( i=0; i<rowA; i++){
        mat[i] = new double[colB];
    }
    int j;
    int k;
    for ( j=0; j<colA; j++){
        double prov = 0;
        for (j=0; j<colB; j++){
            mat[i][j]=i*j;
        }
    }

}
