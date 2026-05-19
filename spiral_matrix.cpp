#include <iostream>
#include <vector>
using namespace std;

int main() {
    int rows, cols;
    cout << "Enter number of rows and columns: ";
    if (!(cin >> rows >> cols)) return 0;

    if (rows <= 0 || cols <= 0) {
        cout << "Invalid matrix size\n";
        return 0;
    }

    vector<vector<int>> matrix(rows, vector<int>(cols));
    cout << "Enter matrix elements:\n";
    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < cols; ++j) {
            cin >> matrix[i][j];
        }
    }

    int top = 0, bottom = rows - 1;
    int left = 0, right = cols - 1;

    cout << "Matrix in spiral form:\n";
    while (top <= bottom && left <= right) {
        for (int j = left; j <= right; ++j) cout << matrix[top][j] << " ";
        ++top;

        for (int i = top; i <= bottom; ++i) cout << matrix[i][right] << " ";
        --right;

        if (top <= bottom) {
            for (int j = right; j >= left; --j) cout << matrix[bottom][j] << " ";
            --bottom;
        }

        if (left <= right) {
            for (int i = bottom; i >= top; --i) cout << matrix[i][left] << " ";
            ++left;
        }
    }

    cout << "\n";
    return 0;
}
