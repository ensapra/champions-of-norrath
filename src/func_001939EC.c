typedef struct { s32 x; s32 y; } Elem8;
typedef struct { Elem8 *data; s32 capacity; s32 growStep; s32 count; s32 step; } Vec8;
extern char D_004CECB8[];
extern char D_004CECC8[];
void func_00193AA4(Vec8 *);
void func_0019381C(Vec8 *);
void func_00193768(Vec8 *);
void func_001A24AC(s32, s32, s32);
void func_001A1568(char *, s32, char *);

void func_001939EC(Vec8 *arg0, s32 arg1) {
    s32 t;
    if (arg1 >= arg0->count) {
        func_001A1568(D_004CECB8, 0x56, D_004CECC8);
    }
    t = arg1 * 8 + (s32)arg0->data;
    func_001A24AC(t, t + 8, (arg0->count - arg1) * 8 - 8);
    if (--arg0->count == 0) {
        func_00193AA4(arg0);
    } else {
        func_0019381C(arg0);
    }
}

void func_0019393C(Vec8 *arg0, s32 arg1, Elem8 *arg2) {
    s32 i;

    if (arg0->count >= arg0->capacity) {
        func_00193768(arg0);
    }
    for (i = arg0->count - 1; i >= arg1; i--) {
        arg0->data[i + 1] = arg0->data[i];
    }
    arg0->data[arg1] = *arg2;
    arg0->count++;
}
