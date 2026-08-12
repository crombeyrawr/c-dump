#include <windows.h>
#include <unistd.h>
#include <stdio.h>

int main() {
    int my_pid = getpid();
    int my_variable = my_pid; // Variavel guardando o PID do codigo C compilado e rodando.

    printf("\nmeowmeowmeowmeowmeowmeowmeowmeowmeowmeowmeowmeowmeowmeowmeowmeowmeow\n");
    printf("I am the PID Process: %d\n", my_pid);
    printf("Virtual Address of the variable: %p\n", &my_variable);
    printf("Value stored in the variable %d\n", my_variable);
    printf("meowmeowmeowmeowmeowmeowmeowmeowmeowmeowmeowmeowmeowmeowmeowmeowmeow\n");
    sleep(20);
    return 0;
}
