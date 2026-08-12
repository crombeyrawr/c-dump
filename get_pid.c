#include <unistd.h>
#include <stdio.h>

int main() {
    int my_pid = getpid();
    int my_variable = my_pid; // Variavel guardando o PID do processo em execução.

  
    printf("I am the PID Process: %d\n", my_pid);
    printf("Virtual Address of the variable: %p\n", &my_variable);
    printf("Value stored in the variable %d\n", my_variable);
   
    sleep(20);
    return 0;
}
/* Cada processo tem seu próprio espaço de endereço virtual.
Dois processos diferentes podem usar o mesmo endereço virtual, mas não apontam necessariamente para a mesma memória fisica.
*/

// Para provar o conceito acima, é necessario compilar sem ASLR e abrir o mesmo binario em 2 terminais diferente.
// gcc -no-pie -o no_aslr get_pid.c
