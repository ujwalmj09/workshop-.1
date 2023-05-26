/*implement structure to read write and compute avg marks and the students scoring
 above and below the avg marks of class of n students*/


#include <stdio.h>
#include<math.h>
#include <stdlib.h>
struct student
{
 char usn[10];
 char name[10];
 float m1,m2,m3;
 float avg ,total;
};
int main()
{
  struct student s[20];
  int n,i;
  float tavg,sum=0.0;
  printf("enter the no of students=");
  scanf("%d",&n);
  for(i=0;i<n;i++)
  {
      printf("enter the detail of %d students\n",i+1);
      printf("\n enter USN=");
      scanf("%s",s[i].usn);
      printf("enter name=");
      scanf("%s",s[i].name);
      printf("enter the three subject score\n");
      scanf("%f%f%f",&s[i].m1,&s[i].m2,&s[i].m3);
      s[i].total=s[i].m1+s[i].m2+s[i].m3;
      s[i].avg=s[i].total/3;
  }
  for(i=0;i<n;i++)
  {
      if(s[i].avg>=35)
        printf(" %s has scored above the avg marks",s[i].name);
      else
        printf(" %s has scored below the avg marks",s[i].name);
      printf("\n");

  }
  
  return 0;
}
