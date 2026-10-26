typedef struct { u64 flags; u8 pad[0x18]; u64 mask; } Obj;
typedef struct { s32 x0,x4,x8; Obj *obj; s16 x10,x12,x14,x16,x18,x1a,x1c,x1e,x20,x22,x24,x26; } Ent;
extern Ent D_010EA1E0[];
void func_00174AA8(s32 arg0,s32 arg1,s32 arg2) {
 Obj *o=D_010EA1E0[arg0].obj;
 o->flags=(o->flags&~0x80)|((arg2&1)<<7);
 o->mask=arg1&0xFFFFFF;
}
