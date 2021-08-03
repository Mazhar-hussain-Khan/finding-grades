/* Mazhar Hussain     Registration No: 20MDELE098
20Mdele098@uetmardan.edu.pk */
#include <stdio.h>
int main()
{   int physics, chemistry, english, maths, computerscience;//declaring subjects names
    float percentage; //declaring percntage
    printf("Enter five subjects marks out of 100:\n ");// Input marks of five subjects from user //
    scanf("%d %d %d %d %d", &physics, &chemistry, &english, &maths, &computerscience);//saving subjects marks 
    percentage = (physics + chemistry + english + maths + computerscience)*100/500;// Calculate percentage //
    printf("Percentage = %.2f\n", percentage);//dispalying percentage
    if ((percentage<0)|| (percentage>100))
    printf("wrong marks entered\n");
    else if(percentage >= 90)    // Find grade according to the percentage //
    { printf("Grade A+");}
    else if(percentage >= 80)    // Find grade according to the percentage //
    {printf("Grade A");}
    else if(percentage >= 70)    // Find grade according to the percentage //
    {printf("Grade B");}
    else if(percentage >= 60)    // Find grade according to the percentage //
    {printf("Grade C");
    }else if(percentage >= 50)    // Find grade according to the percentage //
    { printf("Grade D");}
    else
    {printf("Grade F");}    // Find grade according to the percentage //
    return 0;
}
