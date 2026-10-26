typedef struct { s16 delta; u16 pad; s32 (*call)(void *); } Entry;
typedef struct {
 char pad0[0x24]; void *state;
 char pad28[0x20]; Entry *vtable;
 char pad4C[0x1F0]; s16 action;
} Actor;
void func_0010D428(void *, s32);
s32 func_0010EBF8(void *, s32);
s32 func_0010A428(void *, s32);
void func_00111830(void *, f32);
s32 func_00111490(void *, f32);
s32 func_001F6640(Actor *a) {
 void *p=a->state;
 func_0010D428(a,*(s32 *)((char *)p+0xC));
 if (func_0010EBF8(a,*(s32 *)((char *)a->state+0xC))) return 0;
 if (!func_0010A428(a,600)) return 0;
 func_00111830(a,1.0f);
 s32 x=func_00111490(a,0.5f);
 Entry *e=(Entry *)((char *)a->vtable+0xA8);
 e->call((char *)a+e->delta);
 return x;
}
