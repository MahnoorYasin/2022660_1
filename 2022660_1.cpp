#include<iostream>
using namespace std;

struct Address  //structure for address
{
    int house_no;
    string city;
    string country;
};

enum Edu_level{matric,intermediate,bachelor,master,phd}; //enum for education level
struct Person  //structure for person
{
   string name;
   int age;
   Address addr;
   Edu_level edu;
};

enum Department{FME,FMCE,FCSE,FES,FEE};   //enum for department 
struct Student //structure for student
{
   int roll_no;
   Person p_s;
   Department d_s;
};
struct Admin //structure for admin
{
   Person p_a;
   long salary;
};
struct Course //structure for course
{
   string c_name;
   string c_code;
   string t_name;
   int enrolled_student[];
   int dropped_student[];
   int graded_student[];
};

enum std_grade{A,B,C,D,F};  //enum for student grade
struct Grade //structure for grade
{
   int marks;
   std_grade grade;
};
struct Teacher  //structure for teacher
{
   Person p_t;
   long salary;
   Department d_t;
};
void add_student(Student s1) //function for adding student
{
    int x1,x0;
    cout<<"Add its details"<<endl;
    
       cout<<"Name:"<<endl;
       cin>>s1.p_s.name;
       cout<<"Age:"<<endl;
       cin>>s1.p_s.age;
       cout<<"Roll No:"<<endl;
       cin>>s1.roll_no;
       cout<<"Address: house no , city , country"<<endl;
       cin>>s1.p_s.addr.house_no;
       cin>>s1.p_s.addr.city;
       cin>>s1.p_s.addr.country;
    cout<<"Enter his educational level"<<endl;
    cout<<"matric=0,intermediate=1,bachelor=2,master=3,phd=4"<<endl;
        cin>>x1;
        switch(x1)
       {
         case 0:
          {cout<<"matric"<<endl;
          break;}
        case 1:
          {cout<<"intermediate"<<endl;
          break;}  
        case 2:
          {cout<<"bachelor"<<endl;
          break;}
        case 3:
          {cout<<"master"<<endl;
          break;}
        case 4:
          {cout<<"phd"<<endl;
          break;}        
       }
       cout<<"Enter his/her department"<<endl;
       cout<<"FME=0,FMCE=1,FCSE=2,FES=3,FEE=4"<<endl;
        cin>>x0;
        switch(x0)
       {
         case 0:
          {cout<<" department is FME"<<endl;
          break;}
         case 1:
          {cout<<" department is FMCE"<<endl;
          break;}  
        case 2:
          {cout<<" department is FCSE"<<endl;
          break;}
        case 3:
          {cout<<" department is FES"<<endl;
          break;}
        case 4:
          {cout<<" department is FEE"<<endl;
          break;} }} 


void remove_student(Student s1) //function for removing student
{
    int x1,x0;
      cout<<"Remove a student"<<endl;
       cout<<"Name:"<<endl;
       cin>>s1.p_s.name;
       cout<<"Age:"<<endl;
       cin>>s1.p_s.age;
       cout<<"Roll No:"<<endl;
       cin>>s1.roll_no;
       cout<<"Address:house no , city , country"<<endl;
       cin>>s1.p_s.addr.house_no;
       cin>>s1.p_s.addr.city;
       cin>>s1.p_s.addr.country;
    cout<<"Enter his educational level"<<endl;
    cout<<"matric=0,intermediate=1,bachelor=2,master=3,phd=4"<<endl;
        cin>>x1;
        switch(x1)
       {
         case 0:
          {cout<<"matric"<<endl;
          break;}
        case 1:
          {cout<<"intermediate"<<endl;
          break;}  
        case 2:
          {cout<<"bachelor"<<endl;
          break;}
        case 3:
          {cout<<"master"<<endl;
          break;}
        case 4:
          {cout<<"phd"<<endl;
          break;}        
       }
       cout<<"Enter his/her department"<<endl;
       cout<<"FME=0,FMCE=1,FCSE=2,FES=3,FEE=4"<<endl;
        cin>>x0;
        switch(x0)
       {
         case 0:
          {cout<<" department is FME"<<endl;
          break;}
         case 1:
          {cout<<" department is FMCE"<<endl;
          break;}  
        case 2:
          {cout<<" department is FCSE"<<endl;
          break;}
        case 3:
          {cout<<" department is FES"<<endl;
          break;}
        case 4:
          {cout<<" department is FEE"<<endl;
          break;}  } 
          cout<<"successfully removed"<<endl;
          }
          

