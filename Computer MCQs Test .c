#include <stdio.h>

// Color codes

#define red "\x1b[31m"
#define green "\x1b[32m"
#define yellow "\x1b[33m"
#define blue "\x1b[34m"
#define reset "\x1b[0m"
// 🎮𝕀𝕋𝕩 𝕄.𝕊𝔸𝕄𝔸ℝ🎮

int main()
{

    // DECLARING THE ANSWERS
    int q1, q2, q3, q4, q5;
    int stop = 1;

  

        // header
        printf(yellow);
        printf("\n\n--------- COMPUTER CLASS 10 B TEST OF UNIT NO 3 ---------");
        printf(reset);
        printf(red);
        printf("\nSelect The Best Answer For the following MCQs");
        printf(reset);

//   while (caryyon)
//     {
        // Question no 1
        printf(green);
        printf("\n\ni- Which function is used for output purpose in c language?\n");
        printf(reset);
        printf("\n 1.print()");
        printf("\n 2.scanf()");
        printf("\n 3.input()");
        printf("\n 4.getch()");

        printf("\n\nEnter Your Choice from ( 1 , 2 , 3 or 4) : \n");
        scanf(" %d", &q1);

        if (q1 == 1)
        {
            printf(green);
            printf("\nCongratulations ! Ri8 Answer .");
            printf(reset);
        }
        else
        {
            printf(red);
            printf("ohhh ! wrong Answer .");
            printf(reset);
        }
        // Question no 2
        printf(green);
        printf("\n\nii- Which Character terminate a C statement ? \n");
        printf(reset);
        printf("\n 1.Colon");
        printf("\n 2.Semicolon");
        printf("\n 3.Period");
        printf("\n 4.Comma");

        printf("\n\nEnter Your Choice from ( 1 , 2 , 3 or 4) : \n");
        scanf(" %d", &q2);

        if (q2 == 2)
        {
            printf(green);
            printf("\nCongratulations ! Ri8 Answer .");
            printf(reset);
        }
        else
        {
            printf(red);
            printf("ohhh ! wrong Answer .");
            printf(reset);
        }

        // Question no 3
        // printf(green);
        // printf("\n\niii- Which formate specifier is used to print or read a foloating-point value?\n");
        // printf(reset);
        // printf("\n 1.5%d");
        // printf("\n 2.%i");
        // printf("\n 3.%f");
        // printf("\n 4.%e");

        // printf("\n\nEnter Your Choice from ( 1 , 2 , 3 or 4) : \n");
        // scanf(" %d", &q3);

        // if (q3 == 3)
        // {
        //     printf(green);
        //     printf("\nCongratulations ! Ri8 Answer .");
        //     printf(reset);
        // }
        // else
        // {
        //     printf(red);
        //     printf("ohhh ! wrong Answer .");
        //     printf(reset);
        // }

        // Question no 4
        printf(green);
        printf("\n\niv- Which escape sequence is used to move cursor to the begining of current line ?\n");
        printf(reset);
        printf("\n 1./a");
        printf("\n 2./r");
        printf("\n 3./n");
        printf("\n 4./b");

        printf("\n\nEnter Your Choice from ( 1 , 2 , 3 or 4) : \n");
        scanf(" %d", &q4);

        if (q4 == 2)
        {
            printf(green);
            printf("\nCongratulations ! Ri8 Answer .");
            printf(reset);
        }
        else
        {
            printf(red);
            printf("ohhh ! wrong Answer .");
            printf(reset);
        }

        // Question no 5
        printf(green);
        printf("\n\nV- Which of the following is an arthimetic operator ?\n");
        printf(reset);
        printf("\n1. percent");
        printf("\n2. <=");
        printf("\n3. &&");
        printf("\n4. +=");

        printf("\n\nEnter Your Choice from ( 1 , 2 , 3 or 4) : \n");
        scanf(" %d", &q5);

        if (q5 == 1)
        {
            printf(green);
            printf("\nCongratulations ! Ri8 Answer .");
            printf(reset);
        }
        else
        {
            printf(red);
            printf("ohhh ! wrong Answer .");
            printf(reset);
        }

        printf("\n\n\nPress any key to exit : \n");
       scanf(" %d", stop);
   
    return 0;
}
