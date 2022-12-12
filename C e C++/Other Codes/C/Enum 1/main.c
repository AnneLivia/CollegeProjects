#include <stdio.h>
#include <stdlib.h>

enum semana{sun,mon,tue,wed,thur,fri,sat};

int main()
{
    int day;
    printf("Type the number that refers a day of the week:"
           "\n0 - Sunday\n1 - Monday\n2 - Tuesday\n3 - Wednesday\n4 - Thursday\n5 - Friday\n6 - Sunday\nType here: ");
    scanf("%d",&day);
    switch(day)
    {
      case sun : printf("Sunday - It's a day off yet"); break;
      case mon : printf("Monday - Back to the ground"); break;
      case tue : printf("Tuesday - keep working"); break;
      case wed : printf("Wednesday - it's almost weekend"); break;
      case thur : printf("Thursday - almost there, almost time to put your feet up"); break;
      case fri : printf("Friday - Yeah, it's the last day of work on the week"); break;
      case sat : printf("Saturday - now is time to lounge all day"); break;
      default : printf("You type the wrong number of the week");
    }
    return 0;
}
