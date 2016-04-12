#include <stdio.h>
#include <jansson.h>

int main(int argc, char *args[])
{
  printf("Hello, world!\n");

  json_t *json;
  json_error_t error;
  json = json_load_file("test.json", 0, &error);

  return 0;
}
