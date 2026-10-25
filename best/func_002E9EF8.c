typedef struct { s32 r0,p4,p8,unkC; u8 pad10[2]; s8 unk12; u8 pad13[0xD]; s32 unk20; u8 pad24[0xC]; u8 data[1]; } Pkt;
typedef struct { s32 src; s32 size; } Aux;
extern s32 D_00447F6C[],D_00447F74[],D_00447F7C[];
extern char D_0047C8C8[],D_0047C8F8[],D_0047C930[],D_0047C970[],D_008EA780[];
extern Aux D_008EA930[];
void WaitSema_2(s32);
s32 func_002D8270(void*,s32,s32,void*,s32,void*,s32,void*,void*);
s32 func_002D8468(void*);
void func_00301FFC(void*,void*,s32);
void func_00302560(char*);
void func_002EAF10(void);
s32 func_002E9EF8(s32 a,s32 b,void*src,s32*size) {
 s32 r; Pkt*p;
 if(D_00447F7C[0]==-1)return 0x8000000A;
 if(src==0){func_00302560(D_0047C8C8);return 0x80000004;}
 if(size==0||D_00447F6C[0]<*size){func_00302560(D_0047C8F8);return 0x80000004;}
 if(func_002D8468(D_008EA780)!=0){func_00302560(D_0047C930);return 0x80000008;}
 WaitSema_2(D_00447F7C[0]);
 p=(Pkt*)D_00447F74[0]; p->unkC=a;p->unk12=b;p->unk20=*size;
 D_008EA930[0].src=(s32)src;D_008EA930[0].size=(s32)size;
 func_00301FFC(p->data,src,p->unk20);
 r=func_002D8270(D_008EA780,0x15,1,p,((*size+0x3F)>>4)<<4,p,0x30,func_002EAF10,D_008EA930);
 if(r){*size=0;func_00302560(D_0047C970);return 0x80000000;}
 return r;
}
