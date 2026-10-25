typedef struct { volatile f32 v[6]; } Bounds6; typedef struct Node {struct Node*next; s8 pad[4]; s8 type; s8 x[0x1B]; f32 r,cx,cy,cz;} Node;
extern Node *D_004F40F0[];
void func_0013C6F8(Bounds6 *in, Node **out, s32 max) {
 Bounds6 b; s32 x0,x1,y0,y1,z0,z1,x,y,z,n=0,lim; Node *p; Node **dst;
 b=*in;
 x0=((s32)(b.v[3]+11092.0f))>>8; x1=((s32)(b.v[0]+11820.0f))>>8;
 y0=((s32)(b.v[5]+11092.0f))>>8; y1=((s32)(b.v[1]+11820.0f))>>8;
 z0=((s32)(b.v[2]+11092.0f))>>8; z1=((s32)(b.v[4]+11820.0f))>>8;
 if(x0<0)x0=0; if(x1>=90)x1=89; if(y0<0)y0=0;if(y1>=90)y1=89;if(z0<0)z0=0;if(z1>=90)z1=89;
 for(x=x0;x<=x1;x++) for(y=y0;y<=y1;y++) for(z=z0;z<=z1;z++) {
 dst=(Node**)((u8*)D_004F40F0+(((x*45+y)*2+z)*4)); p=*dst;
 while(p) { f32 r=p->r; if(r!=0.0f && p->cx+r>=b.v[0] && b.v[3]>=p->cx-r && p->cy+r>=b.v[1] && b.v[4]>=p->cy-r && p->cz+r>=b.v[2] && b.v[5]>=p->cz-r && n<max-1 && p->type==D_00483AAC) out[n++]=p; p=p->next; }
 }
 out[n]=0;
}
