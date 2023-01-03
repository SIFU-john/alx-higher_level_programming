>>> matrix_divided = __import__("2-matrix_divided").matrix_divided
>>> matrix = [[1, 2, 3], [4, 5, 6]]

>>> print(matrix_divided(matrix, 2))
[[0.5, 1.0, 1.5], [2.0, 2.5, 3.0]]

>>> print(matrix_divided(matrix, -5))
[[-0.2, -0.4, -0.6], [-0.8, -1.0, -1.2]]

>>> print(matrix_divided(matrix, 6.9))
[[0.14, 0.29, 0.43], [0.58, 0.72, 0.87]]

>>> print(matrix_divided(matrix, 3))
[[0.33, 0.67, 1.0], [1.33, 1.67, 2.0]]

>>> print(matrix_divided(matrix, True))
[[1.0, 2.0, 3.0], [4.0, 5.0, 6.0]]

>>> print(matrix_divided(matrix, float("inf")))
[[0.0, 0.0, 0.0], [0.0, 0.0, 0.0]]

>>> matrix = [[1, 2, 3]]
>>> print(matrix_divided(matrix, 1))
[[1.0, 2.0, 3.0]]

"""
Error
"""

>>> print(matrix_divided(matrix, None))
Traceback (most recent call last):
...
TypeError: div must be a number

>>> print(matrix_divided(matrix, 0))
Traceback (most recent call last):
...
ZeroDivisionError: division by zero

>>> print(matrix_divided(matrix, False))
Traceback (most recent call last):
...
ZeroDivisionError: division by zero

>>> matrix = []
>>> print(matrix_divided(matrix, 2))
Traceback (most recent call last):
...
TypeError: matrix must be a matrix (list of lists) of integers/floats

>>> matrix = [[]]
>>> print(matrix_divided(matrix, 2))
Traceback (most recent call last):
...
TypeError: matrix must be a matrix (list of lists) of integers/floats

>>> matrix = None
>>> print(matrix_divided(matrix, 2))
Traceback (most recent call last):
...
TypeError: matrix must be a matrix (list of lists) of integers/floats


>>> matrix = [[1, 2, 3], [4, 5, 6], {7, 8, 9}]
>>> print(matrix_divided(matrix, 2))
Traceback (most recent call last):
...
TypeError: matrix must be a matrix (list of lists) of integers/floats

>>> matrix = [[1, 2, 3], [4, 5, 6, 7]]
>>> print(matrix_divided(matrix, 2))
Traceback (most recent call last):
...
TypeError: Each row of the matrix must have the same size

>>> matrix = [[1, "eek", 'a'], ["mouse", 5, 6]]
>>> print(matrix_divided(matrix, 2))
Traceback (most recent call last):
...
TypeError: matrix must be a matrix (list of lists) of integers/floats

>>> matrix = [[1, 2, 3], 4, 5, 6]
>>> print(matrix_divided(matrix, 1))
Traceback (most recent call last):
...
TypeError: matrix must be a matrix (list of lists) of integers/floats

>>> print(matrix_divided(matrix, 3, 5))
Traceback (most recent call last):
...
TypeError: matrix_divided() takes 2 positional arguments but 3 were given
