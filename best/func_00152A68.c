typedef struct { f32 x, y, z; } V3;
typedef struct { char pad[0x44]; u32 seed; } Obj;
extern u32 D_00601FD0[];
extern char D_00600EA0[], D_00600EF0[];
void func_00180DA0(void *, V3, V3 *, f32);

void func_00152A68(Obj *o, V3 *p, s32 idx) {
    char *tab;
    f32 a, b;
    s32 n;
    if (D_00601FD0[idx >> 5] & (1 << (idx & 31))) {
        tab = D_00600EA0; a = 38.0f; b = 9.0f; n = 0x38;
    } else {
        tab = D_00600EF0; a = 15.0f; b = 2.0f; n = 0x1C;
    }
    if (n != 0) do {
        V3 vel, arg, pos, off;
        V3 *po = &off;
        u32 s = o->seed;
        f32 r1, r2, r3, r4, r5;
        n--;
        s = s * 0x19660D + 0x3C6EF35F; r1 = (s32)(s >> 16);
        s = s * 0x19660D + 0x3C6EF35F; r2 = (s32)(s >> 16);
        s = s * 0x19660D + 0x3C6EF35F; r3 = (s32)(s >> 16);
        s = s * 0x19660D + 0x3C6EF35F; r4 = (s32)(s >> 16);
        s = s * 0x19660D + 0x3C6EF35F; r5 = (s32)(s >> 16);
        po->x = (r1 * 0.0000152587890625f - 0.5f) * 25.0f;
        po->y = (r2 * 0.0000152587890625f - 0.5f) * 25.0f;
        po->z = b;
        vel.x = (r3 * 0.0000152587890625f - 0.5f) * 15.0f;
        vel.y = (r4 * 0.0000152587890625f - 0.5f) * 15.0f;
        vel.z = r5 * 0.0000152587890625f * a;
        o->seed = s;
        pos.x = p->x + po->x;
        pos.y = p->y + po->y;
        pos.z = p->z + po->z;
        arg = pos;
        func_00180DA0(tab, arg, &vel, 0.0f);
    } while (n != 0);
}
