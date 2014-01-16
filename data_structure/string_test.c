#include <stdio.h>
#include <stdlib.h>
#include <ngx_string.h>

int main() {
    ngx_str_t test = ngx_string("123456");
    ngx_int_t size = 50;
    u_char *buf = malloc(size);
    ngx_snprintf(buf, size, "%V", &test);
    printf("%s\n", buf); 
    return 0;
}
