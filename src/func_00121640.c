extern void func_0014D048(s32,s32*,s32*); extern void func_0014CF30(s32,s32*,s32*); extern void func_00145230(s32,s32,s32,s32,s32,void*); extern void func_0014D328(s32,s32); extern s32 func_001A1640(s32); extern void func_00146038(s32*); extern void func_00121388(void);
extern s32 D_010C6E70[], D_010C6EB8[], func_001C44F8[];
extern struct { s32 v; s32 pad[3]; } D_010C6E88[];
extern s32 *D_010C6EB0[];
extern s32 D_001C45BC[];
void func_00121640(void){
 s32 res[4]; s32 pad[4]; s32 a, b, c, d;
 s32 i;
 func_0014D048(D_010C6E70[D_010C6EB8[0]], &a, &b);
 func_0014CF30(D_010C6E88[D_010C6EB8[0]].v, &c, &d);
 func_00145230(a, b, c, d, 4, func_00121388);
 func_0014D328(D_010C6E70[D_010C6EB8[0]], 0);
 for (i = 0; i < 4; i++) {
  res[i] = func_001A1640(D_010C6EB0[0][D_010C6EB8[0]] + i * 0x258);
 }
 func_00146038(res);
 D_001C45BC[0] = 1;
}