void update_details(Student* s1) //function for updating details of student
{
    int x1,x0;
    cout<<"Update details of a student"<<endl;
       cout<<"Name:"<<endl;
       cin>>s1->p_s.name;
       cout<<"Age:"<<endl;
       cin>>s1->p_s.age;
       cout<<"Roll No:"<<endl;
       cin>>s1->roll_no;
       cout<<"Address:house no , city , country"<<endl;
       cin>>s1->p_s.addr.house_no;
       cin>>s1->p_s.addr.city;
       cin>>s1->p_s.addr.country;
    cout<<"Enter his educational level"<<endl;
    cout<<"matric=0,intermediate=1,bachelor=2,master=3,phd=4"<<endl;
        cin>>x1;
        switch(x1)
       {
         case 0:
          {cout<<"matric"<<endl;
          break;}
        case 1:
          {cout<<"intermediate"<<endl;
          break;}  
        case 2:
          {cout<<"bachelor"<<endl;
          break;}
        case 3:
          {cout<<"master"<<endl;
          break;}
        case 4:
          {cout<<"phd"<<endl;
          break;}        
       }
       cout<<"Enter his/her department"<<endl;
       cout<<"FME=0,FMCE=1,FCSE=2,FES=3,FEE=4"<<endl;
        cin>>x0;
        switch(x0)
       {
         case 0:
          {cout<<" department is FME"<<endl;
          break;}
         case 1:
          {cout<<" department is FMCE"<<endl;
          break;}  
        case 2:
          {cout<<" department is FCSE"<<endl;
          break;}
        case 3:
          {cout<<" department is FES"<<endl;
          break;}
        case 4:
          {cout<<" department is FEE"<<endl;
          break;}  } 
          cout<<"successfully updated"<<endl;
          }

void check_record(Student s1[],int sie) //function for checking record
{
    int x1,x0;
    for(int i=0;i<sie;i++)
    {cout<<"Add its details"<<endl;
       cout<<"Name:"<<endl;
       cin>>s1[i].p_s.name;
       cout<<"Age:"<<endl;
       cin>>s1[i].p_s.age;
       cout<<"Roll No:"<<endl;
       cin>>s1[i].roll_no;
       cout<<"Address:house no , city , country"<<endl;
       cin>>s1[i].p_s.addr.house_no;
       cin>>s1[i].p_s.addr.city;
       cin>>s1[i].p_s.addr.country;
    cout<<"Enter his educational level"<<endl;
    cout<<"matric=0,intermediate=1,bachelor=2,master=3,phd=4"<<endl;
        cin>>x1;
        switch(x1)
       {
         case 0:
          {cout<<"matric"<<endl;
          break;}
        case 1:
          {cout<<"intermediate"<<endl;
          break;}  
        case 2:
          {cout<<"bachelor"<<endl;
          break;}
        case 3:
          {cout<<"master"<<endl;
          break;}
        case 4:
          {cout<<"phd"<<endl;
          break;}        
       }
       cout<<"Enter his/her department"<<endl;
       cout<<"FME=0,FMCE=1,FCSE=2,FES=3,FEE=4"<<endl;
        cin>>x0;
        switch(x0)
       {
         case 0:
          {cout<<" department is FME"<<endl;
          break;}
         case 1:
          {cout<<" department is FMCE"<<endl;
          break;}  
        case 2:
          {cout<<" department is FCSE"<<endl;
          break;}
        case 3:
          {cout<<" department is FES"<<endl;
          break;}
        case 4:
          {cout<<" department is FEE"<<endl;
          break;} }}
    for(int j=0;j<sie;j++)
    {cout<<"the record of the student is "<<endl;
     cout<<"Name:"<<s1[j].p_s.name<<endl;
     cout<<"Age:"<<s1[j].p_s.age<<endl;
     cout<<"Roll No:"<<s1[j].roll_no<<endl;
     cout<<"Address:house no , city , country"<<s1[j].p_s.addr.house_no<<" "<<s1[j].p_s.addr.city<<" "<<s1[j].p_s.addr.country<<endl;}

}

void unenrolled_student(Student* s1) //function for unerolling student
{
    Course c;
    cout<<"Enter course"<<endl;
    cin>>c.c_name;
    cin>>c.c_code;
    cin>>c.t_name;
     cout<<"Name: ";
     cin>>s1->p_s.name;
     cout<<"Age: ";
     cin>>s1->p_s.age;
     cout<<"Roll no:";
     cin>>s1->roll_no;
     cout<<"the student namely "<<s1->p_s.name<<" has the age and the roll no "<<s1->p_s.age<<" "<<s1->roll_no<<" is removed from the course namely "<<c.c_name<<c.c_code<<" which is taught by the "<<c.t_name<<endl;
    }

