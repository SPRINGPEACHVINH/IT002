#include "CMatrix.h"

CMatrix::CMatrix(int numRows, int numColumns) : rows(numRows), columns(numColumns)
{
    data.resize(numRows, vector<double>(numColumns, 0.0));
}

CMatrix::CMatrix(int numRows, int numColumns, const vector<vector<double>> &matrixData)
    : rows(numRows), columns(numColumns), data(matrixData)
{
    if (matrixData.size() != numRows || matrixData[0].size() != numColumns)
    {
        cout << "Kich thuoc ma tran khong khop voi so lieu." << endl;
        data.resize(numRows, vector<double>(numColumns, 0.0));
    }
}

int CMatrix::getRows() const
{
    return rows;
}

int CMatrix::getColumns() const
{
    return columns;
}

double CMatrix::getElement(int row, int column) const
{
    if (row >= 0 && row < rows && column >= 0 && column < columns)
        return data[row][column];
    else
    {
        cout << "Chi so khong hop le." << endl;
        return 0.0;
    }
}

void CMatrix::setElement(int row, int column, double value)
{
    if (row >= 0 && row < rows && column >= 0 && column < columns)
        data[row][column] = value;
    else
        cout << "Chi so khong hop le." << endl;
}

CVector CMatrix::getColumnVector(int column) const
{
    if (column >= 0 && column < columns)
    {
        vector<double> columnData(rows);
        for (int i = 0; i < rows; i++)
        {
            columnData[i] = data[i][column];
        }
        return CVector(rows, columnData);
    }
    else
    {
        cout << "Chi so cot khong hop le." << endl;
        return CVector(0);
    }
}

void CMatrix::setColumnVector(int column, const CVector &vector)
{
    if (column >= 0 && column < columns && vector.getDimension() == rows)
    {
        for (int i = 0; i < rows; i++)
        {
            data[i][column] = vector.getComponent(i);
        }
    }
    else
    {
        cout << "Chi so cot khong hop le hoac kich thuoc vector khong khop." << endl;
    }
}

CVector CMatrix::operator*(const CVector &vector) const
{
    if (columns != vector.getDimension())
    {
        cout << "Chi so cot cua ma tran khong khop voi so chieu cua vector." << endl;
        return CVector(0);
    }

    std::vector<double> resultData(rows, 0.0);
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < columns; j++)
        {
            resultData[i] += data[i][j] * vector.getComponent(j);
        }
    }

    return CVector(rows, resultData);
}

CMatrix CMatrix::operator*(const CMatrix &matrix) const
{
    if (columns != matrix.rows)
    {
        cout << "So cot va hang cua 2 ma tran khong khop." << endl;
        return CMatrix(0, 0);
    }

    int resultRows = rows;
    int resultColumns = matrix.columns;
    vector<vector<double>> resultData(resultRows, vector<double>(resultColumns, 0.0));

    for (int i = 0; i < resultRows; i++)
    {
        for (int j = 0; j < resultColumns; j++)
        {
            for (int k = 0; k < columns; k++)
            {
                resultData[i][j] += data[i][k] * matrix.data[k][j];
            }
        }
    }

    return CMatrix(resultRows, resultColumns, resultData);
}

istream &operator>>(istream &is, CMatrix &matrix)
{
    int rows = matrix.getRows();
    int columns = matrix.getColumns();

    cout << "Nhap gia tri cho ma tran:" << endl;
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < columns; j++)
        {
            double value;
            cout << "Nhap phan tu [" << i << "][" << j << "]: ";
            cin >> value;
            matrix.setElement(i, j, value);
        }
    }

    return is;
}

ostream &operator<<(ostream &os, const CMatrix &matrix)
{
    for (int i = 0; i < matrix.rows; i++)
    {
        for (int j = 0; j < matrix.columns; j++)
        {
            os << matrix.data[i][j] << " ";
        }
        os << endl;
    }
    return os;
}