typedef struct { s32 pad[1]; s32 field4; s32 field8; } S;
extern void *D_004CA0C0[];
extern s32 D_001C4CBC[]; extern u8 D_010C7B50[]; extern char D_001C6000[];
void func_00158524(void*, s32, s32, s32); void func_00124BA8(void); void func_001A42B8(void *,void *);
void func_00125260(void*a,void*b,S*c) {
    static void *const tbl[] = {&&a1, &&a2, &&a3, &&a4};
    u32 n = c->field8 + 1;
    if (n >= 8) goto end;
    goto *D_004CA0C0[n];
a1:
    { s32 *p = D_001C4CBC; s32 k = *p - 1; if (k < 0) k = 0; *p = k; D_010C7B50[k] = 0; }
    goto end;
a2:
    { s32 *p = D_001C4CBC; s32 k = *p - 1; if (k < 0) k = 0; *p = k; D_010C7B50[k] = 0; }
    func_00158524(a, 0, 0, 0); func_00124BA8(); c->field4 = 0;
    goto end;
a3:
    c->field4 = 0;
    goto end;
a4:
    D_010C7B50[0] = 0; D_001C4CBC[0] = 0;
end:
    func_001A42B8(D_001C6000, D_010C7B50);
}
