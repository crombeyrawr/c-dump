#include <stdio.h>
#include <windows.h>
int main(){
    SYSTEM_INFO SysInfo = { 0 }; // Declaração da Structure que armazena informações sobre o Sistema Operacional
    GetSystemInfo(&SysInfo); // Obtem informaçoes sobre o Sistema Operacional, e referencia aonde o endereço de memoria de SysInfo esta armazenado, pelo operador "&"
    printf("Windows Memory Page Size: %lu bytes\n", SysInfo.dwPageSize); // Retorna o tamanho da Memory Page default do Windows (4 KB) / 4096 bytes
    return 0;
}
