#include <stdio.h>

/* Terminal color codes */
#define RESET  "\x1B[0m"
#define RED    "\x1B[31m"
#define GRN    "\x1B[32m"
#define YEL    "\x1B[33m"
#define BLU    "\x1B[34m"
#define MAG    "\x1B[35m"
#define CYN    "\x1B[36m"
#define WHT    "\x1B[37m"

#define print(color, fmt, args...) fprintf(stdout, color fmt RESET, ##args)
#define print_info(fmt, args...)   fprintf(stdout, CYN fmt RESET, ##args)
#define print_warn(fmt, args...)   fprintf(stdout, YEL "WARN: %s:%d:%s(): " fmt RESET,__FILE__, __LINE__, __func__, ##args)
#define print_error(fmt, args...)  fprintf(stdout, RED "ERROR: %s:%d:%s(): " fmt RESET,__FILE__, __LINE__, __func__, ##args)


#define PRINT_INFO(color, string) \
do{                                                                        \
    printf(color "INFO: %s:%d:%s(): " RESET,__FILE__, __LINE__, __func__); \
    printf string;                                                         \
} while(0)

#define PRINT_WARN(string) \
do{                                                                      \
    printf(YEL "WARN: %s:%d:%s(): " RESET,__FILE__, __LINE__, __func__); \
    printf string;                                                       \
} while(0)

int main(void)
{
    int a = 5 ;
    /* Method 1 : The elegent one, which is capable of providing colored output
       as well as capable of prining file name, line number, function name etc
    */
    printf("################\n");
    printf("### Method 1 ###\n");
    printf("################\n");
    print(MAG, "a = %d\n", a);
    print_info("a = %d\n", a);
    print_warn("a = %d\n", a);
    print_error("a = %d\n", a);

    /* Method 2 : Alternative way of achieving the similar goal. But this method
       provides color for printing file name, line number and function name
    */
    printf("################\n");
    printf("### Method 2 ###\n");
    printf("################\n");
    PRINT_INFO(MAG, ("a = %d\n", a));
    PRINT_WARN(("a = %d\n", a));
    return 0;
}
