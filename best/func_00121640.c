extern s32 func_0014D048(s32,s32*,s32*); extern s32 func_0014CF30(s32,s32*,s32*); extern void func_00145230(s32,s32,s32,s32,s32,void*); extern void func_0014D328(s32,s32); extern s32 func_001A1640(s32); extern void func_00146038(s32*); extern void func_00121388(void); extern char D_010C6E70[],D_010C6E88[],D_010C6EB0[],D_010C6EB8[],func_001C44F8[];
void func_00121640(void){struct{u8 pad[0x20];s32 a,b,c,d;} local;s32 i=0,off=0;
func_0014D048(*(s32*)(D_010C6E70+(*(s32*)D_010C6EB8)*4),&local.a,&local.b);
func_0014CF30(*(s32*)(D_010C6E88+(*(s32*)D_010C6EB8)*16),&local.c,&local.d);
func_00145230(local.a,local.b,local.c,local.d,4,func_00121388);
func_0014D328(*(s32*)(D_010C6E70+(*(s32*)D_010C6EB8)*4),0);
do{local.a=func_001A1640(*(s32*)(D_010C6EB0+(*(s32*)D_010C6EB8)*4)+off);i++;off+=0x258;}while(i<4);
func_00146038(&local.a);*(s32*)(func_001C44F8+0xC4)=1;}