void add_teacher(Teacher t1) //function for adding teacher
{
    int x0;
    cout<<"Add its details"<<endl;
       cout<<"Name:"<<endl;
       cin>>t1.p_t.name;
       cout<<"Age:"<<endl;
       cin>>t1.p_t.age;
       cout<<"Salary:"<<endl;
       cin>>t1.salary;
       cout<<"Address:house no , city , country"<<endl;
       cin>>t1.p_t.addr.house_no;
       cin>>t1.p_t.addr.city;
       cin>>t1.p_t.addr.country;
       cout<<"Enter his/her department"<<endl;
       cout<<"FME=0,FMCE=1,FCSE=2,FES=3,FEE=4"<<endl;
        cin>>x0;
        switch(x0)
       {
         case 0:
          {cout<<" department is FME"<<endl;
          break;}
         case 1:
          {cout<<" department is FMCE"<<endl;
          break;}  
        case 2:
          {cout<<" department is FCSE"<<endl;
          break;}
        case 3:
          {cout<<" department is FES"<<endl;
          break;}
        case 4:
          {cout<<" department is FEE"<<endl;
          break;} }} 

void remove_teacher(Teacher t1)   //function to remove teacher
{
    int x0;
    cout<<"Remove a teacher"<<endl;
       cout<<"Name:"<<endl;
       cin>>t1.p_t.name;
       cout<<"Age:"<<endl;
       cin>>t1.p_t.age;
       cout<<"salary:"<<endl;
       cin>>t1.salary;
       cout<<"Address:house no , city , country"<<endl;
       cin>>t1.p_t.addr.house_no;
       cin>>t1.p_t.addr.city;
       cin>>t1.p_t.addr.country;
       cout<<"Enter his/her department"<<endl;
       cout<<"FME=0,FMCE=1,FCSE=2,FES=3,FEE=4"<<endl;
        cin>>x0;
        switch(x0)
       {
         case 0:
          {cout<<" department is FME"<<endl;
          break;}
         case 1:
          {cout<<" department is FMCE"<<endl;
          break;}  
        case 2:
          {cout<<" department is FCSE"<<endl;
          break;}
        case 3:
          {cout<<" department is FES"<<endl;
          break;}
        case 4:
          {cout<<" department is FEE"<<endl;
          break;}  } 
          cout<<"successfully removed"<<endl;
          }

