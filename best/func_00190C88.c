extern char func_01000000[];
s32 func_001B08B0(void*,s32,s32,void*,s32,void*,s32,s32,s32);
s32 func_001906A8(s32,s32,s32);
s32 func_00190C88(s32 a,s32 b,u8 *src){volatile u64 pad[4]; char *p=func_01000000+0xF4800; s32 i; s32 r; s32 state; *(s32*)p=8; *(s32*)(p+4)=a; *(s32*)(p+8)=b; i=0; do {p[0xc+i]=src[i]; i++;} while(i<6); r=func_001B08B0(func_01000000+0xF45C0,1,0,p,0x80,p,0x80,0,0); if(r<0) return 0; state=*(s32*)(p+0x14); if(state==1) func_001906A8(a,b,2); return *(s32*)(p+0x14);}
