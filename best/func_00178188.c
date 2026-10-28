typedef struct Blk { u8 pad[0x1294]; s32 sentinel; struct Blk *next; struct Blk *prev; u8 pad2[0x10]; } Blk;
extern s32 D_00484130; extern Blk *D_00484138; extern Blk *D_004869B8; extern Blk *D_004869BC;
s32 func_003021B0(void*,s32,s32);
void func_00178188(void){
    s32 row,col,i,n;
    Blk *p;
    s32 *q, *r;
    void * volatile sink;
    func_003021B0(D_00484138,0,D_00484130*0x12B0);
    D_004869B8=D_00484138;
    D_00484138->next=D_00484138+1;
    p=D_00484138+1;
    for(i=1;i<D_00484130-1;i++){
        p->next=p+1;
        p->prev=p-1;
        p++;
    }
    p=D_00484138+i;
    p->prev=p-1;
    D_004869BC=p;
    n=D_00484130;
    r=(s32*)((char*)D_00484138+0x1294);
    for(i=0;i<n;i++){ *r=-100000; r=(s32*)((char*)r+0x12B0); }
    for(row=0;row<D_00484130;row++){
        for(col=0;col<=32;){
            char *c=(char*)D_00484138+row*0x12B0+col*0x50;
            q=(s32*)(c+0x40);
            *q = col?0x14000038:0;
            q=(s32*)(c+0x44);
            *q=0;
            q++;
            if(col==32){ q[1]=0; col++; *q=0; }
            else { s32 t=((col+1)%3)*0x12c; col++; *q=t|0x04000000; q[1]=t|0x60000000|0x01200000; }
            r=q+2;
        }
        sink=r;
    }
}
