#include "CVector.cpp"

class CMatrix
{
private:
    int rows;
    int columns;
    vector<vector<double>> data;

public:
    CMatrix(int numRows, int numColumns);
    CMatrix(int numRows, int numColumns, const vector<vector<double>> &matrixData);

    int getRows() const;
    int getColumns() const;

    double getElement(int row, int column) const;
    void setElement(int row, int column, double value);

    CVector getColumnVector(int column) const;
    void setColumnVector(int column, const CVector &vector);

    CVector operator*(const CVector &vector) const;
    CMatrix operator*(const CMatrix &matrix) const;
    
    friend istream &operator>>(istream &is, CMatrix &matrix);
    friend ostream &operator<<(ostream &os, const CMatrix &matrix);
};