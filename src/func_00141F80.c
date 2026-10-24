extern s32 D_010D4440[];
extern s32 D_010D4444[];
extern s32 D_010D4448[];
extern s32 D_010D444C[];
extern s32 D_010D4450[];
extern s32 D_010D4454[];
extern s32 D_010D4458[];
extern s32 D_010D445C[];
extern s32 D_010D4460[];
void func_00141FA0(void);
void func_00141F80(void) {
    D_010D4440[0] = 0;
    func_00141FA0();
}
void func_001412B8(void) {
    D_010D445C[0] = 0;
    D_010D4460[0] = 0;
    D_010D4458[0] = 0;
    D_010D4454[0] = 0;
    D_010D4450[0] = 0;
    D_010D444C[0] = 0;
    D_010D4448[0] = 0;
    D_010D4444[0] = 0;
}
typedef struct Vec { s32 *data; s32 size; s32 unk8; s32 count; } Vec;
void func_001428E8(Vec *v);
void func_00142A20(Vec *v, s32 index, s32 *value) {
    s32 count = v->count;
    s32 i;
    if (count >= v->size) {
        func_001428E8(v);
        count = v->count;
    }
    for (i = count - 1; i >= index; i--)
        v->data[i + 1] = v->data[i];
    v->count = count + 1;
    v->data[index] = *value;
}