void update_details(Teacher* t1) //function for updating details of teacher
{
    int x0;
    cout<<"Update details of a teacher"<<endl;
      cout<<"Name:"<<endl;
       cin>>t1->p_t.name;
       cout<<"Age:"<<endl;
       cin>>t1->p_t.age;
       cout<<"salary:"<<endl;
       cin>>t1->salary;
       cout<<"Address:house no , city , country"<<endl;
       cin>>t1->p_t.addr.house_no;
       cin>>t1->p_t.addr.city;
       cin>>t1->p_t.addr.country;
       cout<<"Enter his/her department"<<endl;
       cout<<"FME=0,FMCE=1,FCSE=2,FES=3,FEE=4"<<endl;
        cin>>x0;
        switch(x0)
       {
         case 0:
          {cout<<" department is FME"<<endl;
          break;}
         case 1:
          {cout<<" department is FMCE"<<endl;
          break;}  
        case 2:
          {cout<<" department is FCSE"<<endl;
          break;}
        case 3:
          {cout<<" department is FES"<<endl;
          break;}
        case 4:
          {cout<<" department is FEE"<<endl;
          break;}  } 
          cout<<"successfully updated"<<endl;
          
}
void check_record(Teacher t1[],int sie) //function for checking record
{
    int x0;
    for(int i=0;i<sie;i++)
    {cout<<"Add its details"<<endl;
       cout<<"Name:"<<endl;
       cin>>t1[i].p_t.name;
       cout<<"Age:"<<endl;
       cin>>t1[i].p_t.age;
       cout<<"salary:"<<endl;
       cin>>t1[i].salary;
       cout<<"Address:house no , city , country"<<endl;
       cin>>t1[i].p_t.addr.house_no;
       cin>>t1[i].p_t.addr.city;
       cin>>t1[i].p_t.addr.country;
       cout<<"Enter his/her department"<<endl;
       cout<<"FME=0,FMCE=1,FCSE=2,FES=3,FEE=4"<<endl;
        cin>>x0;
        switch(x0)
       {
         case 0:
          {cout<<" department is FME"<<endl;
          break;}
         case 1:
          {cout<<" department is FMCE"<<endl;
          break;}  
        case 2:
          {cout<<" department is FCSE"<<endl;
          break;}
        case 3:
          {cout<<" department is FES"<<endl;
          break;}
        case 4:
          {cout<<" department is FEE"<<endl;
          break;} }}
    for(int j=0;j<sie;j++)
    {cout<<"the record of the teachers are "<<endl;
     cout<<"Name:"<<t1[j].p_t.name<<endl;
     cout<<"Age:"<<t1[j].p_t.age<<endl;
     cout<<"Salay:"<<t1[j].salary<<endl;
     cout<<"Address:house no , city , country"<<t1[j].p_t.addr.house_no<<" "<<t1[j].p_t.addr.city<<" "<<t1[j].p_t.addr.country<<endl;}
}
void add_course(Course c1) //function for adding course
{
    Student s2[10];
    cout<<"Add courses in a system"<<endl;
    cout<<"Name :";
    cin>>c1.c_name;
    cout<<"Code :";
    cin>>c1.c_code;
    cout<<"Instructor of the course :";
    cin>>c1.t_name;
    cout<<"Enrolled student in that course"<<endl;
    for(int i=0;i<10;i++)
    {
        cout<<"Name:";
        cin>>s2[i].p_s.name;
        cout<<"Roll no:";
        cin>>s2[i].p_s.name;}
    
    cout<<"Dropped student in that course"<<endl;
    for(int i=0;i<10;i++)
    {
        cout<<"Name:";
        cin>>s2[i].p_s.name;
        cout<<"Roll no:";
        cin>>s2[i].p_s.name;}
    cout<<"Graded student in that course"<<endl;
    for(int i=0;i<10;i++)
    {
        cout<<"Name:";
        cin>>s2[i].p_s.name;
        cout<<"Roll no:";
        cin>>s2[i].p_s.name;}
}
void remove_course(Course* c1) //function for removing course
{
    cout<<"Remove courses in a system"<<endl;
    cout<<"Name :";
    cin>>c1->c_name;
    cout<<"Code :";
    cin>>c1->c_code;
    cout<<"Instructor of the course :";
    cin>>c1->t_name;
}
void update_c_details(Course* c1) // function for updating course details
{
    cout<<"update course details"<<endl;
    cout<<"Name :";
    cin>>c1->c_name;
    cout<<"Code :";
    cin>>c1->c_code;
    cout<<"Instructor of the course :";
    cin>>c1->t_name;
}
void check_c_records(Course c1[],int sie) //function for checking records of all courses 
{
    cout<<"Add course details"<<endl;
    for(int i=0;i<sie;i++)
    {cout<<"Name :";
    cin>>c1[i].c_name;
    cout<<"Code :";
    cin>>c1[i].c_code;
    cout<<"Instructor of the course :";
    cin>>c1[i].t_name;}
    cout<<"the record of the course are "<<endl;
    for(int j=0;j<10;j++)
    {
     cout<<"Name:"<<c1[j].c_name<<endl;
     cout<<"Code :"<<c1[j].c_code<<endl;
     cout<<"Instructor's name: "<<c1[j].t_name<<endl;}
     

} 
void course_allocation(Course* c1) //function for course alloccation
{
    Teacher* t;
    cout<<"Course allocation"<<endl;
    
    cout<<"Name :";
    cin>>c1->c_name;
    cout<<"Code :";
    cin>>c1->c_code;
     
        cout<<"Teacher's name:";
        cin>>t->p_t.name;
        cout<<"The course "<<c1->c_name<<c1->c_code<<" is allocated to "<<t->p_t.name<<endl;

}  
void course_deallocation(Course* c1) //function for course deallocation
{
    Teacher* t;
    cout<<"Course deallocation"<<endl;
    cout<<"Name :";
    cin>>c1->c_name;
    cout<<"Code :";
    cin>>c1->c_code;
        cout<<"Teacher's name:";
        cin>>t->p_t.name;
        cout<<"The course "<<c1->c_name<<c1->c_code<<" is deallocated to "<<t->p_t.name<<endl;
}

void check_details(Teacher t1)  //function for teacher to check his details 
{
    int x0;
    cout<<"Name:"<<endl;
       cin>>t1.p_t.name;
       cout<<"Age:"<<endl;
       cin>>t1.p_t.age;
       cout<<"salary:"<<endl;
       cin>>t1.salary;
       cout<<"Address:house no , city , country"<<endl;
       cin>>t1.p_t.addr.house_no;
       cin>>t1.p_t.addr.city;
       cin>>t1.p_t.addr.country;
       cout<<"Enter his/her department"<<endl;
       cout<<"FME=0,FMCE=1,FCSE=2,FES=3,FEE=4"<<endl;
        cin>>x0;
        switch(x0)
       {
         case 0:
          {cout<<" department is FME"<<endl;
          break;}
         case 1:
          {cout<<" department is FMCE"<<endl;
          break;}  
        case 2:
          {cout<<" department is FCSE"<<endl;
          break;}
        case 3:
          {cout<<" department is FES"<<endl;
          break;}
        case 4:
          {cout<<" department is FEE"<<endl;
          break;} }}
