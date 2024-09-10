#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <assert.h>
int main() {
int divi, yearDiff, month, year, DOBmonth, Currentmonth, day;
int count, DOBday, Currentday, DOByear, Currentyear, Age;
bool Isoddmonth, Isevenmonth, Ismonthwrong;
printf("Enter DOByear: ");
scanf("%d", &DOByear);

printf("Enter Currentyear: ");
scanf("%d", &Currentyear);

printf("Enter DOBday: ");
scanf("%d", &DOBday);

printf("Enter Currentday: ");
scanf("%d", &Currentday);

printf("Enter DOBmonth: ");
scanf("%d", &DOBmonth);

printf("Enter Currentmonth: ");
scanf("%d", &Currentmonth);

count = 1;
Isoddmonth = false;
Isevenmonth = false;
Ismonthwrong = false;
IsDOBleapyear = false;




void Checkday() {
  printf("In Checkday\n");
  if (count == 1) {
    day = Currentday;
    if (Isoddmonth == true) {
      while (day > 31) {
        printf("Enter Currentday: ");
        scanf("%d", &Currentday);
        // Input Currentday;
        day = Currentday;
      } 
    }
    else {
      while (day > 30) {
        printf("Enter Currentday: ");
        scanf("%d", &Currentday);
        // Input Currentday;
        day = Currentday;
      }
    }
  }
  else {
    day = DOBday;
    if (Isoddmonth == true) {
      while ( day > 31 )  {
        printf("Enter DOB day: ");
        scanf("%d", &DOBday);
        day = DOBday;
      }
    }
    else {
      while (day > 30) {
        printf("Enter DOB day: ");
        scanf("%d", &DOBday);
        day = DOBday;
      }
    }
  }
}






void Checkleapyear() {
  printf("In Checkleapyear\n");
  if (count == 1) {
    year = Currentyear;
  } 
  else {
    year = DOByear;
  }
  
  if ((year % 4 == 0 && year % 400 == 0 && year % 100 != 0) || (year % 4 == 0 && year % 400 != 0 && year % 100 != 0)) {
  
    printf("Leap year\n");
    if (count == 1) {
      printf("count in 1 in leapyear\n");
      while (Currentday > 29) {
        printf("Enter current day: ");
        scanf("%d", &Currentday);
      }
    }
    else {
      while (DOBday > 29) {
        printf("Enter DOB day: ");
        scanf("%d", &DOBday);        
      }
    }
  } 
  else {
    printf("Not a leap year\n");
    
    if (count == 1) {
      printf("count in 1 in leapyear\n");
      while (Currentday > 28) {
        printf("Enter current day: ");
        scanf("%d", &Currentday);
      }
    }
    else {
      while (DOBday > 28) {
        printf("Enter DOB day: ");
        scanf("%d", &DOBday);        
      }
    }

  }
     
} 


void Checkmonth() {
  printf("In Checkmomth\n");
  if (count == 1) {
    month = Currentmonth;
  }
  else {
    month = DOBmonth;
  }
  
  if (month != 1) {
    if (month != 2) {
      if (month != 3) {
        if (month != 4) {
          if (month != 5) {
            if (month != 6) {
              if (month != 7) {
                if (month != 8) {
                  if (month != 9) {
                    if (month != 10) {
                      if (month != 11) {
                        if (month != 12) {
                          Ismonthwrong = true;
                        } 
                        else {
                          Ismonthwrong = false;
                          Isoddmonth = false;
                          Isevenmonth = true;
                        }
                      }
                      else {
                        Ismonthwrong = false;
                        Isoddmonth = true;
                        Isevenmonth = false;
                      }
                    }
                    else {
                      Ismonthwrong = false;
                      Isoddmonth = false;
                      Isevenmonth = true;
                    }
                  }
                  else {
                    Ismonthwrong = false;
                    Isoddmonth = true;
                    Isevenmonth = false;
                  }
                }
                else {
                  Ismonthwrong = false;
                  Isoddmonth = false;
                  Isevenmonth = true;
                }    
              }
              else {
                Ismonthwrong = false;
                Isoddmonth = true;
                Isevenmonth = false;
              }
            }
            else {
              Ismonthwrong = false;
              Isoddmonth = false;
              Isevenmonth = true;
            }
          }
          else {
            Ismonthwrong = false;
            Isoddmonth = true;
            Isevenmonth = false;
          }
        } 
        else {
          Ismonthwrong = false;
          Isoddmonth = false;
          Isevenmonth = true;
        }
      }
      else {
        Ismonthwrong = false;
        Isoddmonth = true;
        Isevenmonth = false;
      }
    } 
    else {
      
      Checkleapyear();
      Ismonthwrong = false;
      Isoddmonth = false;
      Isevenmonth = false;
    }
  } 
  else {
    Ismonthwrong = false;
    Isoddmonth = true;
    Isevenmonth = false;
  }
}






while (Currentyear < DOByear) {
  printf("Enter DOByear: ");
  scanf("%d", &DOByear);

  printf("Enter Currentyear: ");
  scanf("%d", &Currentyear);
}


while (count <= 2) {
  printf("Inside Count loop\n");
  printf("value of count: %d", count ,"\n" );
  Checkmonth();
 
  while (Ismonthwrong == true) {
    if (count == 1) {
      
      printf("Enter Currentmonth: ");
      scanf("%d", &Currentmonth);
      // Input Currentmonth
    } 
    else {
      //Input DOBmonth
      printf("Enter DOBmonth: ");
      scanf("%d", &DOBmonth);
    }
    Checkmonth();
  }

  Checkday();
  count = count + 1;
}






if (Currentyear - DOByear == 0) {
  Age = 0;
}
else if (Currentyear - DOByear > 0) {
  if (Currentmonth - DOBmonth == 0) {
    if (Currentday - DOBday >= 0) {
      Age = Currentyear - DOByear;
    }
  }
  else if (Currentmonth - DOBmonth > 0) {
    Age = Currentyear - DOByear;
  }
  else {
    Age = (Currentyear - DOByear) - 1;
  }
}
printf("Your age is: %d", Age);

}