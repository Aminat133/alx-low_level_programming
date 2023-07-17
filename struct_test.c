#include <stdlib.h>
#include <stdio.h>
struct user
{
  char *name;
  char *email;
  int age;
};
struct user *user(char *name, char* email,int age)
{
  struct user *new_user;
  user = malloc(sizeof(struct user));
  if (user == NULL)
    return (NULL);
  user->name = name;
  user->email = email;
  user->age = age;
  return (user);
}

int main(void)
{
  struct user *user;
  user = new_user("foo", "foo@foo.bar", 98);
  if (user == NULL)
    return (1);
  printf("user %s created !\n", user->name);
  printf("His email is: %s\n", user->email);
  printf("And he is %d years old\n", user->age);
  return (0);
}
