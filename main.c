#define assert_printf printf
#include "vassert.h"

void* temp = NULL;
char* hallo = "Hello vassert\r\n";

int main(int argc, char const *argv[])
{
    // vassert(temp!=NULL, "temp init success\r\n");
    temp = hallo;
    vassert(temp!=NULL, "temp init success\r\n");
    return 0;
}
