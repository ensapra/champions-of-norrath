typedef struct {u8 r;u8 pad[3];s32 g,b,a,x,y;} Unp;
s32 func_00178B60(Unp *p,u64 *out){u64 ra=(u64)p->r|(((u64)p->a<<24)&0xFF000000ULL); u64 xb=(((u64)p->b<<16)&0xFF0000ULL)|(((u64)p->x<<32)&0x00FFFFFF00000000ULL); u64 gy=(((u64)p->g<<8)&0xFF00ULL)|((u64)p->y<<56); *out=ra|xb|gy; return 0;}
