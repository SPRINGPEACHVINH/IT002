#include "CMatrix.cpp"

int main()
{
    int vectorDimension;
    cout << "Nhap so chieu cua vector: ";
    cin >> vectorDimension;

    CVector vector(vectorDimension);
    cout << "Nhap gia tri cho vector:" << '\n';
    cin >> vector;

    int matrixARows, matrixAColumns;
    cout << "Nhap so hang cua ma tran A: ";
    cin >> matrixARows;
    cout << "Nhap so cot cua ma tran A: ";
    cin >> matrixAColumns;

    CMatrix matrixA(matrixARows, matrixAColumns);
    cout << "Nhap gia tri cho ma tran A:" << '\n';
    cin >> matrixA;

    int matrixBRows, matrixBColumns;
    cout << "Nhap so hang cua ma tran B: ";
    cin >> matrixBRows;
    cout << "Nhap so cot cua ma tran B: ";
    cin >> matrixBColumns;

    CMatrix matrixB(matrixBRows, matrixBColumns);
    cout << "Nhap gia tri cho ma tran B:" << '\n';
    cin >> matrixB;

    cout << "Vector v:" << '\n';
    cout << vector << '\n';

    cout << "Ma tran A:" << '\n';
    cout << matrixA << '\n';

    cout << "Ma tran B:" << '\n';
    cout << matrixB << '\n';

    CVector resultVector = matrixA * vector;
    cout << "Tich cua ma tran A va vector v:" << '\n';
    cout << resultVector << '\n';

    if (matrixAColumns != matrixBRows)
    {
        cout << "Khong the nhan hai ma tran voi so cot cua ma tran A khac so hang cua ma tran B." << '\n';
        return 0;
    }

    CMatrix resultMatrix = matrixA * matrixB;
    cout << "Tich cua hai ma tran:" << '\n';
    cout << resultMatrix << '\n';

    return 0;
}