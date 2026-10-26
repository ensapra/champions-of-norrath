typedef unsigned int u128 __attribute__((mode(TI)));
s32 func_00180CF4(void); void func_001916D0(s32,s32); void func_001917D8(s32,s32);
void func_00191860(s32,u128); void func_00191878(s32); void func_001919C8(s32,s32,s64);
void func_001A2850(void*); void ovl_ntgui2_func_00191830(s32);
struct Ctx { u8 pad0[0x80]; s32 val[16]; u8 pad1[0x564-0xC0]; s32 packet; };
struct Ctx *D_00480430; extern u8 jtbl_004C006C[];
s32 func_001807D8(s32 a0,s32 a1,s32 a2,s32 a3) {
 s32 x,y; s64 tx;
 if(func_00180CF4()<0xB){func_001A2850(jtbl_004C006C+0xD648);return -1;}
 x=(a0<<4)+0x6c00; tx=(s64)((a1<<4)+0x7200)<<16;
 func_001916D0(D_00480430->packet,0); y=(a2<<4)+0x6c00; func_001917D8(D_00480430->packet,0);
 func_00191860(D_00480430->packet,*(u128*)(jtbl_004C006C+0xD550));
 func_001919C8(D_00480430->packet,0,0x4c);
 func_001919C8(D_00480430->packet,1,(u64)D_00480430->val[0]|((u64)D_00480430->val[3]<<24)|((u64)D_00480430->val[2]<<16)|((u64)D_00480430->val[1]<<8));
 func_001919C8(D_00480430->packet,5,x|tx);
 func_001919C8(D_00480430->packet,1,(u64)D_00480430->val[4]|((u64)D_00480430->val[7]<<24)|((u64)D_00480430->val[6]<<16)|((u64)D_00480430->val[5]<<8));
 func_001919C8(D_00480430->packet,5,y|tx);
 tx=(s64)((a3<<4)+0x7200)<<16;
 func_001919C8(D_00480430->packet,1,(u64)D_00480430->val[8]|((u64)D_00480430->val[11]<<24)|((u64)D_00480430->val[10]<<16)|((u64)D_00480430->val[9]<<8));
 func_001919C8(D_00480430->packet,5,x|tx);
 func_001919C8(D_00480430->packet,1,(u64)D_00480430->val[12]|((u64)D_00480430->val[15]<<24)|((u64)D_00480430->val[14]<<16)|((u64)D_00480430->val[13]<<8));
 func_001919C8(D_00480430->packet,5,y|tx); func_00191878(D_00480430->packet); ovl_ntgui2_func_00191830(D_00480430->packet); return 0;
}
