#include "gpa.h"

const double gradeBoundaries[] = {80, 75, 70, 65, 60, 55, 50, 45, 40};
const double gradePoints[] = {4.00, 3.75, 3.50, 3.25, 3.00, 2.75, 2.50, 2.25, 2.00};
const char *gradeLetters[] = {
    "A+",
    "A",
    "A-",
    "B+",
    "B",
    "B-",
    "C+",
    "C",
    "D"
};

double getGradePoint(CourseResult result)
{
    double percentage = result.marks / result.course->credit;

    for (int i = 0; i < 9; i++)
    {
        if (percentage >= gradeBoundaries[i])
            return gradePoints[i];
    }

    return 0.00;
}

char *getLetterGrade(CourseResult result)
{
    double percentage = result.marks / result.course->credit;

    for (int i = 0; i < 9; i++)
    {
        if (percentage >= gradeBoundaries[i])
            return (char *)gradeLetters[i];
    }

    return "F";
}

double calculateGPA(CourseResult results[], int n_results)
{
    double totalGradePoints = 0;
    double totalCredits = 0;

    for (int i = 0; i < n_results; i++)
    {
        totalGradePoints += getGradePoint(results[i]) * results[i].course->credit;
        totalCredits += results[i].course->credit;
    }

    return totalGradePoints / totalCredits;
}