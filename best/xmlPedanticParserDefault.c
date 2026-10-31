/* identical to func_002FEE58 (matched), with its names changed by decompdecomp */
typedef void (*Handler)(void);
extern Handler D_004480D8[];

Handler xmlPedanticParserDefault(Handler h) {
    Handler old = D_004480D8[0];
    D_004480D8[0] = h;
    return old;
}