void courses_list(Course c1[],int sie) //function for checking the list of all courses allocated to him 
{
    cout<<"list of course "<<endl;
    for(int i=0;i<sie;i++)
    {cout<<"Name :";
    cin>>c1[i].c_name;
    cout<<"Code :";
    cin>>c1[i].c_code;
    cout<<"Instructor of the course :";
    cin>>c1[i].t_name;}
    for(int j=0;j<10;j++)
    {
     cout<<"Name:"<<c1[j].c_name<<endl;
     cout<<"Code :"<<c1[j].c_code<<endl;
     cout<<"Instructor's name: "<<c1[j].t_name<<endl;}
     
}
void students_list(Course c1[],int sie)
{
    Student s1[10];
    for(int i=0;i<sie;i++)
    {
        cout<<"the course details"<<endl;
    cout<<"Name :";
    cin>>c1[i].c_name;
    cout<<"Code :";
    cin>>c1[i].c_code;
    cout<<"Instructor of the course :";
    cin>>c1[i].t_name;
    cout<<"the details  of students enrolled in that course are as follow"<<endl;
      for(int i=0;i<10;i++)
      {
        cout<<"Name:"<<endl;
       cin>>s1[i].p_s.name;
       cout<<"Age:"<<endl;
       cin>>s1[i].p_s.age;
       cout<<"Roll No:"<<endl;
       cin>>s1[i].roll_no;
      }
    }
}
void marks_assign(Grade g1) //function for assigning marks and grade
{
    Student s1[10];
    char check;
    int a;
    for(int i=0;i<10;i++)
      {
        cout<<"The marks of student having ";
        cout<<"Name:"<<endl;
       cin>>s1[i].p_s.name;
       cout<<"Age:"<<endl;
       cin>>s1[i].p_s.age;
       cout<<"Roll No:"<<endl;
       cin>>s1[i].roll_no;
       cout<<"Marks:"<<endl;
       cin>>g1.marks;
       cout<<"Assigning grade"<<endl;
       switch(a)
       {
        case 0:
          cout<<"Grade F"<<endl;
          break;
        case 1:
          cout<<"Grade D"<<endl;
          break;
        case 2:
          cout<<"Grade C"<<endl;
          break;
        case 3:
          cout<<"Grade B"<<endl;
          break;
        case 4:
          cout<<"Grade A"<<endl;
          break;        
       }
      }}
void top_student(Student s1[],int sie){      //function for checking top student in the class
      char check;
      Grade g1;
      int a;
      cout<<"Do you want to see the top student in your class"<<endl;
      cin>>check;
      if(check=='y'|| check =='Y')
    {
        for(int i=0;i<10;i++)
      {
        cout<<"The marks of student having ";
        cout<<"Name:"<<endl;
       cin>>s1[i].p_s.name;
       cout<<"Roll No:"<<endl;
       cin>>s1[i].roll_no;
       cout<<"Marks:"<<endl;
       cin>>g1.marks;
       cout<<"Assigning grade"<<endl;
       switch(a)
       {
        case 0:
          cout<<"Grade F"<<endl;
          break;
        case 1:
          cout<<"Grade D"<<endl;
          break;
        case 2:
          cout<<"Grade C"<<endl;
          break;
        case 3:
          cout<<"Grade B"<<endl;
          break;
        case 4:
          cout<<"Grade A"<<endl;
          break;        
       }
      }
      if(a==4)
      { 
        cout<<"The student stands first in the class"<<endl;
      }
    }
}
void grade_wise_division(Student s1[],int sie) //function for grade wise division of the student 
{
    int a;
    Course c1;
    cout<<"Assigned grade"<<endl;
    cin>>a;
       switch(a)
       {
        case 0:
          cout<<"Grade F"<<endl;
          break;
        case 1:
          cout<<"Grade D"<<endl;
          break;
        case 2:
          cout<<"Grade C"<<endl;
          break;
        case 3:
          cout<<"Grade B"<<endl;
          break;
        case 4:
          cout<<"Grade A"<<endl;
          break;        
       }
    cout<<"The details of the course"<<endl;
    cout<<"Name :";
    cin>>c1.c_name;
    cout<<"Code :";
    cin>>c1.c_code;
    cout<<"Instructor of the course :";
    cin>>c1.t_name;
    for(int i=0;i<sie;i++)
    {
         cout<<"Name:"<<endl;
       cin>>s1[i].p_s.name;
       cout<<"Roll No:"<<endl;
       cin>>s1[i].roll_no;
    }
    }
