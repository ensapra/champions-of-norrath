typedef struct { u8 pad[4]; u16 type; } Node1671F8;
Node1671F8 *func_001671F8(char *);
void func_00304640(char *, char *);
u32 func_00304CFC(char *);

Node1671F8 *func_0025BF40(char *path) {
    char buf[0x80];
    Node1671F8 *n = 0;
    func_00304640(buf, path);
    while (func_00304CFC(buf) >= 2) {
        n = func_001671F8(buf);
        if (n->type != 0x3A) break;
        buf[func_00304CFC(buf) - 1] = 0;
    }
    if (n == 0) return func_001671F8(path);
    return n;
}
