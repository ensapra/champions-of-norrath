typedef void (*NoRetFn)(void) __attribute__((noreturn));
extern NoRetFn D_004480D8[];
void func_002FEE30(void) __attribute__((noreturn));
void func_002FEE30(void) { D_004480D8[0](); }
