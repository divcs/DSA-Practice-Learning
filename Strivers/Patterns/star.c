// ---------------------------------------------------------- STAR PATTERNS ------------------------------------------------------------
// 1 Pattern

#include <stdio.h>

void starPattern1(int size){
    for (int i=0; i<size; i++){
        for(int j=0; j<size; j++){
            printf("*");
        }
        printf("\n");
    }

}

int main()
{
    int size;
    printf("Enter the size of square star pattern: ");
    scanf("%d", &size);
    printf("Printing first star Pattern:");
    starPattern1(size);

    return 0;
}

//2 Pattern

#include <stdio.h>

void starPattern2(int size){
    for (int i=0; i<size; i++){
        for(int j=0; j<=i; j++){
            printf("*");
        }
        printf("\n");
    }

}

int main()
{
    int size;
    printf("Enter the size of star pattern: ");
    scanf("%d", &size);
    starPattern2(size);

    return 0;
}

// 3 Star Pattern


#include <stdio.h>

void starPattern3(int size){
    for (int i=0; i<=size-1; i++){
       
        for(int j=size-1; j>=i; j--){
             printf("*");
        } printf("\n");
    }

}

int main()
{
    int size;
    printf("Enter the size of number pattern: ");
    scanf("%d", &size);
    starPattern3(size);

    return 0;
}


// diamond star pattern
#include <stdio.h>

void diamond (int size)
{
  for (int i = 0; i < size; i++)
	{
	  for (int j = 0; j < size - i - 1; j++)
		{
		  printf (" ");
		}
	  for (int j = 0; j < 2 * i + 1; j++)
		{
		  printf ("*");
		}
	  for (int j = 0; j < size - i - 1; j++)
		{
		  printf (" ");
		}
		printf("\n");
}}

void inverted_diamond (int size)
{
  for (int i = 0; i < size; i++)
	{
		  for (int j = 0; j < i; j++)
			{
			  printf (" ");
			}
		  for (int j = 0; j < 2 * size - (2 * i + 1); j++)
			{
			  printf ("*");
			}
		  for (int j = 0; j < i; j++)
			{
			  printf (" ");
			}
			printf("\n");
	}
}

int main ()
{
  int size = 5;
//   printf ("Enter the size of star pattern: ");
//   scanf ("%d", &size);
//   printf ("Printing first star Pattern:");
  diamond (size);
  inverted_diamond (size);

  return 0;
}

// right side diamond
#include <stdio.h>

void right_diamond (int size)
{
  for (int i = 0; i < size; i++)
	{
	  for (int j = 0; j <  i + 1; j++)
		{
		  printf ("*");
		}
	  for (int j = 0; j < size - i - 1; j++)
		{
		  printf (" ");
		}
		printf("\n");
}}

void inverted_right_diamond (int size)
{
  for (int i = 0; i < size; i++)
	{
		  for (int j = 0; j < size-i-1; j++)
			{
			  printf ("*");
			}
		  for (int j = 0; j < i+1; j++)
			{
			  printf (" ");
			}
			printf("\n");
	}
}

int main ()
{
  int size = 5;
//   printf ("Enter the size of star pattern: ");
//   scanf ("%d", &size);
//   printf ("Printing first star Pattern:");
  diamond (size);
  inverted_diamond (size);

  return 0;
}



// ----------------------------------------------------------NUMBER PATTERNS ------------------------------------------------------------


// 1 Number Pattern


#include <stdio.h>

void numPattern1(int size){
    for (int i=1; i<=size; i++){
        for(int j=1; j<=i; j++){
            printf("%d", j);
        }
        printf("\n");
    }

}

int main()
{
    int size;
    printf("Enter the size of number pattern: ");
    scanf("%d", &size);
    numPattern1(size);

    return 0;
}

// 2 Number Pattern


#include <stdio.h>

void numPattern2(int size){
    for (int i=1; i<=size; i++){
       
        for(int j=1; j<=i; j++){
             printf("%d",i);
        } printf("\n");
    }

}

int main()
{
    int size;
    printf("Enter the size of number pattern: ");
    scanf("%d", &size);
    numPattern2(size);

    return 0;
}

// 








// num Pattern

#include <stdio.h>

void numPattern(int size){
    for (int i=1; i<size; i++){
       
        for(int j=size; j>=i; j--){
             printf("%d", j);
        } printf("\n");
    }

}

int main()
{
    int size;
    printf("Enter the size of number pattern: ");
    scanf("%d", &size);
    numPattern(size);

    return 0;
}

// 

#include <stdio.h>

void binaryNumPattern(int size){
  int start=1;
    for (int i=1; i<=size; i++){
        for(int j=1; j<=size; j++){

          if(i+j% 2 == 0){
  printf("%d", 1);
          }
          else{
            printf("%d",0);
          }
         
        }
        printf("\n");
    }

}

int main()
{
    int size;
    printf("Enter the size of number pattern: ");
    scanf("%d", &size);
    binaryNumPattern(size);

    return 0;
}

// 
const rows = 5;
for (let i = 1; i <= rows; i++) {
    let row = "";
    for (let j = 1; j <= i; j++) {
        if ((i + j) % 2 === 0) {
            row += "1";
        } else {
            row += "0";
        }
    }
    console.log(row);
}