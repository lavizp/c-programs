#include <stdio.h>
void TestFunc()
{

    static int IsFirstTime = 0;

    if(IsFirstTime == 0)
    {

      printf("This function is called as a first time\n");

      IsFirstTime++;

    }

    else
    {

      IsFirstTime++;

      printf("This function has been called %d times so far\n", IsFirstTime);

    }

}

 

int main()

{

      int i;

      for(i = 0; i < 10; i++)

            TestFunc();

      return 0;

} 