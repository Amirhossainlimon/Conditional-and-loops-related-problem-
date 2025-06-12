#include <stdio.h>
#include <string.h>

int main() {
    char password[50], user_name[50], default_verification[] = "2004";

    printf("Enter your username: ");
    scanf("%s", user_name);

    printf("Enter your password: ");
    scanf("%s", password);

    int password_matched = strcmp(password, default_verification);
    //int name_matched = strcmp(user_name, default_verification);

    if (password_matched == 0){             //&& name_matched == 0)
        printf("You are logged in\n");
    } else {
        printf("Invalid credentials\n");
    }

    return 0;
}
