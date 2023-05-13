// #include<stdio.h>
// #include<conio.h>
// int i,j;

// int main()
// {
// 	for( i=1;i<=5;i++){      
// 		for(j=1;j<=i;j++){       
// 			printf("%d",j);
// 		}
// 		printf("\n");
// }
// return 0;
// }



// #include <stdio.h>

// int main() {
//     int rows = 5;

//     for (int i = 1; i <= rows; i++) {
//         for (int j = rows; j > i; j--) {
//             printf("  ");
//         }
//         for (int k = 1; k <= i; k++) {
//             printf("* ");
//         }
//         printf("\n");
//     }

// return 0;
// }




// #include <stdio.h>

// int main() {
//     int rows = 5;

//     for (int i = 1; i <= rows; i++) {
//         for (int j = rows; j > i; j--) {
//             printf(" ");
//         }
//         for (int k = 1; k <= i; k++) {
//             printf("* ");
//         }
//         printf("\n");
//     }

//     for (int i = rows - 1; i >= 1; i--) {
//         for (int j = rows; j > i; j--) {
//             printf(" ");
//         }
//         for (int k = 1; k <= i; k++) {
//             printf("* ");
//         }
//         printf("\n");
//     }

// return 0;
// }





// #include <stdio.h>

// int main() {
//     int rows = 5;

//     for (int i = 1; i <= rows; i++) {
//         for (int j = 1; j < i; j++) {
//             printf(" ");
//         }
//         for (int k = 1; k <= (rows - i + 1) * 2 - 1; k++) {
//             printf("*");
//         }
//         printf("\n");
//     }

//     for (int i = rows - 1; i >= 1; i--) {
//         for (int j = 1; j < i; j++) {
//             printf(" ");
//         }
//         for (int k = 1; k <= (rows - i + 1) * 2 - 1; k++) {
//             printf("*");
//         }
//         printf("\n");
//     }

// return 0;
// }




// #include <stdio.h>

// int main() {
//     int rows = 5;
//     int spaces = rows - 1;

//     for (int i = 1; i <= rows; i++) {
//         for (int j = 1; j <= spaces; j++) {
//             printf(" ");
//         }
//         spaces--;

//         for (int k = 1; k <= 2 * i - 1; k++) {
//             printf("*");
//         }
//         printf("\n");
//     }

// return 0;
// }




// #include <stdio.h>

// int main() {
//     int rows = 5;

//     for (int i = 1; i <= rows; i++) {
//         for (int j = 1; j <= i; j++) {
//             printf("* ");
//         }
//         printf("\n");
//     }
// return 0;
// }



// #include <stdio.h>

// int main() {
//     int rows = 5;

//     for (int i = 1; i <= rows; i++) {
//         for (int j = 1; j <= rows; j++) {
//             if (i == 1 || i == rows || j == 1 || j == rows) {
//                 printf("* ");
//             } else {
//                 printf("  ");
//             }
//         }
//         printf("\n");
//     }

// return 0;
// }



#include <stdio.h>

int main() {
    int rows = 5;

    for (int i = rows; i >= 1; i--) {
        for (int j = 1; j <= i; j++) {
            printf("* ");
        }
        printf("\n");
    }

return 0;
}









