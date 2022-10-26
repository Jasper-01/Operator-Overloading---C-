#include "Matrix.h"

Matrix::Matrix() {
    n = size;
    m = size;

    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            M[i][j] = rand() % 5 + 1;
        }
    }
}

Matrix::Matrix(int a, int b){
    n = a;
    m = b;
    M[n][m];

    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            M[i][j] = rand() % 5 + 1;
        }
    }
}

// set specific value
void Matrix::setValue(int i, int j, int value){
    M[i][j] = value;
}

// get specific value
int Matrix::getValue(int i, int j){
    return M[i][j];
}

Matrix Matrix::transpose(){
    cout << "Transpose of Matrix:" << endl;

    Matrix MT(m, n);

    for(int i = 0; i < m; i++){
        for(int j = 0; j < n; j++){
            MT.setValue(i, j, M[j][i]);
        }
    }

    return MT;
}

void Matrix::show(){
    cout << "Matrix show" << endl;
    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            cout << M[i][j] << ", ";
        }
        cout << endl;
    }
}

// overloading binary operators
Matrix operator+(Matrix M1, Matrix M2){
    Matrix tempM(M1.get_n(), M2.get_m());
    for(int i = 0; i < tempM.get_n(); i++){
        for(int j = 0; j < tempM.get_m(); j++){
            tempM.setValue(i, j, (M1.getValue(i,j)+M2.getValue(i,j)));
        }
    }
    return tempM;
}

Matrix operator*(Matrix M1, Matrix M2){
    Matrix tempM(M1.get_n(), M2.get_m());
    for(int i = 0; i < tempM.get_n(); i++){
        for(int j = 0; j < tempM.get_m(); j++){
            tempM.setValue(i, j, (M1.getValue(i,j)*M2.getValue(i,j)));
        }
    }
    return tempM;
}

bool operator==(Matrix M1, Matrix M2){
    for(int i = 0; i < M1.get_n(); i++){
        for(int j = 0; j < M1.get_m(); j++){
            if(M1.getValue(i, j) != M2.getValue(i, j)){
                return false;
            }
        }
    }
    return true;
}