/* #include <stdio.h>
#include <stdlib.h>
//int BMI(int a,int b);
struct personal_info
{
    char name[200];
    int age ;
    float height,weight,BMI;

};
float BMI(float a,float b)
{
    float c;
    a*=0.3048;
    c=b/(a*a);
    return c;

}
int main()
{
    //struct personal_info p1;
    int n,i;
    printf("enter the no of persons information to be added");
    scanf("%d",&n);
    struct personal_info no[n];
    for(i=0;i<n;i++)
    {

    printf("Enter name[%d]; ",i);
    scanf("%199s",no[i].name);
    printf("Enter your age[%d]: ",i);
    scanf("%d",&no[i].age);
    printf("Enter your height[%d]: ",i);
    scanf("%f",&no[i].height);
    printf("Enter your weight[%d]: ",i);
    scanf("%f",&no[i].weight);
    no[i].BMI = BMI(no[i].height,no[i].weight);
    }
    for(i=0;i<n;i++)
    {
      printf("Hey %s for your age %d the calculated BMI is %.2f\n",no[i].name,no[i].age,no[i].BMI);
    }

    return 0;

}*/
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main()
{
    char ch, str[20], str1[200];

    scanf("%c", &ch);
    getchar();  // consume the leftover newline after the character

    scanf("%s", str);
    getchar();  // consume newline after str

    scanf("%[^\n]", str1);  // read the rest of the line including spaces

    printf("%c\n", ch);
    printf("%s\n", str);
    printf("%s", str1);

    return 0;
}

