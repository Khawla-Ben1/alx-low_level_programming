import random
import ctypes

# Load the shared library
cops = ctypes.CDLL('./100-operations.so')

# Define argument and return types for each function
cops.add.restype = ctypes.c_int
cops.sub.restype = ctypes.c_int
cops.mul.restype = ctypes.c_int
cops.div.restype = ctypes.c_int
cops.mod.restype = ctypes.c_int

# Optionally define argument types if needed
cops.add.argtypes = [ctypes.c_int, ctypes.c_int]
cops.sub.argtypes = [ctypes.c_int, ctypes.c_int]
cops.mul.argtypes = [ctypes.c_int, ctypes.c_int]
cops.div.argtypes = [ctypes.c_int, ctypes.c_int]
cops.mod.argtypes = [ctypes.c_int, ctypes.c_int]

# Generate random numbers
a = random.randint(-111, 111)
b = random.randint(-111, 111)

# Call functions and print results
print("{} + {} = {}".format(a, b, cops.add(a, b)))
print("{} - {} = {}".format(a, b, cops.sub(a, b)))
print("{} x {} = {}".format(a, b, cops.mul(a, b)))
print("{} / {} = {}".format(a, b, cops.div(a, b)))
print("{} % {} = {}".format(a, b, cops.mod(a, b)))
