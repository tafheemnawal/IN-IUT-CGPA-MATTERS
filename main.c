 #include"course.h"

 int main()
 {
 Course courses[1000];
 int n_courses=0;

 courses[n_courses++]=createCourse("CSE4107","StructuredProgrammingI",3.0);
 courses[n_courses++]=createCourse("CSE4108","StructuredProgrammingILab",1.5);
 courses[n_courses++]=createCourse("CSE4203","DiscreteMathematics",3.0);

 for(int i=0;i<n_courses;i++)
 {
 viewCourse(courses[i]);
 }

 return 0;
 }