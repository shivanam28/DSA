'''Given an m x n integer matrix matrix, if an element is 0, set its entire row and column to 0's.
You must do it in place.

SOLUTION BELOW!!

setZeroes2: The algorithm uses additional space to keep track of rows and columns that need to be zeroed
setZeroes1: This approach ensures that the matrix is modified in-place with O(1) additional space, as required.
'''

def setZeroes2(matrix):
        if not matrix:
            return []
        m = len(matrix)
        n = len(matrix[0])
        rowzero = [False] * m
        colzero = [False] * n
        for row in range(m):
            for col in range(n):
                if matrix[row][col] == 0:
                    rowzero[row] = True
                    colzero[col] = True
        for row in range(m):
            for col in range(n):
                if rowzero[row] or colzero[col]:
                    matrix[row][col] = 0

def setZeroes1(matrix):
    rows, cols = len(matrix), len(matrix[0])
    rowZero = False
    colZero = False

    # Determine if the first row or first column needs to be zeroed
    for r in range(rows):
        if matrix[r][0] == 0:
            colZero = True
            break

    for c in range(cols):
        if matrix[0][c] == 0:
            rowZero = True
            break

    # Use first row and first column to mark zero rows and columns
    for r in range(1, rows):
        for c in range(1, cols):
            if matrix[r][c] == 0:
                matrix[r][0] = 0
                matrix[0][c] = 0

    # Zero out cells based on markers
    for r in range(1, rows):
        for c in range(1, cols):
            if matrix[r][0] == 0 or matrix[0][c] == 0:
                matrix[r][c] = 0

    # Zero out the first column if needed
    if colZero:
        for r in range(rows):
            matrix[r][0] = 0

    # Zero out the first row if needed
    if rowZero:
        for c in range(cols):
            matrix[0][c] = 0


matrix = [
    [1, 1, 1],
    [1, 0, 1],
    [1, 1, 1]
]

print("Original matrix:", matrix)


# setZeroes1(matrix)  uncomment this to use this function
# print(matrix)
setZeroes2(matrix)
print(matrix)
