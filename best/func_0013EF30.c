typedef struct { volatile f32 v[3]; } Box3_ef30; typedef struct Ent_ef30 {struct Ent_ef30 *next; s32 unk4,unk8,flags; f32 x,y,z,radius;} Ent_ef30;
extern Ent_ef30 *D_004FC0C0[]; extern s32 D_00483AC0;
void func_0013EF30(Box3_ef30 *a, Box3_ef30 *b, Ent_ef30 **out, s32 max){
 Box3_ef30 aa=*a,bb=*b; s32 x0,x1,y0,y1,z0,z1,x,y,z,n=0; Ent_ef30 *e; Ent_ef30 **bucket;
 x0=((s32)(aa.v[0]+15264.0f))>>8; x1=((s32)(bb.v[0]+15456.0f))>>8;
 y0=((s32)(aa.v[1]+15264.0f))>>8; y1=((s32)(bb.v[1]+15456.0f))>>8;
 z0=((s32)(aa.v[2]+15264.0f))>>8; z1=((s32)(bb.v[2]+15456.0f))>>8;
 if(x0<0)x0=0;if(x1>=120)x1=119;if(y0<0)y0=0;if(y1>=120)y1=119;if(z0<0)z0=0;if(z1>=120)z1=119;
 for(x=x0;x<=x1;x++)for(y=y0;y<=y1;y++)for(z=z0;z<=z1;z++){
 bucket=(Ent_ef30**)((u8*)D_004FC0C0+(((x*15+y)*4+z)*4));e=*bucket;
 while(e){f32 r=e->radius;if(e->flags&D_00483AC0 && e->x+r>=aa.v[0]&&e->x-r<=bb.v[0]&&e->y+r>=aa.v[1]&&e->y-r<=bb.v[1]&&e->z>=aa.v[2]&&e->z+r<=bb.v[2]&&n<max-1)out[n++]=e;e=e->next;}
 } out[n]=0;
}
