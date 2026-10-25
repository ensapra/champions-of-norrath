extern f32 D_00481360;
typedef struct { s32 id; char pad[0x1C]; } E;
typedef struct { char p0[0x24]; char *obj; char p1[0x124 - 0x28]; s8 count; char p2[3]; E e[1]; } O;
void func_00208B68(O *a) {
    s32 i = 0;
    if (a->count > 0) {
        f32 c = D_00481360;
        do {
            char *p = a->obj;
            s32 v = a->e[i].id;
            if (v == *(s32 *)(p + 0xB4) || v == *(s32 *)(p + 0x44) ||
                v == *(s32 *)(p + 0xBC) || v == *(s32 *)(p + 0x4C)) {
                *(f32 *)((char *)&a->e[i] + 0xC) = c;
            }
            i++;
        } while (i < a->count);
    }
}
