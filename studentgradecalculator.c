#include <stdio.h>

int main()
{
  float maths,english,hindi,bilology,chemistry,percentage,total;
  scanf ("%f %f %f %f %f",&maths,&english,&hindi,&bilology,&chemistry);
  total=maths+english+hindi+bilology+chemistry;
  percentage=total/500*100;
  
  if(percentage >= 90 && percentage <= 100)
  {
    printf ("A+");
  }
 else if(percentage >= 80 && percentage <= 90)
  {
    printf ("A");
  }
 else if(percentage >= 70 && percentage <= 80)
  {
    printf ("B");
  }
  else if(percentage >= 60 && percentage <= 70)
  {
    printf ("C");
  }
  else if(percentage>=50 && percentage<=60)
  {
    printf ("D");
  }
  else if(percentage >= 40 && percentage <= 50)
  {
    printf ("E");
  }
  else if(percentage >= 30 && percentage <= 40)
  {
    printf ("F");
  }
  else if(percentage >= 20 && percentage <= 30)
  {
    printf ("G");
  }
  else if(percentage >= 10 && percentage <= 20)
  {
    printf ("F+");
  }
  else if(percentage >= 0 && percentage <= 10)
  {
    printf ("G");
  }
  
}