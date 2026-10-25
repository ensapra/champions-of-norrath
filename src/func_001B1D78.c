typedef struct { s32 *p; char pad[0x44]; } E;
typedef struct { E e[0x40]; s32 count; s32 pad; } B;
typedef struct { B b[3]; char pad[0x5DB0 - 3 * 0x1208]; } T;
extern T D_00408748[];
s32 func_00305328(s32, s32);

void func_001B1D78(s32 a0, s32 a1, s32 *a2, s32 *a3) {
    s32 i, j;
    B *b = D_00408748[a0].b;
    *a2 = -1;
    for (i = 0; i < 3; i++, b++) {
        for (j = 0; j < b->count; j++) {
            if (func_00305328(a1, *b->e[j].p)) {
                *a2 = j;
                *a3 = i;
            }
        }
    }
}
