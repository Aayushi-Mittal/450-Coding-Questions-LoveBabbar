# Matrices
A matrix represents a collection of numbers arranged in order of rows and columns. 

``
dataType matrixName[numberOfRows][numberOfColumns];
dataType matrixName[] = {{1, 2, 3, 4, ... n}, {1, 2, 3, ... n}, ... m};
``

## Properties of Matrices

Properties of transpose of a matrix:
- (AT)T = A
- (A+B)T = AT + BT
- (AB)T = BTAT

Properties of Matrix addition and multiplication:
- A+B = B+A (Commutative)
- (A+B)+C = A+ (B+C) (Associative)
- AB ≠ BA (Not Commutative)
- (AB) C = A (BC) (Associative)
- A (B+C) = AB+AC (Distributive)

## Types Of Matrices
- Square Matrix: A square Matrix has as many rows as it has columns. i.e. no of rows = no of columns.
- Symmetric matrix: A square matrix is said to be symmetric if the transpose of original matrix is equal to its original matrix. i.e. (AT) = A.
- Skew-symmetric: A skew-symmetric (or antisymmetric or antimetric[1]) matrix is a square matrix whose transpose equals its negative.i.e. (AT) = -A.
- Diagonal Matrix:A diagonal matrix is a matrix in which the entries outside the main diagonal are all zero. The term usually refers to square matrices.
- Identity Matrix:A square matrix in which all the elements of the principal diagonal are ones and all other elements are zeros.Identity matrix is denoted as I.
- Orthogonal Matrix: A matrix is said to be orthogonal if AAT = ATA = I.
- Idemponent Matrix: A matrix is said to be idemponent if A2 = A.
- Involutary Matrix: A matrix is said to be Involutary if A2 = I.
- Singular Matrix: A square matrix is said to be singular matrix if its determinant is zero i.e. |A|=0
- Nonsingular Matrix: A square matrix is said to be non-singular matrix if its determinant is non-zero.
- Upper Triangular
- Lower Triangular

## Related Topics:
- Insertion and Deletion in matrices. 
- Searching an Element.
- Operations on Matrix
    - Addition
    - Subtraction
    - Multiplication
    - Strassens Multiplication (https://www.interviewbit.com/blog/strassens-matrix-multiplication/)
- Transpose of a Matrix. ``O(n)``
- Inverse Of a matrix. ``O(n)``
- Rotation of Matrices.
- 2D Vectors (STL)
- Traversal (Diagonal, Spiral, etc.)
- BFS
- DFS