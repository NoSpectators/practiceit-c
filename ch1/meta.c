/* Write a complete program called meta_writer whose output is the text

#include <stdio.h>

int main() {
    printf("hello, world!\n");
    return 0;
}

*/
 
#include <stdio.h>

int main() {
    printf("#include <stdio.h>\n\n");
    printf("int main() {\n");
    printf("    printf(\"hello, world!\\n\");\n");
    printf("    return 0;\n");
    printf("}\n");
    return 0;
}
