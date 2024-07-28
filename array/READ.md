# Array notes

## Array Declarations in different languages

1. C/C++: int arr[5];
2. Java: int arr[]
3. Python: import array
   arr = array.array('i') //This array will store integer type elements [b-> char, f-> float]

4. JavaScript:let arr=[]

## Array Initialization in different languages

1. C/C++/Java: int arr[]={1,2,3,4,5}
2. Python:
   import array
   arr= array.array('i',[1,2,3,4,5])
3. JavaScript: let arr=[1,2,3,4,5]

## Types of Array

On the basis of memory allocation: Static and dynamic arrays
On tha basis of dimensions: 1D and multi-dimensional arrays (2d,3d, so on)

Static Arrays: memory allocation at compile time. Examples: above usages
Dynamic Arrays: memory allocation at run time. Examples:

1. C: int* arr= malloc(sizeof(int)*5)
2. C++: int\* arr = new int[5]
3. Java: ArrayList<Integer> arr = new ArrayList<>()
4. Python:arr=[]
5. JavaScript:let arr = new Array(5)

## Operations on Array

1. Array traversal
2. Insertion
3. Deletion
4. Searching
