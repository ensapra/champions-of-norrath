typedef struct { s32 value; u8 flag; u8 pad; u16 id; } R19;
typedef struct { char pad[0x70]; s32 (*fn)(s32, s32 *, s32); } Obj19;
extern char D_00366B34[];
Obj19 *D_004804D0;
s32 func_0019C030(void);
void func_0019BFD8(s32);
void func_0019C49C(void *, void *, s32);
s32 func_0019C8A8(s32 *);
s32 func_0019C7D0(u16 id, s32 x, s32 *list) {
    R19 r;
    if (id & 0x8000) {
        r.value = -1;
        r.flag = 0;
        r.id = id | 0x8000;
        func_0019C49C(D_00366B34, &r, 8);
        return 0;
    }
    if (D_004804D0->fn(func_0019C030(), list, 0) == 1)
        func_0019BFD8(0);
    if (func_0019C8A8(list))
        return 0;
    while (*list) {
        r.value = *list;
        r.flag = 0;
        r.id = 0;
        func_0019C49C(D_00366B34, &r, 8);
        list++;
    }
    return 0;
}
