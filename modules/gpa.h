#ifndef GPA_H
#define GPA_H

#include "courseResult.h"

extern const double gradeBoundaries[];

double getGradePoint(CourseResult result);
char *getLetterGrade(CourseResult result);

double calculateGPA(
    CourseResult results[],
    int n_results
);

double calculateRequiredGPA(
    double currentCGPA,
    double completedCredits,
    double targetCGPA,
    double remainingCredits
);

double calculateExpectedCGPA(
    double currentCGPA,
    double completedCredits,
    double expectedGPA,
    double futureCredits
);

#endif