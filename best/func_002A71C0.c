extern const f32 D_00482AF4,D_00482AF8; extern volatile f32 D_00482AFC;
struct R { f32 a,b,c,lo; }; struct Elem { char pad[0xA0]; R r; f32 hi; char pad2[0x5DB0-0xB4]; }; extern Elem D_00408600[];
struct V12 { s32 a,b,c; }; struct Sub { char pad[0x8C]; volatile s16 h8c,h8e,h90,h92,h94,h96,h98; char pad2[0x3C0-0x9A]; s32 idx; };
class Base { public: char pad[0x14]; virtual void Fn(s32); }; class Obj:public Base { public: Sub *sub; f32 f1c,f20; void func_002A71C0(V12 v); };
void Obj::func_002A71C0(V12 v) { Sub *s=sub; f1c+=D_00482AF4; R *r=&D_00408600[s->idx].r; if(r->lo+1.0f<=D_00408600[s->idx].hi) r->lo+=f20; if(f1c<D_00482AF8) { s->h92=0x3f;s->h8c=0x68;s->h8e=0x6b;s->h90=0x40;s->h94=0x68;s->h96=0x6b;s->h98=0x40; } if(D_00482AFC<f1c && this) Fn(3); }
