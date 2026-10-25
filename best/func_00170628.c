extern u8 func_001CCA60[];
void func_001706A8(u8 **, u8 *, s32);
u8 *D_00480418; s32 D_0048041C;
u8 *func_00170628(s32 idx){u16*p; if(idx&0x80) idx=(idx&~0x80)+D_0048041C; if(D_00480418==0) func_001706A8(&D_00480418, func_001CCA60+0x2B8, 0x63); p=(u16*)D_00480418+idx; if(*p==0) return 0; return func_001CCA60+0x2B8+*p;}
