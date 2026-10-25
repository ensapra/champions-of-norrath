typedef struct { unsigned char pad[0x52]; u8 unk52; } Obj95308;
extern u8 jtbl_004C006C[], D_004CECB8[], D_004CED70[];
void func_00195704(void *, s32); void func_00195A78(void *, s32, s32); void func_00195C24(void *, void *, s32); void func_00195FC4(void *); void func_001A1568(void *, s32, void *);
typedef struct __attribute__((packed)) { u64 a,b; } Pair95308;
void func_00195308(Obj95308 *arg0, s32 arg1) {
 u16 flags=(u16)arg1;
 if (!arg0) func_001A1568(D_004CECB8,0x361,D_004CED70);
 if (flags&8) func_00195704(arg0,0);
 if (flags&1) func_00195A78(arg0,8,2);
 if (flags&2) func_00195A78(arg0,9,2);
 if (flags&0x10) { Pair95308 tmp=*(Pair95308 *)(jtbl_004C006C+0xEE44); func_00195C24(arg0,(u8 *)&tmp+((arg0->unk52*2)&8),2); }
 if (flags&0x80) func_00195A78(arg0,4,2);
 if (flags&0x20) { func_00195FC4(arg0); *(s32 *)((u8*)arg0+0x4C)=0; }
 if (flags&0x800) func_00195A78(arg0,5,2);
}
