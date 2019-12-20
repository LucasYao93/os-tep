#include "core.h"

int change_char(char *pt)
{
  char *char_pt = (char *)malloc(sizeof(char));
  pt = char_pt;
  char val = 'Y';
  *char_pt = val;
  free(char_pt);
  return 0;
}

int main()
{
  char *main_pt = (char *)malloc(sizeof(char));
  char val = 'N';
  *main_pt = val;
  printf("val: %c\n", val);  
  printf("main_pt value: %c\n", *main_pt);

  change_char(main_pt);  

  printf("after val: %c\n", val);  
  printf("after main_pt value: %c\n", *main_pt); 
  return 0;
}