void check_details_s(Student s1) //function for checking the details of the student
{
      int  x1,x0;
     cout<<"Name:"<<endl;
       cin>>s1.p_s.name;
       cout<<"Age:"<<endl;
       cin>>s1.p_s.age;
       cout<<"Roll No:"<<endl;
       cin>>s1.roll_no;
       cout<<"Address:house no , city , country"<<endl;
       cin>>s1.p_s.addr.house_no;
       cin>>s1.p_s.addr.city;
       cin>>s1.p_s.addr.country;
    cout<<"Enter his educational level"<<endl;
    cout<<"matric=0,intermediate=1,bachelor=2,master=3,phd=4"<<endl;
        cin>>x1;
        switch(x1)
       {
         case 0:
          {cout<<"matric"<<endl;
          break;}
        case 1:
          {cout<<"intermediate"<<endl;
          break;}  
        case 2:
          {cout<<"bachelor"<<endl;
          break;}
        case 3:
          {cout<<"master"<<endl;
          break;}
        case 4:
          {cout<<"phd"<<endl;
          break;}        
       }
       cout<<"Enter his/her department"<<endl;
       cout<<"FME=0,FMCE=1,FCSE=2,FES=3,FEE=4"<<endl;
        cin>>x0;
        switch(x0)
       {
         case 0:
          {cout<<" department is FME"<<endl;
          break;}
         case 1:
          {cout<<" department is FMCE"<<endl;
          break;}  
        case 2:
          {cout<<" department is FCSE"<<endl;
          break;}
        case 3:
          {cout<<" department is FES"<<endl;
          break;}
        case 4:
          {cout<<" department is FEE"<<endl;
          break;} }
}
void available_course(Course c1)
{
   Student s1;
   cout<<"The below mention student having "<<endl;
   cout<<"Name:"<<endl;
       cin>>s1.p_s.name;
       cout<<"Age:"<<endl;
       cin>>s1.p_s.age;
       cout<<"Roll No:"<<endl;
       cin>>s1.roll_no;
       cout<<"has the following courses available whose details are given below"<<endl;
       cout<<"Name :";
    cin>>c1.c_name;
    cout<<"Code :";
    cin>>c1.c_code;
    cout<<"Instructor of the course :";
    cin>>c1.t_name;
}
void final_grade(Grade g1) //function for final grade
{
  int a;
    cout<<"the grade entered by the teacher"<<endl;
    cin>>a;
       switch(a)
       {
        case 0:
          cout<<"Grade F"<<endl;
          break;
        case 1:
          cout<<"Grade D"<<endl;
          break;
        case 2:
          cout<<"Grade C"<<endl;
          break;
        case 3:
          cout<<"Grade B"<<endl;
          break;
        case 4:
          cout<<"Grade A"<<endl;
          break;        
       }
}
void teachers_list(Teacher t1[],int sie) //function for teacher lists
{
  cout<<"The list of teacher whom the student is studied is as follow"<<endl;
  int x0;
    for(int i=0;i<sie;i++)
    {cout<<"Add its details"<<endl;
       cout<<"Name:"<<endl;
       cin>>t1[i].p_t.name;
       cout<<"Age:"<<endl;
       cin>>t1[i].p_t.age;
       cout<<"salary:"<<endl;
       cin>>t1[i].salary;
       cout<<"Address:house no , city , country"<<endl;
       cin>>t1[i].p_t.addr.house_no;
       cin>>t1[i].p_t.addr.city;
       cin>>t1[i].p_t.addr.country;
       cout<<"Enter his/her department"<<endl;
       cout<<"FME=0,FMCE=1,FCSE=2,FES=3,FEE=4"<<endl;
        cin>>x0;
        switch(x0)
       {
         case 0:
          {cout<<" department is FME"<<endl;
          break;}
         case 1:
          {cout<<" department is FMCE"<<endl;
          break;}  
        case 2:
          {cout<<" department is FCSE"<<endl;
          break;}
        case 3:
          {cout<<" department is FES"<<endl;
          break;}
        case 4:
          {cout<<" department is FEE"<<endl;
          break;} }}

}
void enrolled_courses(Course c1[],int sie) //function for enrolled courses
{
    cout<<"The enrolled courses are"<<endl;
    for(int i=0;i<sie;i++)
    {cin>>c1[i].c_name;
    cout<<"Code :";
    cin>>c1[i].c_code;
    cout<<"Instructor of the course :";
    cin>>c1[i].t_name;}
}
void dropped_courses(Course c1[],int sie)  //function for dropped courses
{
    cout<<"The dropped courses are"<<endl;
    for(int i=0;i<sie;i++)
    {cin>>c1[i].c_name;
    cout<<"Code :";
    cin>>c1[i].c_code;
    cout<<"Instructor of the course :";
    cin>>c1[i].t_name;}
}
void completed_courses(Course c1[],int sie) //function for dropped courses
{
    cout<<"The completed courses are"<<endl;
    for(int i=0;i<sie;i++)
    {cin>>c1[i].c_name;
    cout<<"Code :";
    cin>>c1[i].c_code;
    cout<<"Instructor of the course :";
    cin>>c1[i].t_name;}
}

