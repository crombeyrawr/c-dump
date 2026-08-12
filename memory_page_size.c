#include <stdio.h>
#include <windows.h>
int main(){

    SYSTEM_INFO SysInfo = { 0 }; // Passo crucial antes de usar a função GetSystemInfo()
    GetSystemInfo(&SysInfo); // Obtem informaçoes sobre o Hardware da maquina.
    printf("Memory Page Size of Hardware: %lu bytes\n", SysInfo.dwPageSize); // Retorna o tamanho da Memory Page das informaçoes do Hardware da maquina. (4 KB) / 4096 bytes
    return 0;

}
