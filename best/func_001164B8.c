typedef struct { s32 pad0[3]; s32 fC; s32 pad10[3]; s32 f1C; } Info164;
extern char func_01000000[],func_001B9FD8[];
void func_001A2660(void*,s32,s32); void func_00107C00(void*,void*);
void ovl_ntgui2_func_00108E58(void*,void*,void*,s32,s32);
void func_0014CBF4(s32,void*,s32);
void func_001164B8(void *a0,Info164 *info) {
 u8 scratch[0x100];
 func_001A2660(scratch+0xc0,0,0x10);
 func_001A2660(scratch+0xd0,0,0x10);
 switch(*(s32*)(func_01000000+0xC2B84)) {
 case 0: { u64 *p=(u64*)(func_001B9FD8+0x1708); ((u64*)(scratch+0xe0))[0]=p[0xD0/8]; ((u64*)(scratch+0xe0))[1]=p[0xD8/8]; break; }
 case 1: { u64 *p=(u64*)(func_001B9FD8+0x1708); ((u64*)(scratch+0xe0))[0]=p[0x170/8]; ((u64*)(scratch+0xe0))[1]=p[0x178/8]; break; }
 case 2: { u64 *p=(u64*)(func_001B9FD8+0x1708); ((u64*)(scratch+0xe0))[0]=p[0x120/8]; ((u64*)(scratch+0xe0))[1]=p[0x128/8]; break; }
 case 3: case 4: case 5: break;
 }
 func_00107C00(scratch+0xf0,scratch+0xe0);
 ovl_ntgui2_func_00108E58(scratch+0xa0,scratch+0xe0,scratch+0xf0,info->f1C,info->fC);
 ovl_ntgui2_func_00108E58(scratch+0xb0,scratch+0xc0,scratch+0xd0,info->f1C,info->fC);
 *(s32*)(scratch+0)=0x12;
 *(u64*)(scratch+8)=(u64)(scratch+0xa0);
 *(s32*)(scratch+0x10)=0x39;
 *(u64*)(scratch+0x18)=(u64)(scratch+0xb0);
 func_0014CBF4(*(s32*)(func_01000000+0xC2B68),scratch,2);
}
