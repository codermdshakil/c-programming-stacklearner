#include <stdio.h>
#include <stdbool.h>
int main()
{
    bool has_nid = false;
    bool has_passport = true;
    bool is_adult = true;

    // bool has_identity = has_nid || has_passport;
    // bool is_permitted = has_identity && is_adult;

    bool is_permitted = (has_nid || has_passport) && is_adult;

    // printf("Identity - %d\n", has_identity);
    printf("Permitted - %d\n", is_permitted);

    return 0;
}

/*

Logical And(&&)
--------------
A       B       Results
true    true    true
true    false   false
false   true    false
false   false   false 


Logical Or(||)
--------------
A       B       Results
true    true    true
true    false   true
false   true    true
false   false   false 

Logical Not (!)
------------------

A       Results
true    false
false true

*/