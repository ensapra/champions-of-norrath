typedef struct { s32 v[135]; } Slot;
extern s32 D_001C4D34[];
extern s32 D_001C4D3C[];
extern Slot *D_001C6820[];
s32 func_0011C6C8();
s32 func_0011C6F0();
s32 func_00127E88();
void func_00128730();
void func_00128A48();
void func_0013BBA8();

s32 func_00126E90(void) {
    if (D_001C4D34[0] == -1) return 0;
    if (func_0011C6C8() & 0x10) {
        if (!(func_0011C6F0() & 0x10)) {
            if (D_001C6820[0][D_001C4D34[0]].v[0] != -1) {
                func_0013BBA8();
                D_001C4D3C[0] = 1;
                if (func_00127E88()) func_00128A48();
                func_00128730();
                return 1;
            }
        }
    }
    return 0;
}
