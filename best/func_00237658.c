typedef struct __attribute__((packed,aligned(4))){u32 w[3];} Copy12; typedef struct{s32 a,b;} Pair;typedef struct{s32 p0,p4,p8,c,p10,e;} Model;
typedef struct{u8 pad0[0x10];Copy12 pos;u8 pad1[8];Model*model;u8 pad2[0x38-0x28];s16 s38;u8 pad3[0x120-0x3a];u8 b120[0x23c-0x120];s16 s23c;u8 pad4[0x3c4-0x23e];s32 n;u8 b3c8[0x408-0x3c8];u8 b408[0x450-0x408];s32 n2;} Obj;
void func_001DC2C0(void*,s32,void*,Copy12*,s32,s32,void*,s32,f32,f32,s32,s32);s32 func_00109808(Obj*,s32,s32,s32);void func_0016CBF8(Copy12*,s32);void func_0013E730(void*);void func_0016C060(s32,s32,s32,s32,s32,s32,s32,s32);void func_0013CB88(void);void func_0016CD20(void);
void func_00237658(Obj*o){Copy12 a,b;s32 r;
if(o->n){Model*m=o->model;Pair*x=(Pair*)m;func_001DC2C0(o->b408,x[o->n].b,o->b3c8,(a=o->pos,&a),o->s38,m->c,o->b120,o->s23c==6,0.5f,1.0f,0,0);}
r=func_00109808(o,o->model->c,o->model->e,0);
if(o->n){b=o->pos;func_0016CBF8(&b,o->pos.w[2]);func_0013E730((u8*)o+0x420);Pair*x=(Pair*)o->model;func_0016C060(x[o->n].b,x[o->n+1].b,0,o->model->c,r,-1,-1,0);func_0013CB88();func_0016CD20();}
}
