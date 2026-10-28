extern void (*D_010CE5EC[])(void);

void func_0013BC70(void) {
    if (D_010CE5EC[0] != NULL) {
        D_010CE5EC[0]();
    }
}
