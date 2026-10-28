typedef struct { f32 x,y,z; } Vec3; typedef struct Node { struct Node *next; s32 pad[2]; void *obj; } Node;
extern "C" { s32 func_0010B1C8(void*); void func_00113948(void*,void*); void *func_001441B8(s32); void func_001535D0(Vec3*,s16,Node**,s32,f32,f32); void func_00194300(void*); void func_002C6F98(void*,s32,void*,void*); }
class Owner { public: char pad[0x48]; virtual void a();virtual void b();virtual void c();virtual void d();virtual void e();virtual void f();virtual void g();virtual void h();virtual void i();virtual void j();virtual void k();virtual void l();virtual void m();virtual void n();virtual void o();virtual void p();virtual void q();virtual void r();virtual void s();virtual s32 Check(void*); };
class C6460 {public:char pad[0x60];virtual void a();virtual void b();virtual void c();virtual void d();virtual void e();virtual void f();virtual void g();virtual void h();virtual void i();virtual void j();virtual s32 Get(s32,...);virtual void l();virtual void m();virtual void n();virtual s32 Other(void*,s32);s32 func_002C6460(void*,Owner*,Vec3*,s16,s32);};
s32 C6460::func_002C6460(void*arg1,Owner*owner,Vec3*src,s16 angle,s32 a5) { Vec3 pos=*src; struct List { Node *head; char pad[12]; } other,list; List *lp; List *op; Node *n; s32 cnt=0,limit,id; void *obj;
id=Other(arg1,1); limit=Get(0,id);
op=&other; op->head=0; lp=&list; lp->head=0; func_001535D0(&pos,angle,&lp->head,0,249.0f,120.0f); n=list.head;
while(n&&cnt<limit){obj=n->obj;if(owner&&!owner->Check(obj)){n=n->next;continue;} if(!(*(s32*)((char*)obj+0xc)&0x01000000)&&func_0010B1C8(obj)==0&&*(s16*)((char*)obj+0x31a)<=0){void*item=func_001441B8(0x28);if(item)func_002C6F98(item,id,obj,this);func_00113948(obj,item);cnt++;}n=n->next;}
func_00194300(lp);func_00194300(op);return 0;}
