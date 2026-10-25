typedef struct { f32 x,y,z; } Vec3; typedef struct { u8 pad[0x60]; } O; typedef struct { s32 next,pad; void *obj; } Node;
s32 func_0010B1C8(void*); s32 func_00113948(void*,s32); s32 func_001441B8(s32); s32 func_001535D0(Vec3,s16,void**,s32,f32,f32); s32 func_00165DC0(void*,void*); void func_00194300(void**); void func_0024D308(s32,void*,f32); void func_002AD058(void*,s32,void*,void*); extern char D_00478D20[],D_004863C0[];
s32 func_002AC4F0(O*p,void*arg1,void*owner,Vec3 pos,s16 angle,s32 a5) { void*list=0,*other=0,*base; s32 cnt=0,limit,id,result,off;Node*n;void*obj;s32 flags; s32(*first)(void*,s32,s32); volatile u32 dummy[2];
off=*(s32*)((char*)p+0x60);base=(char*)p+off+0x78;first=*(s32(**)(void*,s32,s32))((char*)base+4);id=first((char*)p+*(s16*)base,0,0x14);
result=func_00165DC0(D_004863C0,D_00478D20);func_0024D308(result,owner,1.0f);
off=*(s32*)((char*)p+0x60);base=(char*)p+off+0x58;limit=((s32(*)(void*,s32,s32))(*(s32(**)(void*,s32,s32))((char*)base+4)))((char*)p+*(s16*)base,0,id);
func_001535D0(pos,angle,&list,0,248.0f,120.0f);n=(Node*)list;
while(n&&cnt<limit){obj=n->obj;if(owner){off=*(s32*)((char*)owner+0x48);base=(char*)owner+off+0xa0;if(!((s32(*)(void*,void*))(*(s32(**)(void*,void*))((char*)base+4)))((char*)owner+*(s16*)base,obj)){n=(Node*)n->next;continue;}}s32 flags2=*(s32*)((char*)obj+0xc);if(!(flags2&0x01000000)&&func_0010B1C8(obj)==0&&*(s16*)((char*)obj+0x31a)<=0){void*item=(void*)func_001441B8(0x28);if(item)func_002AD058(item,id,obj,p);func_00113948(obj,(s32)item);cnt++;}n=(Node*)n->next;}
func_00194300(&list);func_00194300(&other);(void)arg1;(void)a5;(void)dummy;return 0;}
