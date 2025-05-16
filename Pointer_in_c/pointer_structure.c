#include <stdio.h>
struct pointer_structure
{
    int id;
    char *name;
};
void main()
{
    struct pointer_structure st = {1, "RJ"};
    struct pointer_structure *st1;
    st1 = &st;
    printf("\nid is %d", st1->id);
    printf("\nname is %s", st1->name);
}