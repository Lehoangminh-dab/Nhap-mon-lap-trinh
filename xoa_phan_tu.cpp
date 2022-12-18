void XoaPhantu(int* arr, int *length, int index)
 {
     for(int i = index; i < *length - 1; i++)
        arr[i] = arr[i+1];
    *length = *length -1;
 }
 int* reduce(int* arr, int* length, int n)
 {
    while ( n > 0)
    {
        int res = arr[0];
        for ( int i=0 ; i < *length ; i++ )
            if ( res < arr[i])
                res = arr[i];
         for ( int i=0 ; i < *length ; i++ )
            if ( res == arr[i])
                XoaPhantu( arr, length , i);
        n--;
    }
    return arr;
 }




int** inputMatrix(int nRows, int nCols){
    int **matrix = new int*[nRows];
    for(int i = 0; i<nRows; i++)
            matrix[i] = new int[nCols];
    for ( int i=0 ; i < nRows ; i++)
        {for ( int j=0; j < nCols; j++)
            cin >> matrix[i][j];}
    return matrix;
}
void printMatrix(int** matrix, int nRows, int nCols)
{
    for ( int i=0 ; i < nRows ; i++)
        {for ( int j=0; j < nCols; j++)
            cout << matrix[i][j] << " ";
        cout << endl;}
} 
