typedef struct { int pad[3]; int *f; } B_249E60;
typedef struct { char pad[0x3C0]; B_249E60 *s; } A_249E60;
s32 func_00249E60(A_249E60 *a) {
    B_249E60 *p = a->s;
    if (p) {
        int *q = p->f;
        if (!(q[3] & 8)) return 1;
    }
    return 0;
}
