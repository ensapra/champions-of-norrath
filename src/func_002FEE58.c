typedef void (*Handler)(void);
extern Handler D_004480D8[];

Handler func_002FEE58(Handler h) {
    Handler old = D_004480D8[0];
    D_004480D8[0] = h;
    return old;
}
