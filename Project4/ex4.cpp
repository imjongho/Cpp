#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    int matrixA[4][4] = {0};
    int matrixB[4][4] = {0};
    int matrixC[4][4] = {0};

    for (int i = 0; i < 4; i++) {       
        for (int j = 0; j < 4; j++) {
            cout << "Initializing MatrixA[" << i << "][" << j << "] = ";
            cin >> matrixA[i][j];
        }
    }

    cout << endl;
    for (int i = 0; i < 4; i++) {       
        for (int j = 0; j < 4; j++) {
            cout << "Initializing MatrixB[" << i << "][" << j << "] = ";
            cin >> matrixB[i][j];
        }
    }

    cout << endl;
    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 4; j++) {
            for (int k = 0; k < 4; k++) {
                matrixC[i][j] += matrixA[i][k] * matrixB[k][j];
            }
        }
    }

    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 4; j++) {
            cout << setw(5) << matrixC[i][j] << "\t";
        }
        cout << endl;
    }

    return 0;
}