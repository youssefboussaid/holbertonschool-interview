def rotate_2d_matrix(matrix):

    N = len(matrix)
 
    # Transpose the matrixrix
    for i in range(N):
        for j in range(i):
            temp = matrix[i][j]
            matrix[i][j] = matrix[j][i]
            matrix[j][i] = temp
 
    # swap columns
    for i in range(N):
        for j in range(N // 2):
            temp = matrix[i][j]
            matrix[i][j] = matrix[i][N - j - 1]
            matrix[i][N - j - 1] = temp
    return matrix