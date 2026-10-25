typedef struct { u8 pad[0x58]; u8 n; } G6E10;
typedef struct { s32 pad0; G6E10 *p; } A6E10;
void func_00266E10(A6E10 *a) {
    G6E10 *p = a->p;
    s32 i = 0;
    if (i < p->n) {
    loop:
        i++;
        if (i < p->n) goto loop;
    }
}
