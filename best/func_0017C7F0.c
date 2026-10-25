typedef struct { unsigned char q[40]; s32 a,b,c; unsigned char r[4]; s32 *data; } O;
typedef struct { f32 x,y; s32 z; } I;
extern f32 D_004800B0;
void func_0017C7F0(O *o,I p,f32 t) {
 f32 lo=t+5.0f, scale=D_004800B0;
 f32 x0=(p.x-lo)*scale+1.0f, x1=(p.x+t)*scale+1.0f;
 f32 y0=(p.y-lo)*scale+1.0f, y1=(p.y+t)*scale+1.0f;
 s32 a=(s32)x0-o->a,b=(s32)x1-o->a,c=(s32)y0-o->b,d=(s32)y1-o->b;
 if(a<b) { s32 row=d; do { if(row<c) { s32 *q=o->data+a+row*o->c; s32 n=c-row; do { s32 v=*q, h=v>>16; if(h<16)h=(s16)(h+1); *q=(v&65535)|(h<<16); q+=o->c; }while(--n); } a++; }while(a<b); }
}
