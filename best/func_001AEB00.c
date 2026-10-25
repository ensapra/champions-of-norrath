typedef struct { char pad[0xEC]; s32 cnt; char pad2[0x5DB0 - 0xF0]; } E1AEB;
typedef struct { s32 a; s32 b; s32 type; } T1AEB;
extern E1AEB D_00408600[];
extern T1AEB *D_0034B440[];
s32 func_001ABB48(s32, s64);
void func_001ABBE0(s32, s64, s32);
s32 func_001AC260(s32, s32);
void func_001AC2C0(s32, s32, s32);
void func_001BE0B0(s32, s32);
void func_001BE250(s64, s32, s32);

void func_001AEB00(s32 a, s8 b, s64 c)
{
    E1AEB *e = &D_00408600[a];

    if (e->cnt > 0) {
        if (b == 0) {
            if (func_001ABB48(a, c) < 20) {
                e->cnt--;
                func_001BE250(c, a, -1);
                func_001ABBE0(a, c, func_001ABB48(a, c) + 1);
                return;
            }
        } else {
            if (func_001AC260(a, c) < 20) {
                e->cnt--;
                if (func_001AC260(a, c) <= 0) {
                    if (D_0034B440[(s32)c]->type == 3) {
                        func_001AC2C0(a, c, 1);
                        return;
                    }
                    func_001BE0B0(c, a);
                    return;
                }
                func_001AC2C0(a, c, func_001AC260(a, c) + 1);
            }
        }
    }
}
