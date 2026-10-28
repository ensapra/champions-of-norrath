extern u8 D_007DD290[];
void func_0024A5D0(s32 n){u8 *base=D_007DD290; u8 *b2=base+0xC; s32 ent=n*0x1C4; s32 ci=ent+0x1C0; s32 *cnt=(s32 *)(ci+base); if(*cnt<8){s32 off=*cnt*0x30+ent; s32 o2=off+0x50; u8 *q=base+o2; u8 *r=o2+base; *(base+off+0x40)=0; *(s32 *)(b2+off+0x60)=2; *(s32 *)r=0; *(s32 *)(q+8)=0; *(s32 *)(o2+b2)=0; *(s32 *)(q+4)=0; *cnt+=1;}}