int main() //main function to call various function
{
    int n;
    char check; 
    Grade g;
    Student s;
    Student s0[10];
    Teacher t;
    Teacher t0[10];
    Course c;
    Course c0[10];
    cout<<"*****Welcome to GIKI LMS*****"<<endl;
    cout<<"1: Admin"<<endl;
    cout<<"2: Teacher"<<endl;
    cout<<"3: Student"<<endl;
    cout<<"Select option(1 ,2 ,3)"<<endl;
    cin>>n;
    switch(n)
    {
      case 1:
         cout<<"*****login as admin*****"<<endl;
         break;
      case 2:
         cout<<"*****login as teacher*****"<<endl;
         break;
      case 3:
         cout<<"*****login as student*****"<<endl;
         break;      
    }
    
    if(n==1)
    {
        do{

        int x;
        cout<<"**********Admin page has been opened**********"<<endl;
        cout<<"1:Add student in a system"<<endl;
        cout<<"2:Remove a student from system"<<endl;
        cout<<"3:Update student's details"<<endl;
        cout<<"4:Check record of all students"<<endl;
        cout<<"5:Un-enrolled a student from a course"<<endl;
        cout<<"6:Add a new teacher in a system"<<endl;
        cout<<"7:Remove teacher from a system"<<endl;
        cout<<"8:Update teacher's details"<<endl;
        cout<<"9:Check records of all teachers"<<endl;
        cout<<"10:Add a course in a system"<<endl;
        cout<<"11: Removing course from a system"<<endl;
        cout<<"12:Update the course details"<<endl;
        cout<<"13:Check records of all courses"<<endl;
        cout<<"14:Allocate a course to a teacher"<<endl;
        cout<<"15:Deallocate a course to a teacher"<<endl;
        cout<<"Select option(1-15)"<<endl;
        cin>>x;
        switch(x)
        {
            case 1:
             do{
             add_student(s); //function call for adding student
              cout<<"do you what to add again ,if yes enter 'y' or 'Y' else enter 'n'"<<endl;
              cin>>check;
             }while(check=='y'|| check=='Y');
             break;
            case 2:
            do{
             remove_student(s); //function call for removing student
             cout<<"do you want to remove again,if yes enter 'y' or 'Y' else enter 'n'"<<endl;
             cin>>check;
            }while(check=='y'|| check=='Y');
             break;
            case 3:
            do{
             update_details(&s); //function call for updating details of student
             cout<<"do you want to update again,if yes enter 'y' or 'Y' else enter 'n'"<<endl;
             cin>>check;
            }while(check=='y'|| check=='Y');
             break; 
            case 4:
             check_record(s0,10); //function call for checking records of students
             break;
            case 5:
            do{
              unenrolled_student(&s); //function call for un enrolling a student from a course
              cout<<"do you want to unenrolled again,if yes enter 'y' or 'Y' else enter 'n'"<<endl;
              cin>>check;
            }while(check=='y'|| check=='Y');
             break;
            case 6:
            do{
             add_teacher(t); //function call for adding teacher
             cout<<"do you what to add again ,if yes enter 'y' or 'Y' else enter 'n'"<<endl;
              cin>>check;
             }while(check=='y'|| check=='Y');
             break;
            case 7:
            do{
             remove_teacher(t); //function call for removing teacher
             cout<<"do you want to remove again,if yes enter 'y' or 'Y' else enter 'n'"<<endl;
             cin>>check;
            }while(check=='y'|| check=='Y');
             break;
            case 8:
            do{
             update_details(&t); //function call for updating details of teacher
              cout<<"do you want to update again,if yes enter 'y' or 'Y' else enter 'n'"<<endl;
             cin>>check;
            }while(check=='y'|| check=='Y');
             break; 
            case 9:
             check_record(t0,10); //function call for checking records of teachers
             break; 
            case 10:
            do{
             add_course(c);   //function call for adding course
              cout<<"do you what to add again ,if yes enter 'y' or 'Y' else enter 'n'"<<endl;
              cin>>check;
             }while(check=='y'|| check=='Y');
             break; 
            case 11:
            do{
             remove_course(&c);//function call for removing course
              cout<<"do you want to remove again,if yes enter 'y' or 'Y' else enter 'n'"<<endl;
             cin>>check;
            }while(check=='y'|| check=='Y');
             break;   
            case 12:
            do{
             update_c_details(&c);//function call for  updating course details
              cout<<"do you want to update again,if yes enter 'y' or 'Y' else enter 'n'"<<endl;
             cin>>check;
            }while(check=='y'|| check=='Y');
             break;
            case 13:
             check_c_records(c0,10); //function call for checking records of all the courses
             break; 
            case 14:
            do{
             course_allocation(&c); //function call for course allocation to a teacher
             cout<<"do you want to allocate again,if yes enter 'y' or 'Y' else enter 'n'"<<endl;
              cin>>check;
            }while(check=='y'|| check=='Y');
             break;
            case 15:
            do{
             course_deallocation(&c); //function call for course deallocation to a teacher
             cout<<"do you want to deallocate again,if yes enter 'y' or 'Y' else enter 'n'"<<endl;
              cin>>check;
            }while(check=='y'|| check=='Y');
             break;  

        }
    
    cout<<"do you want to login as`an admin,if yes enter 'y' or 'Y' else enter 'n'"<<endl;
    cin>>check;
    }while(check=='y'|| check=='Y');
    }
    else if(n==2)
   {
    do{
    int y;
    cout<<"**********Teacher page has been opened**********"<<endl;
    cout<<"1:Check his/her details or data"<<endl;
    cout<<"2:See list of all courses allocated to him"<<endl;
    cout<<"3:List of all students enrolled in each course separately"<<endl;
    cout<<"4:Assign marks and grade to each student"<<endl;
    cout<<"5:See top student in the class"<<endl;
    cout<<"6:Grade wise division of students in course allocated to him"<<endl;
    cout<<"Select option (1-6)"<<endl;
    cin>>y;
    switch(y)
    {
        case 1:
        do{
          check_details(t); //function call for checking teacher's details
          cout<<"do you want to check the details of course again,if yes enter 'y' or 'Y'"<<endl;
          cin>>check;
        }while(check=='y'||  check=='Y');
        break;
        case 2:
          courses_list(c0,10);//function call for checking the list of courses
          break; 
        case 3:
         students_list(c0,10);//function call for seeing the list of all students enrolled in each course separately
         break; 
        case 4:
        do{
         marks_assign(g);//function call for assigning marks and grades to each student
           cout<<"do you want to assign the marks and grade to students again,if yes enter 'y' or 'Y'"<<endl;
          cin>>check;
        }while(check=='y'||  check=='Y');
         break;  
        case 5:
         top_student(s0,10);//function for seeing top student in the class 
         break;  
        case 6:
         grade_wise_division(s0,10);//function call for grading students
         break; 
    }
   cout<<"do you want to login as`a teacher ,if yes enter 'y' or 'Y' else enter 'n'"<<endl;
    cin>>check;
    }while(check=='y'|| check=='Y');}
    else if(n==3)
    {
      do{
        int b;
        cout<<"**********Student page has been opened**********"<<endl;
        cout<<"1:check his/her details or data"<<endl;
        cout<<"2:Enrolled any available course"<<endl;
        cout<<"3:See his/her final grades"<<endl;
        cout<<"4:See list of his/her teachers"<<endl;
        cout<<"5:See  list of his/her enrolled courses"<<endl;
        cout<<"6:See  list of his/her dropped courses"<<endl;
        cout<<"7:See  list of his/her dropped courses"<<endl;
        cout<<"Select option(1-7)"<<endl;
        cin>>b;
        switch(b)
        {
          do{
          case 1:
           check_details_s(s); //function call for checking the details of student
           cout<<"do you want to check the details of student again,if yes enter 'y' or 'Y'"<<endl;
          cin>>check;
        }while(check=='y'||  check=='Y');
           break;
          case 2:
          do{
           available_course(c); //function call for enrolling the course
           cout<<"do you want to enroll the available course again,if yes enter 'y' or 'Y'"<<endl;
          cin>>check;
        }while(check=='y'||  check=='Y');
           break; 
          case 3:
          do{
           final_grade(g); //function call for final grade
           cout<<"do you want to see the final grade again,if yes enter 'y' or 'Y'"<<endl;
          cin>>check;
        }while(check=='y'||  check=='Y');
           break; 
          case 4:
           teachers_list(t0,10);//  function call for teacher list
           break; 
          case 5:
          do{
           enrolled_courses(c0,10); //function call for enrolled course
           cout<<"do you want to see the list of enrolled course again,if yes enter 'y' or 'Y'"<<endl;
          cin>>check;
        }while(check=='y'||  check=='Y');
           break;
          case 6:
          do{
           dropped_courses(c0,10); //function call for dropped course
           cout<<"do you want to see the list of dropped course again,if yes enter 'y' or 'Y'"<<endl;
          cin>>check;
        }while(check=='y'||  check=='Y');
           break;
          case 7:
          do{
           completed_courses(c0,10); //function call for completed course
           cout<<"do you want to see the list of completed course again,if yes enter 'y' or 'Y'"<<endl;
          cin>>check;
        }while(check=='y'||  check=='Y');
           break;  
        }
         cout<<"do you want to login as`a student ,if yes enter 'y' or 'Y' else enter 'n'"<<endl;
    cin>>check;
    }while(check=='y'|| check=='Y');
    }
     
    return 0;
}