extern s32 func_00138758(void *, s32, void **); extern void func_00138900(void *, void *); extern void func_00140678(void *, void **, s32);
typedef struct { s16 delta; s16 pad; void (*fn)(void *, s32); } VT;
typedef struct { char pad[0x48]; VT *vt; } Obj;
s32 func_0013A6E8_listdispatch(void *arg0,s32 *arg1){
 struct {u8 buf[0xA0];void *s;s32 pad[3];Obj *arr[100];} l;
 Obj **arrp; Obj *obj; VT *t; u8 *p,*q; s32 i;
 func_00138758(arg0,arg1[1],&l.s);func_00138900(l.buf,l.s);func_00140678(l.buf,(void**)l.arr,100);arrp=l.arr;
 if(*(Obj**)arrp){i=0;p=(u8*)arrp+i;for(;;){i+=4;obj=*(Obj**)p;q=(u8*)&arrp[(u32)i>>2];t=obj->vt+3;t->fn((u8*)obj+t->delta,arg1[2]);if(*(Obj**)q==0)break;p=(u8*)arrp+i;}}return 0;}
