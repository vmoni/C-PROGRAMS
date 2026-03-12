//#include <stdio.h>
//#include <stdlib.h>
//
//int main()
//{
//  int age,exp;
//  printf("enter your age\n");
//  scanf("%d",&age);
//  printf("enter your experience\n");
//  scanf("%d",&exp);
//  if(age<30 && exp > 3 )
//  {
//      printf("you are hired for the job\n");
//  }
//  else if (age<30 && exp < 3 )
//  {
//     printf("you are hired for the intern\n");
//  }
//    else if (age >30 && exp > 3 )
//  {
//     printf("you are over qualified\n");
//  }
//  else
//  {
//     printf("you dont meet the requirements\n");
//  }
//  return 0;
//}


#include <stdio.h>
#include <stdlib.h>

int main() {
    int age, exp, choice;

    printf("Enter your age: ");
    scanf("%d", &age);
    printf("Enter your experience: ");
    scanf("%d", &exp);


    if (age < 30 && exp > 3)
        choice = 1;
    else if (age < 30 && exp <= 3)
        choice = 2;
    else if (age >= 30 && exp > 3)
        choice = 3;
    else
        choice = 4;

    switch (choice) {
        case 1:
            printf("You are hired for the job\n");
            break;
        case 2:
            printf("You are hired for the intern\n");
            break;
        case 3:
            printf("You are over qualified\n");
            break;
        case 4:
            printf("You don't meet the requirements\n");
            break;
        default:
            printf("Invalid input\n");
    }

    return 0;
}


