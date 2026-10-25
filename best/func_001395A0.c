extern s32 func_00138758(void *, s32, void **);
extern void func_00138900(void *, void *);
extern void func_00140678(void *, void **, s32);
extern void func_00143630(void *);
extern void *func_00143A58(void *);
typedef struct { s32 x,y,z; } V3i;
s32 func_001395A0(void *arg0, s32 *arg1) {
 char arena[0x800]; void *s; void *list[0x80]; char buf[0xA0]; void *out; V3i *p; void **q;
 func_00138758(arg0,arg1[1],&s);
 func_00138900(arena,s);
 func_00140678(arena,list,0x200);
 func_00138758(arg0,arg1[2],&s);
 func_00138900(buf,s);
 out=func_00143A58(buf);
 if(out) {
   p=(V3i *)((char *)out+0x10);
   q=list;
   if(*q) do {
     *(V3i *)*q=*p;
     *(u16 *)((char *)*q+0x38)=*(u16 *)((char *)out+0x38);
     func_00143630(*q);
     q++;
   } while(*q);
   out=0;
 }
 return (s32)out;
}
