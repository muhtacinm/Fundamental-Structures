#include <iostream>

#define N 3

using namespace std;

//multiply matrices function
void multiply(int mat1[][N],int mat2[][N],int res[][N])
{
    int i, j, k;
    for (i = 0; i < N; i++)
    {
        for (j = 0; j < N; j++)
        {
            res[i][j] = 0;
            for (k = 0; k < N; k++)
                res[i][j] += mat1[i][k] * mat2[k][j];
        }
    }

}

//multiply matrices by scalar function
void multiplybynum(int mat1[][N],int num,int res[][N])
{
    int i, j;
    for (i = 0; i < N; i++)
        for (j = 0; j < N; j++)
            res[i][j] = mat1[i][j] * num;

}

// print the result of functions
void printresult(int matrix[][N]){
    int i,j;
    for (i = 0; i < N; i++)
    {
        for (j = 0; j < N; j++)
        cout << matrix[i][j] << " ";
        cout << "\n";
    }
    cout << endl;
}

int main()
{
    // declaration of matrices and temp matrix
    int res[N][N];
    int matA[N][N] = {{13,9,7},{8,7,4},{6,4,0}};
    int matB[N][N] = {{1, 3,5},{6,2,-3},{2,0,4}};
    int matC[N][N] = {{1,0,0},{0,1,0},{0,0,1}};
    int num_scalar;

    cout << "MATRIX A:" << endl;
    printresult(matA);


    cout << "MATRIX B:" << endl;
    printresult(matB);

    cout << "MATRIX C:" << endl;
    printresult(matC);

    cout << "A*B: " << endl;
    multiply(matA, matB, res);
    printresult(res);

    cout << "B*A: " << endl;
    multiply(matB, matA, res);
    printresult(res);

    cout << "C*B: " << endl;
    multiply(matC, matB, res);
    printresult(res);

    num_scalar= 2;
    cout << "2*A: " << endl;
    multiplybynum(matA, num_scalar, res);
    printresult(res);

    num_scalar= -4;
    cout << "-4*B: " << endl;
    multiplybynum(matB,num_scalar , res);
    printresult(res);

    return 0;
}
