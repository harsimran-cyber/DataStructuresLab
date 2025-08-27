'''
Space required to store any two-dimensional array is:
rows × columns
When matrices have special structures, we can store only the non-zero elements to save
space.
(a) Diagonal Matrix:
A diagonal matrix has non-zero elements only on its main diagonal.
Instead of storing all elements, we store only the n diagonal elements in a
one-dimensional array.
Space required: n
(b) Tri-diagonal Matrix:
A tri-diagonal matrix has non-zero elements only on the main diagonal, and the diagonals
just above and below it.
We store these 3n - 2 elements in a one-dimensional array.
Space required: 3n - 2
(c) Lower Triangular Matrix:
A lower triangular matrix has non-zero elements on and below the main diagonal.
We store only n(n+1)/2 elements in a one-dimensional array.
Space required: n(n+1)/2
(d) Upper Triangular Matrix:
An upper triangular matrix has non-zero elements on and above the main diagonal.
We store only n(n+1)/2 elements in a one-dimensional array.
Space required: n(n+1)/2
(e) Symmetric Matrix:
A symmetric matrix has the property that element at (i,j) is equal to element at (j,i).
We store only the lower (or upper) triangular part, including the diagonal.
Space required: n(n+1)/2
