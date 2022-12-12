#include <stdio.h>
#include <stdlib.h>


struct schedule
{
  int hour;
  int minute;
  int second;
};

struct schedule HourTest(struct schedule t)
{
  printf("%d:%d:%d\n",t.hour,t.minute,t.second);
  t.hour = 25;
  t.minute = 55;
  t.second = 60;
  return t;
};

int main()
{
    struct schedule time;
    struct schedule returnedTime;
    time.hour = 15;
    time.minute = 10;
    time.second = 55;

    printf("The time before the function.\n");
    printf("%d:%d:%d\n",time.hour,time.minute,time.second);
    printf("The time inside the function.\n");
    returnedTime = HourTest(time);
    printf("The time after the function.\n");
    printf("%d:%d:%d\n",returnedTime.hour,returnedTime.minute,returnedTime.second);
    return 0;
}
