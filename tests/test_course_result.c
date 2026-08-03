#include <stdio.h>
#include "course.h"
#include "courseResult.h"

int testCompletedResult()
{
    Course course = createCourse("CSE 4202", "Structured Programming II Lab", 1.5);
    CourseResult result = createCourseResult(&course, 120);

    return result.course == &course;
}

int testCompletedMarks()
{
    Course course = createCourse("CSE 4202", "Structured Programming II Lab", 1.5);
    CourseResult result = createCourseResult(&course, 120);

    return result.marks == 120;
}

int main()
{
    printf("Course result module tests\n");

    int passed = 0;
    int total = 0;

    total++;
    if (testCompletedResult()) passed++;

    total++;
    if (testCompletedMarks()) passed++;

    printf("Passed %d/%d tests\n", passed, total);

    if (passed == total)
        return 0;

    return 1;
}