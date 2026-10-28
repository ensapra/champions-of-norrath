typedef __builtin_va_list va_list;
#define va_start(v,l) __builtin_stdarg_start((v),l)
#define va_arg(v,t) __builtin_va_arg((v),t)
#define va_end(v) __builtin_va_end(v)
typedef struct {s32 x0,x4; u64 x8; s64 items[1];} Obj;
extern void func_001704AC(void); extern void func_001704BC(Obj *,s32); extern void func_00170530(Obj *); extern void func_00170544(Obj *,s32); extern void func_00170568(Obj *,s32); extern s32 D_0048041C;
void func_0017010C(Obj *o,s32 n,...) {va_list ap; s64 *dst; s32 x;
 va_start(ap,n); dst=o->items; func_001704AC(); func_00170544(o,1); func_00170530(o); func_00170568(o,1);
 if(n>0) do {x=va_arg(ap,s32); if(x&0x80) x=(x^0x80)+D_0048041C; n--; func_001704BC(o,x); *dst++=va_arg(ap,s64);}while(n!=0); va_end(ap); }
