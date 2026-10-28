typedef struct { s32 type; void *obj; s32 c; s32 d; } Arg;
extern void func_0014FA64(void); extern void func_00151E90(void*); extern void func_0014C900(void*); extern void func_0014F288(void*,s32); extern void func_001517DC(s32,void*,s32,Arg); extern void *func_00151F54(void*);
typedef struct { u16 type; char pad[0x1E]; char *obj; } Ent;
void func_0014F920(void *arg0) { char *a=arg0; void *list=a+0x9D0; Ent *entry; u16 type; s32 d; void *vt; s32 (*f)(void*,void*,s32,s32); Arg ar;
func_0014FA64();func_00151E90(list); if(*(s32*)(a+0x5F8)==0){func_0014C900(a);return;}
while((entry=func_00151F54(list))!=0) { type=entry->type;
 switch(type) { case 0: break;
 case 14: ar.type=type; ar.obj=entry->obj; func_001517DC(*(s32*)(entry->obj+0x578),entry->obj,0,ar); break;
 case 15: func_0014F288(a,*(s32*)(entry->obj+0xC8)); *(s32*)(entry->obj+0xC8)=0; ar.type=type; ar.obj=entry->obj; func_001517DC(*(s32*)(entry->obj+0x57C),entry->obj,0,ar); break;
 default: d=*(s32*)(a+0x5D4); vt=*(void**)(a+0x4C); f=*(void**)((char*)vt+0xBC); if(!f(a,entry,-(*(s32*)(a+0x5A0)+d),-(*(s32*)(a+0x5A4)+d)))func_0014C900(a); break; } } }
