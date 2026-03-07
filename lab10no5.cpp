#include <stdio.h>
#include <string.h>

typedef struct {
    char loginname[64];
    char password[64];
} account;

typedef struct {
    char stdID[17];
    char nameSurname[25];
    account stdACC; 
} hoststd;

int main() {
    
    hoststd cs[5] = {
        {"66-040626-2686-9", "MR.A", {"user1", "passwd1"}},
        {"66-040626-0002-1", "MS.B", {"user2", "passwd2"}},
        {"66-040626-0003-2", "MR.C", {"user3", "passwd3"}},
        {"66-040626-0004-3", "MS.D", {"user4", "passwd4"}},
        {"66-040626-0005-4", "MR.E", {"user5", "passwd5"}}
    };

    char inputUser[64];
    char inputPass[64];
    int found = 0;

    printf("Username/Loginname: ");
    scanf("%s", inputUser);
    printf("Password: ");
    scanf("%s", inputPass);


    for (int i = 0; i < 5; i++) {

        if (strcmp(cs[i].stdACC.loginname, inputUser) == 0 && 
            strcmp(cs[i].stdACC.password, inputPass) == 0) {
            printf("Welcome %s\n", cs[i].nameSurname);
            found = 1;
            break;
        }
    }

    if (!found) {
        printf("Incorrect login or password\n");
    }

    return 0;
}
