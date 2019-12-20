#include "core.h"
int mv_and_multi_pointer() 
{
  /*
    malloc:通知系统分配内存给应用
    free: 释放的内存，系统回收内存，内存对应用不可用。
    当多个指针指向同一个内存块时，释放任意一个，其他都指针都不可用。
    移动指针，再释放时，会引起报错。

  */
  char *char_pt = (char *)malloc(10 * sizeof(char));
  char *mv_char = char_pt;
  char *orgin_char = char_pt;
  printf("mv_char address: %p\n", mv_char);
  printf("char_pt address: %p\n", char_pt);
  printf("orgin_char address: %p\n", orgin_char);
  int n = 0;
  for(int i = 0; i < 10; i++)
  {
    n = rand() % 26;
    *mv_char = (char)(n + 65);
    mv_char++;
  }
  mv_char++;
  *mv_char = '\0';
  printf("char_pt value: %s\n", char_pt);
  printf("mv_char value: %s\n", mv_char);
  printf("orgin_char value: %s\n", orgin_char);

  printf("move after mv_char address: %p\n", mv_char);
  printf("free char_pt.\n");
  free(char_pt);
  

  printf("free(char_pt) address: %p\n", char_pt);
  printf("free mv_char address: %p\n", mv_char);
  printf("free orgin_char address: %p\n", orgin_char);
  

  printf("free(char_pt) value: %s\n", char_pt);
  printf("free mv_char value pt: %s\n", mv_char);
  printf("free orgin_char value pt: %s\n", orgin_char);
  printf("stop run.\n");
  return 0;
}