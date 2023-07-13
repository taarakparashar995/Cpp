#include <iostream>
using namespace std;
int main()
{
    
    int a, b, c, d;
    cout << "ENTER THE ORDER OF MATRIX 1 :\n";
    cout << "ENTER m1 : ";
    cin >> a;
    cout << "ENTER n1 : ";
    cin >> b;
    cout << endl;
    cout << "ENTER THE ORDER OF MATRIX 2 :\n";
    cout << "ENTER m2 : ";
    cin >> c;
    cout << "ENTER n2 : ";
    cin >> d;
    cout << endl;
    int matrix_1[a][b];
    int matrix_2[c][d];
    int multiplied[a][d];
    if (b != c)
    {
        cout << "CANT MULTIPLY THE MATRIX AS NUMBER COLUMNS OF 1ST MATRIX  IS NOT EQUAL TO NUMBER OF ROWS OF 2ND MATRIX ! ";
    }
    else
    {
        // for matrix A(entering and displaying):
        for (int i = 1; i <= a; i++)
        {
            for (int j = 1; j <= b; j++)
            {
                cout << "ENTER THE (" << i << "," << j << ") ELEMENT OF THE MATRIX A:";
                cin >> matrix_1[i][j];
            }
        }
        cout << "THE MATRIX (A) AS ENTERED IS :\n";
        cout << endl;
        for (int i = 1; i <= a; i++)
        {
            for (int j = 1; j <= b; j++)
            {

                cout << " " << matrix_1[i][j];
            }
            cout << endl;
        }
        cout << endl;

        // for matrix B(entering and displaying):
        for (int i = 1; i <= c; i++)
        {
            for (int j = 1; j <= d; j++)
            {
                cout << "ENTER THE (" << i << "," << j << ") ELEMENT OF THE MATRIX B:";
                cin >> matrix_2[i][j];
            }
        }
        cout << "THE MATRIX (B) AS ENTERED IS :\n";
        cout << endl;
        for (int i = 1; i <= c; i++)
        {
            for (int j = 1; j <= d; j++)
            {

                cout << " " << matrix_2[i][j];
            }
            cout << endl;
        }
        cout << endl;
        cout << endl;
        cout << endl;

        for (int i = 1; i <= a; i++)
        {
            for (int j = 1; j <= d; j++)
            {
                multiplied[i][j] = 0;
                for (int k = 1; k <= b; ++k)
                {
                    multiplied[i][j] += matrix_1[i][k] * matrix_2[k][j];
                }
            }
        }
        // for displaying the multiplied matrix:
        cout << "THE MULTIPLIED MATRIX IS :\n";
        cout << endl;
        for (int i = 1; i <= a; i++)
        {
            for (int j = 1; j <= d; j++)
            {

                cout << " " << multiplied[i][j];
            }
            cout << endl;
        }
        return 0;
    }
}-
